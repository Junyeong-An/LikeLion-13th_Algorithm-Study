package prgm같은숫자는싫어;

import java.util.*;

public class Solution {
    public int[] solution(int[] arr) {
        Deque<Integer> stack = new ArrayDeque<>();

        for(int num:arr){
            if(stack.isEmpty() || stack.peek() != num){
                stack.push(num);
            }
        }

        int [] answer = new int[stack.size()];
        for(int i=answer.length -1;i>=0;i--){
            answer[i] = stack.pop();

        }

        return answer;
    }
}