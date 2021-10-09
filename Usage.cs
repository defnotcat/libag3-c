public static class Test {
    
    [DllImport("libag3.dll", EntryPoint = "encode_string")]
    public static extern void EncodeString(byte[] seed, string text, int length, string header, int headerLength, 
        byte[] outputBuff);

    public static void Main(string[] _) {
        var seed = Convert.FromBase64String("nAlAuNY4QIQhyltb6nJUO2mun6E0vxCHRv/lFvF3i5E=");
        var text = "hello world";
        var header = "X-ScT9D0Me-";
        var outputBuff = new byte[text.Length];
        EncodeString(seed, text, text.Length, header, header.Length, outputBuff);
        Console.WriteLine($"{text} encoded to {Convert.ToBase64String(outputBuff)}");
    }

}