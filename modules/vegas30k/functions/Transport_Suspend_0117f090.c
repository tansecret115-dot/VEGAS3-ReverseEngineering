/* Module: vegas30k.dll
   Function: Transport_Suspend
   Address: 0117f090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_Suspend(void) */

long Transport_Suspend(void)

{
  long lVar1;
  
                    /* 0x17f090  580  ?Transport_Suspend@@YGJXZ */
  lVar1 = 1;
  if (DAT_012b0b30 != (code *)0x0) {
    lVar1 = (*DAT_012b0b30)(DAT_012b0b2c,0x600,0,DAT_012b0b34,0,0);
  }
  return lVar1;
}


