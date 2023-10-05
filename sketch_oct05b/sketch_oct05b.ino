#include <stdio.h>
#include <stdint.h>

int main()
{
    union 
    {
      uint8_t deger;
      struct
      { 
          uint8_t bit0 : 1;
          uint8_t bit1 : 1;
          uint8_t bit2 : 1;
          uint8_t bit3 : 1;
          uint8_t bit4 : 1;
          uint8_t bit5 : 1;
          uint8_t bit6 : 1;
          uint8_t bit7 : 1;
      }bits;
      
      struct
      {
          uint8_t bit0 : 4;
          uint8_t bit1 : 4;
      }bitts;
    
    }myUnion;
    
    myUnion.deger = 0;
    
    uint8_t gaz = 30; //max 5 bit

    uint8_t vites = 6; //max 3 bit  000011110
    
    myUnion.deger = gaz;
    
    myUnion.deger &= ~(7 << 5);   //00011111  //clear
    
    myUnion.deger |= (vites << 5);  //11000000  //set
    
    //11000000
    
    
    
    printf("%d\n\n", myUnion.deger);
    
    printf("%d\n", myUnion.bits.bit0);
    printf("%d\n", myUnion.bits.bit1);
    printf("%d\n", myUnion.bits.bit2);
    printf("%d\n", myUnion.bits.bit3);
    printf("%d\n", myUnion.bits.bit4);
    printf("%d\n", myUnion.bits.bit5);
    printf("%d\n", myUnion.bits.bit6);
    printf("%d\n", myUnion.bits.bit7);
    
    /*printf("%d\n", myUnion.bitts.bit0);
    printf("%d\n", myUnion.bitts.bit1);*/
    
    
    
    return 0;
}
