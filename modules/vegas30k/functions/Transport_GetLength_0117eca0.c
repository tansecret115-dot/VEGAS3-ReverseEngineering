/* Module: vegas30k.dll
   Function: Transport_GetLength
   Address: 0117eca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall Transport_GetLength(void) */

__int64 Transport_GetLength(void)

{
  int *piVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = DAT_012b0b2c;
                    /* 0x17eca0  539  ?Transport_GetLength@@YG_JXZ */
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  if (DAT_012b0b2c == (int *)0x0) {
    return -1;
  }
  (**(code **)(*DAT_012b0b2c + 0xd8))();
  return CONCAT44(&local_8,piVar1);
}


