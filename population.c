int main(void)
{
     int years = 0;
    // TODO: Prompt for start size
    int start;
    do
    {
      start = get_int("Enter a starting population size: ");
         
    } while (start < 9);
  
    // TODO: Prompt for end size
    int end;
    do
    {
         end = get_int("Enter an ending population size: ");
        
    }   while(end < start);
    
    // TODO: Calculate number of years until we reach threshold
       
        while(start < end){
          int birth_rate = start / 3;
          int death_rate = start / 4;
          start = (start + birth_rate) - death_rate;
          years++;
        }     
        


    // TODO: Print number of years
    
         printf("Years: %i", years);
}



