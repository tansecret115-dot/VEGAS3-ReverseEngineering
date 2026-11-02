/* Module: vegas30k.dll
   Function: Transport_SetTempo
   Address: 0117ed60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetTempo(unsigned long) */

long Transport_SetTempo(ulong param_1)

{
  long lVar1;
  
                    /* 0x17ed60  571  ?Transport_SetTempo@@YGJK@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xc4))(DAT_012b0b2c,param_1,0xffffffff,0xffffffff,1);
  return lVar1;
}


