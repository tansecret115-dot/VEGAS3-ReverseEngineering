/* Module: sftrans1.dll
   Function: FUN_0052d210
   Address: 0052d210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0052d210(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) == -0x208) {
    iVar1 = (**(code **)*param_1)(param_2 + 0x10,0x50,*(undefined4 *)(param_2 + 4));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


