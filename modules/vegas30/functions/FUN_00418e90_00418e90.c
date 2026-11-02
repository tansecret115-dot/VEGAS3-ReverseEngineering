/* Module: vegas30.exe
   Function: FUN_00418e90
   Address: 00418e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00418e90(int *param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = (int *)0x0;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    piVar1 = param_1;
    (**(code **)(*param_1 + 0x70))(param_1,2,&local_4);
  }
  return piVar1;
}


