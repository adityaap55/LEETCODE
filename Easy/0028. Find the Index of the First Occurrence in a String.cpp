class Solution {
    public int strStr(String haystack, String needle) {
        if (needle.isEmpty()) {
            return 0;
        }

        if (!haystack.contains(needle)) {
            return -1;
        }

        return haystack.indexOf(needle);
    }
}
