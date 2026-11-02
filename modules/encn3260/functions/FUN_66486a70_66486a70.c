/* Module: encn3260.dll
   Function: FUN_66486a70
   Address: 66486a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66486a70(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x158) + 4))();
  iVar1 = *param_3;
  if (iVar1 != 0) {
    do {
      (**(code **)(*(int *)(param_1 + -0x18) + 0x44))((int *)(param_1 + -0x18),iVar1);
      iVar1 = param_3[1];
      param_3 = param_3 + 1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(int **)(param_1 + 0x158) + 8))();
  return 0;
}


