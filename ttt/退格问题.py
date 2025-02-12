class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        if len(t) != len(s):
            return False
        else:
            slow = 0
            for fast in range(1, len(s)):
                if s[fast] != '#':
                    s[slow] = s[fast]
                    slow += 1

                else:
                    slow -= 1

    s = s[0:slow + 1]
    slow2 = 0
    for fast in range(1, len(t)):
        if t[fast] != '#':
            t[slow2] = t[fast]
            slow2 += 1

        else:
            slow2 -= 1


t = t[0:slow + 1]

return s == t
