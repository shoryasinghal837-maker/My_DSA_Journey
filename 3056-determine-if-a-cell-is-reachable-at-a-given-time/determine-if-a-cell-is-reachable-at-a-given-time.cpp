class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int width = abs(fx - sx);
        int length = abs(fy - sy);

        if (width == 0 && length == 0 && t == 1)
            return false;
        return t >= max(width, length);

    }
};