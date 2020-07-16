class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            return NULL;
        }

        ListNode *ls = head;
        ListNode *lf = head;
        ListNode *l = head;

        while (true)
        {

            if (ls == NULL || lf == NULL)
            {
                return NULL;
            }

            ls = ls->next;
            lf = lf->next;

            if (lf == NULL)
            {
                return NULL;
            }

            lf = lf->next;

            if (ls == lf)
            {
                break;
            }
        }

        while (l != ls)
        {
            l = l->next;
            ls = ls->next;
        }

        return ls;
    }
};