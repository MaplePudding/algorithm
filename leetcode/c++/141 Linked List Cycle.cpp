class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
        {
            return false;
        }

        if (head->next == NULL)
        {
            return false;
        }

        ListNode *ls = head;
        ListNode *lf = head;

        while (true)
        {

            if (ls == NULL || lf == NULL)
            {
                return false;
            }

            ls = ls->next;
            lf = lf->next;

            if (ls == NULL || lf == NULL)
            {
                return false;
            }

            lf = lf->next;

            if (ls == lf)
            {
                return true;
            }
        }
    }
};