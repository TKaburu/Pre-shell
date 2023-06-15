int main(int ac, char **av) 
{
        int t = 0;
        (void) ac;

        while (av[t] != NULL)
        {
                printf("%s\n", av[t]);
                t++;		
		}
		
		return 0;
}