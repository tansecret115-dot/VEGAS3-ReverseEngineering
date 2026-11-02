/* Module: vegas30k.dll
   Function: Transport_Resume
   Address: 0117f0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_Resume(int) */

long Transport_Resume(int param_1)

{
  long lVar1;
  
                    /* 0x17f0c0  559  ?Transport_Resume@@YGJH@Z */
  lVar1 = 1;
  if (DAT_012b0b30 != (code *)0x0) {
    lVar1 = (*DAT_012b0b30)(DAT_012b0b2c,0x700,&param_1,DAT_012b0b34,0,0);
  }
  return lVar1;
}


