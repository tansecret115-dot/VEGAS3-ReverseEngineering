/* Module: vegas30k.dll
   Function: Transport_GetPos
   Address: 0117ebd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall Transport_GetPos(void) */

__int64 Transport_GetPos(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x17ebd0  541  ?Transport_GetPos@@YG_JXZ */
  puVar2 = &local_8;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  if (DAT_012b0b2c == (int *)0x0) {
    return -1;
  }
  piVar1 = DAT_012b0b2c;
  (**(code **)(*DAT_012b0b2c + 0xa8))(DAT_012b0b2c,&local_8,0);
  return CONCAT44(puVar2,piVar1);
}


