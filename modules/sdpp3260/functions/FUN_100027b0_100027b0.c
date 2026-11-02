/* Module: sdpp3260.dll
   Function: FUN_100027b0
   Address: 100027b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_100027b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 != 0) {
    piVar1 = (int *)param_1[1];
    while (piVar1 != (int *)0x0) {
      local_8 = piVar1;
      FUN_10002800((int *)&local_8);
      (**(code **)(*param_1 + 0x20))(piVar1);
      piVar1 = local_8;
    }
  }
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


