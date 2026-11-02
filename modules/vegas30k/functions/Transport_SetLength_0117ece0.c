/* Module: vegas30k.dll
   Function: Transport_SetLength
   Address: 0117ece0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetLength(__int64) */

long Transport_SetLength(__int64 param_1)

{
  long lVar1;
  
                    /* 0x17ece0  566  ?Transport_SetLength@@YGJ_J@Z */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fff0001;
  }
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xd4))(DAT_012b0b2c,param_1);
  return lVar1;
}


