/* Module: vegas30k.dll
   Function: Transport_Cleanup
   Address: 0117eb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_Cleanup(void) */

long Transport_Cleanup(void)

{
  long lVar1;
  
                    /* 0x17eb20  534  ?Transport_Cleanup@@YGJXZ */
  lVar1 = -0x7fff0001;
  if (DAT_012b0b2c != (int *)0x0) {
    Mixer_CleanUp();
    (**(code **)(*DAT_012b0b2c + 0x14))(DAT_012b0b2c,0);
    lVar1 = (**(code **)(*DAT_012b0b2c + 0x1c))(DAT_012b0b2c);
    (**(code **)(*DAT_012b0b2c + 8))(DAT_012b0b2c);
    DAT_012b0b2c = (int *)0x0;
  }
  return lVar1;
}


