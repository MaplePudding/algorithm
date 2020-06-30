class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        string s = "";
        priority_queue<pair<int, char>, vector<pair<int, char>>> pq;
        pq.push({a, 'a'});
        pq.push({b, 'b'});
        pq.push({c, 'c'});
        while (!pq.empty())
        {
            pair<int, char> p = pq.top();
            pq.pop();
            if (p.first == 0)
                break;
            if (s.length() >= 2 && p.second == s[s.length() - 1] && p.second == s[s.length() - 2])
            {
                pair<int, char> q = pq.top();
                if (q.first == 0)
                    break;
                pq.pop();
                pq.push(p);
                s = s + q.second;
                q.first -= 1;
                pq.push(q);
                continue;
            }
            if (p.first == 0)
                break;
            s = s + p.second;
            p.first -= 1;
            pq.push(p);
        }
        return s;
    }
};