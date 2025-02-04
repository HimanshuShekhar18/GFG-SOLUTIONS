#include<bits/stdc++.h>
using namespace std;

class Node{

      public:
      int data;
      Node *next;

      Node(int data){
            data=data;
            next=nullptr;
      }
};

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
            Node* head = new Node(arr[0]);
            Node* mover = head;
            Node* temp;
            for(int i = 1; i<arr.size(); i++){
                  temp = new Node(arr[i]);
                  mover->next=temp;
                  mover=temp;
            }
      return head;
    }
};
