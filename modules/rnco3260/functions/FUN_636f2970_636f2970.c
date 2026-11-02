/* Module: rnco3260.dll
   Function: FUN_636f2970
   Address: 636f2970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f2970(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[0x10] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_1[1]);
    if (iVar1 < 0) {
      return 0x80070057;
    }
  }
  if (param_1[0xf] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,0,0,param_1[2],param_1[3]);
    if (iVar1 < 0) {
      return 0x80070057;
    }
  }
  if (param_1[0x11] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_1[6],param_1[7]);
    if (iVar1 < 0) {
      return 0x80070057;
    }
  }
  if (param_1[0x12] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,0,0,param_1[6],param_1[7]);
    if (iVar1 < 0) {
      return 0x80070057;
    }
  }
  piVar2 = FUN_636f27c0(param_1 + -4);
  if (piVar2 != (int *)0x0) {
    FUN_636f2b90(param_1 + -4,piVar2);
    param_1[0x13] = 1;
    return 0;
  }
  param_1[0x13] = 0;
  return 0x8004024a;
}


