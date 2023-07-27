// Java program to Generate MD5 Checksum for Files

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class A43Q4 
{
	public static void main(String[] args)
		throws IOException, NoSuchAlgorithmException
	{

		
		File file = new File("Demo.txt");
		MessageDigest mdigest = MessageDigest.getInstance("MD5");
		String checksum = checksum(mdigest, file);
		System.out.println(checksum);
	}

	private static String checksum(MessageDigest digest,File file)throws IOException
	{
		FileInputStream fis = new FileInputStream(file);
		byte[] byteArray = new byte[1024];
		int bytesCount = 0;

		while ((bytesCount = fis.read(byteArray)) != -1)
		{
			digest.update(byteArray, 0, bytesCount);
		};

		fis.close();
		byte[] bytes = digest.digest();

		StringBuilder sb = new StringBuilder();

		for (int i = 0; i < bytes.length; i++) 
        {
			sb.append(Integer
					.toString((bytes[i] & 0xff) + 0x100, 16)
					.substring(1));
		}
		return sb.toString();
	}
}
