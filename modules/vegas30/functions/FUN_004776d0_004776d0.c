/* Module: vegas30.exe
   Function: FUN_004776d0
   Address: 004776d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004776d0(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_50 [80];
  
  local_50[0] = 0;
  iVar1 = FUN_00475780(local_50,0x50,param_2,*(uint *)(param_1 + 0x174) & 0xff);
  if ((iVar1 != 0) && (param_2 != 0)) {
    DAT_0064be68 = 0;
    _DAT_0064be7c = _DAT_0064be7c | 4;
    _DAT_0064be6c = 0;
    DAT_0064be70 = 0;
    _DAT_0064be74 = 0;
    _DAT_0064be78 = param_2;
  }
  return;
}


