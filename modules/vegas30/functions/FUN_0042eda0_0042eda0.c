/* Module: vegas30.exe
   Function: FUN_0042eda0
   Address: 0042eda0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042eda0(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (((param_2 == 0 || ((*(uint *)(param_1 + 0x10) & 0x10) != 0)) ||
      ((param_3 != 0 && ((*(uint *)(param_1 + 0x10) & 0x80000000) != 0)))))) {
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((iVar2 <= param_5) && ((iVar2 < param_5 || (uVar1 < param_4)))) {
      iVar2 = *(int *)(param_1 + 0x24) + iVar2 + (uint)CARRY4(*(uint *)(param_1 + 0x20),uVar1);
      if ((param_5 <= iVar2) && ((param_5 < iVar2 || (param_4 < *(uint *)(param_1 + 0x20) + uVar1)))
         ) {
        return 1;
      }
    }
  }
  return 0;
}


