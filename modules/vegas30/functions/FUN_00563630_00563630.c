/* Module: vegas30.exe
   Function: FUN_00563630
   Address: 00563630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00563630(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    *(int *)(param_4 + 0x18) = iVar1;
    *(int *)(param_4 + 0x1c) = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c);
    return 0;
  }
  return 0;
}


