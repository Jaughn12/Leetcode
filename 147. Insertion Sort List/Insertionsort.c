#include <stdio.h>
#include <stdlib.h>


// Function to perform insertion sort on a linked list
struct ListNode* insertionSortList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode dummy; // Dummy node to serve as the new head of the sorted list
    dummy.val = 0;
    dummy.next = head;
    struct ListNode* curr = head->next; // Start with the second node in the original list

    while (curr != NULL) {
        if (curr->val < head->val) {
            struct ListNode* prev = &dummy;
            while (prev->next != NULL && prev->next->val < curr->val) {
                prev = prev->next;
            }
            // Insert the current node between prev and prev->next
            head->next = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            curr = head->next;
        } else {
            head = head->next;
            curr = curr->next;
        }
    }

    return dummy.next; // Return the head of the sorted list
}

// Function to print the linked list
void printList(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");
}

// Function to free the memory allocated for the linked list
void freeList(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr != NULL) {
        struct ListNode* temp = curr;
        curr = curr->next;
        free(temp);
    }
}


