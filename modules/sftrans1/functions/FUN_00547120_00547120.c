/* Module: sftrans1.dll
   Function: FUN_00547120
   Address: 00547120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00547120(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) == -0x208) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_2 + 0x10,0x50,*(undefined4 *)(param_2 + 4));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


