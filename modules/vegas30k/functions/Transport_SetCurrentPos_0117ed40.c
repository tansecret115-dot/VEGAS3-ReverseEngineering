/* Module: vegas30k.dll
   Function: Transport_SetCurrentPos
   Address: 0117ed40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_SetCurrentPos(__int64) */

long Transport_SetCurrentPos(__int64 param_1)

{
  long lVar1;
  
                    /* 0x17ed40  565  ?Transport_SetCurrentPos@@YGJ_J@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xd0))(DAT_012b0b2c,param_1,0xffffffff,0xffffffff);
  return lVar1;
}


