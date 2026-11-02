/* Module: vidcap30.exe
   Function: FUN_0043e7f0
   Address: 0043e7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043e7f0(int param_1)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  if (*(int *)(param_1 + 0x1c50) != 0) {
    iVar1 = (**(code **)(*DAT_005bb0e8 + 0x10))(param_1 + 0x18b0,0x104);
    if (-1 < iVar1) {
      FUN_0042b8b0(unaff_retaddr,param_1 + 0x18b0);
      *(undefined4 *)(param_1 + 0x1c50) = 0;
    }
    return iVar1;
  }
  return 1;
}


