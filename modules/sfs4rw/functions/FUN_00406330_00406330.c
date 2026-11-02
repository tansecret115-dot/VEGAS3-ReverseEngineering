/* Module: sfs4rw.dll
   Function: FUN_00406330
   Address: 00406330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406330(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x240) == 2) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x374) + 0x570);
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x374) + 0x574);
    }
  }
  else {
    uVar1 = FUN_004062d0(param_2,param_3,*(int *)(param_1 + 0x240));
  }
  *(uint *)(param_1 + 0x1d8) = uVar1;
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 1;
  }
  if ((uVar1 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  if ((uVar1 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x230) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  return;
}


