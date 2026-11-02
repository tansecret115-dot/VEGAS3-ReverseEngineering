/* Module: aviplug.dll
   Function: FUN_5f9520e0
   Address: 5f9520e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9520e0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0x64737664) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffa;
  }
  if (*(int *)(param_2 + 4) != 0x2d0) {
    return 0xfffffffe;
  }
  if (uVar1 < 0x70766460) {
    if (uVar1 != 0x7076645f) {
      if ((uVar1 != 0x6e76645f) && (uVar1 != 0x6e766477)) {
        return 0xfffffffe;
      }
      iVar2 = 0x1e0;
      goto LAB_5f952136;
    }
  }
  else if (uVar1 != 0x70766477) {
    return 0xfffffffe;
  }
  iVar2 = 0x240;
LAB_5f952136:
  if ((((iVar2 == *(int *)(param_2 + 8)) && (*(int *)(param_2 + 0x10) == 0)) &&
      (*(short *)(param_2 + 0xe) == 0x18)) &&
     ((param_3 == 0 ||
      (((*(short *)(param_3 + 0xe) == 0x18 && (*(int *)(param_3 + 4) == 0x2d0)) &&
       ((iVar2 == *(int *)(param_3 + 8) && (*(int *)(param_3 + 0x10) == 0x64737664)))))))) {
    return 0;
  }
  return 0xfffffffe;
}


