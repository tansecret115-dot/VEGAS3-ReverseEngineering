/* Module: erv23260.dll
   Function: FUN_637fdd60
   Address: 637fdd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fdd60(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_637fd530(this,0xd,0x6382ab70,0x6382ad70);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = (int)(char)((uint)iVar1 >> 8);
  iVar1 = FUN_637fd530(this,0xd,0x6382ab70,0x6382ad70);
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = (int)(char)((uint)iVar1 >> 8);
  return 1;
}


