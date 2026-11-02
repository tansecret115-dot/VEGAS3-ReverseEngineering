/* Module: vegas30k.dll
   Function: Transport_GetRecPos
   Address: 0117ec60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall Transport_GetRecPos(void) */

__int64 Transport_GetRecPos(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x17ec60  546  ?Transport_GetRecPos@@YG_JXZ */
  puVar2 = &local_8;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  if (DAT_012b0b2c == (int *)0x0) {
    return -1;
  }
  piVar1 = DAT_012b0b2c;
  (**(code **)(*DAT_012b0b2c + 0xa8))(DAT_012b0b2c,&local_8,0x20);
  return CONCAT44(puVar2,piVar1);
}


