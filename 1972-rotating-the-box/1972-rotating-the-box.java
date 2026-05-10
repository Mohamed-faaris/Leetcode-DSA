class Solution {
    public char[][] rotateTheBox(char[][] boxGrid) {
        for (int i = 0; i < boxGrid.length; i++) {
            int empty = boxGrid[0].length - 1;
            for (int j = boxGrid[0].length - 1; j >= 0; j--) {
                if (boxGrid[i][j] == '#') {
                    boxGrid[i][j] = '.';
                    boxGrid[i][empty] = '#';
                    empty--;
                } else if (boxGrid[i][j] == '*') {
                    empty = j - 1;
                }
            }
        }
        char[][] rotated = new char[boxGrid[0].length][boxGrid.length];
        for (int i = 0; i < boxGrid.length; i++) {
            for (int j = 0; j < boxGrid[0].length; j++) {
                rotated[j][boxGrid.length - i - 1] = boxGrid[i][j];
            }
        }
        return rotated;
    }
}