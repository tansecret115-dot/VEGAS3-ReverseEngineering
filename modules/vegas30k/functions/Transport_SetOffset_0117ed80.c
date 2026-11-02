/* Module: vegas30k.dll
   Function: Transport_SetOffset
   Address: 0117ed80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetOffset(__int64) */

long Transport_SetOffset(__int64 param_1)

{
  long lVar1;
  
                    /* 0x17ed80  568  ?Transport_SetOffset@@YGJ_J@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xcc))(DAT_012b0b2c,0,param_1);
  return lVar1;
}


