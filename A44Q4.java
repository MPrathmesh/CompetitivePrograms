
//Write java program to accept directory name from user and write data of all files all with names into one newly created file named as "Marvellous.txt"
import java.io.*;

class A44Q4 
{
    public static void main(String[] args) throws IOException 
    {
        File dir = new File("Directory");

        PrintWriter pw = new PrintWriter("Marvellous.txt");

        String[] fileNames = dir.list();

        for (String fileName : fileNames) {
            System.out.println("Reading from " + fileName);

            File f = new File(dir, fileName);

            BufferedReader br = new BufferedReader(new FileReader(f));
            pw.println("Names Of File " + fileName);

            String line = br.readLine();
            while (line != null) 
            {
                pw.println(line);
                line = br.readLine();
            }
            pw.flush();
            br.close();
        }
        System.out.println("Reading from all files" +" in directory " + dir.getName() + " Completed");
        pw.close();;
    }
}
