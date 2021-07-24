void makecycle(node *&head, int pos)
// {
//     node *temp = head;
//     node *startcycle;
//     int count = 1;
//     while (temp->next != NULL)
//     {
//         if (count == pos)
//         {
//             startcycle = temp;
//         }
//         temp = temp->next;
//         count++;
//     }
//     temp->next = startcycle;
// }