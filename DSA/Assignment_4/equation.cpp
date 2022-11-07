/* Implemet Arithmetic expression solving
equations using linklist. For Example: (ax^2 + bx + c)*/

#include <iostream>
#include <math.h>
using namespace std;

struct node
{
    int coefficient;
    int power;
    node *next;
};

float solve(node *start_node, float x)
{
    node *cur = start_node;
    float ans = 0;
    do
    {
        ans = ans + (cur->coefficient) * pow(x, cur->power);
        cur = cur->next;
    } while (cur != NULL);
    return ans;
}

int main()
{
    int n;
    cout << "enter the degree of equation :";
    cin >> n;
    node *head = new node();
    head->coefficient = 0;
    head->power = n + 1;
    node *cur = head;
    for (int i = n; i >= 0; i--)
    {
        node *temp = new node();
        cout << "enter the coefficient of x^" << i << " ";
        cin >> temp->coefficient;
        temp->power = i;
        temp->next = NULL;
        cur->next = temp;
        cur = cur->next;
    }
    float x;
    cout << "enter the value of x : ";
    cin >> x;
    int ans;
    ans = solve(head, x);
    cout << "answer is : ";
    cout << ans;

    return 0;
}
