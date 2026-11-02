/* Module: extmondrv.dll
   Function: FUN_00402ff0
   Address: 00402ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402ff0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  wcscpy((wchar_t *)(param_2 + 2),(wchar_t *)(param_1 + 0x33));
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 1);
  piVar1 = (int *)param_1[3];
  *param_2 = (int)piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


