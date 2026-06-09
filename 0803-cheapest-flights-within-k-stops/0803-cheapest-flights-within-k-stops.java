import java.util.*;

class Solution {
    public int findCheapestPrice(int n, int[][] flights, int src, int dst, int k) {

        List<int[]>[] graph = new ArrayList[n];

        for (int i = 0; i < n; i++) {
            graph[i] = new ArrayList<>();
        }

        for (int[] flight : flights) {
            graph[flight[0]].add(new int[] { flight[1], flight[2] });
        }

        int[] minCost = new int[n];
        Arrays.fill(minCost, Integer.MAX_VALUE);

        Queue<int[]> queue = new LinkedList<>();
        queue.offer(new int[] { src, 0 });

        minCost[src] = 0;

        int stops = 0;

        while (!queue.isEmpty() && stops <= k) {

            int size = queue.size();

            // Prevent updates within the same level
            int[] nextCost = minCost.clone();

            for (int i = 0; i < size; i++) {

                int[] current = queue.poll();
                int city = current[0];
                int cost = current[1];

                for (int[] edge : graph[city]) {

                    int nextCity = edge[0];
                    int newCost = cost + edge[1];

                    if (newCost < nextCost[nextCity]) {
                        nextCost[nextCity] = newCost;
                        queue.offer(new int[] { nextCity, newCost });
                    }
                }
            }

            minCost = nextCost;
            stops++;
        }

        return minCost[dst] == Integer.MAX_VALUE ? -1 : minCost[dst];
    }
}