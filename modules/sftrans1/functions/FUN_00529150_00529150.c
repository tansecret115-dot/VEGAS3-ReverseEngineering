/* Module: sftrans1.dll
   Function: FUN_00529150
   Address: 00529150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00529150(int param_1,int param_2,int *param_3)

{
  if ((((param_2 != 0) && (param_3 != (int *)0x0)) && (*param_3 != 0)) && (param_3[1] != 0)) {
    *(int *)(param_1 + 0x54) = param_2;
    *(int *)(param_1 + 0x60) = *param_3;
    *(int *)(param_1 + 100) = param_3[1];
    FUN_005291b0();
    return 1;
  }
  return 0;
}


