/* Module: rnco3260.dll
   Function: FUN_636f3890
   Address: 636f3890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f3890(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = param_1 + 0x19;
  (**(code **)(param_1[0x19] + 0x50))(piVar1);
  if (param_1[0x12] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_1[1]);
    if (iVar2 < 0) {
      return 0x80070057;
    }
  }
  if (param_1[0x11] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,0,0,param_1[3],param_1[4]);
    if (iVar2 < 0) {
      return 0x80070057;
    }
  }
  if (param_1[0x13] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x34))(param_1,param_1[7],param_1[8]);
    if (iVar2 < 0) {
      return 0x80070057;
    }
  }
  if (param_1[0x14] == 0) {
    iVar2 = (**(code **)(*param_1 + 0x4c))(param_1,0,0,param_1[7],param_1[8]);
    if (iVar2 < 0) {
      return 0x80070057;
    }
  }
  iVar2 = FUN_636f37b0(param_1[1],param_1[2]);
  if (iVar2 == 0x16) {
    return 0x8004024a;
  }
  (**(code **)(*piVar1 + 0xc))(piVar1,iVar2);
  iVar2 = FUN_636f37b0(param_1[9],param_1[10]);
  if (iVar2 == 0x16) {
    return 0x8004024a;
  }
  (**(code **)(*piVar1 + 0x14))(piVar1,iVar2);
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_1[3],param_1[4]);
  (**(code **)(*piVar1 + 0x24))(piVar1,param_1[5],param_1[6],param_1[7],param_1[8]);
  (**(code **)(*piVar1 + 0x2c))(piVar1,param_1[0xb],param_1[0xc]);
  (**(code **)(*piVar1 + 0x3c))(piVar1,param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10]);
  uVar3 = (**(code **)(*piVar1 + 0x44))(piVar1);
  return uVar3;
}


