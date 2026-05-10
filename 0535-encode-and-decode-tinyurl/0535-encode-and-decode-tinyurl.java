public class Codec {
    ArrayList<String> mp = new ArrayList<>();
    private String base = "http://faaris.dev/";

    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        String shortUrl = base + mp.size();
        mp.add(longUrl);
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        int key = Integer.parseInt(shortUrl.substring(
                shortUrl.lastIndexOf("/") + 1));
        
        return mp.get(key);
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));