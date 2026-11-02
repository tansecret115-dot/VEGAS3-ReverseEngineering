/* Module: mp3plug.dll
   Function: FUN_5f6cfb80
   Address: 5f6cfb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6cfb80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    if (param_1[0x13] != 0) {
      FUN_5f6d97a0(param_1[0x13]);
    }
    if (param_1[0x16] != 0) {
      FUN_5f6d97a0(param_1[0x16]);
    }
    if (param_1[2] != 0) {
      FUN_5f6daa20(param_1[2]);
    }
    if (param_1[1] != 0) {
      FUN_5f6db8d0(param_1[1]);
    }
    if ((int *)*param_1 != (int *)0x0) {
      FUN_5f6dc040((int *)*param_1);
    }
    if (param_1[3] != 0) {
      FUN_5f6dc470(param_1[3]);
    }
    FUN_5f6ddb50((int)(param_1 + 0x1a));
    piVar2 = param_1;
    for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    FUN_5f6d97a0((int)param_1);
  }
  return;
}


