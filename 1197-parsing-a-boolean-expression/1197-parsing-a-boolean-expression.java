class Solution {
    public boolean parseBoolExpr(String expression) {
        Stack<Character> stack = new Stack<>();
        for(char ch : expression.toCharArray()) {
            if(ch == ',' || ch == '(') {
                continue;
            }
            if(ch != ')') {
                stack.push(ch);
            }
            else {
                boolean hasTrue = false;
                boolean hasFalse = false;
                while(
                    stack.peek() == 't' ||
                    stack.peek() == 'f'
                ) {
                    char value = stack.pop();
                    if(value == 't') hasTrue = true;
                    else hasFalse = true;
                }
                char operator = stack.pop();
                
                char result = 'f';
                if(operator == '!') {
                    result = hasTrue ? 'f' : 't';
                }
                else if(operator == '&') {
                    result = hasFalse ? 'f' : 't';
                }
                else if(operator == '|') {
                    result = hasTrue ? 't' : 'f';
                }
                stack.push(result);
            }
        }
        return stack.peek() == 't';
    }
}