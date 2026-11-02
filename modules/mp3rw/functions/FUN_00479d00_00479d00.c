/* Module: mp3rw.dll
   Function: FUN_00479d00
   Address: 00479d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479d00(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ((uint)*(byte *)((int)param_1 + 0x123) * (uint)*(byte *)(param_1 + 0x48) * param_1[0x30] +
           7 >> 3) + 1;
  puVar1 = FUN_00475a80(param_1,uVar4);
  param_1[0x39] = (int)puVar1;
  *puVar1 = 0;
  if ((*(byte *)((int)param_1 + 0x11d) & 0x10) != 0) {
    puVar1 = FUN_00475a80(param_1,param_1[0x34] + 1);
    param_1[0x3a] = (int)puVar1;
    *puVar1 = 1;
  }
  if ((*(byte *)((int)param_1 + 0x11d) & 0xe0) != 0) {
    puVar2 = FUN_00475a80(param_1,uVar4);
    param_1[0x38] = (int)puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if ((*(byte *)((int)param_1 + 0x11d) & 0x20) != 0) {
      puVar1 = FUN_00475a80(param_1,param_1[0x34] + 1);
      param_1[0x3b] = (int)puVar1;
      *puVar1 = 2;
    }
    if ((*(byte *)((int)param_1 + 0x11d) & 0x40) != 0) {
      puVar1 = FUN_00475a80(param_1,param_1[0x34] + 1);
      param_1[0x3c] = (int)puVar1;
      *puVar1 = 3;
    }
    if ((*(byte *)((int)param_1 + 0x11d) & 0x80) != 0) {
      puVar1 = FUN_00475a80(param_1,param_1[0x34] + 1);
      param_1[0x3d] = (int)puVar1;
      *puVar1 = 4;
    }
  }
  if (*(char *)((int)param_1 + 0x11b) == '\0') {
    uVar4 = param_1[0x30];
    param_1[0x32] = param_1[0x31];
  }
  else {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      param_1[0x32] = param_1[0x31];
      param_1[0x33] = param_1[0x30];
      goto LAB_00479e63;
    }
    param_1[0x32] = ((param_1[0x31] - DAT_004a6ecc) + -1 + DAT_004a6ee8) / DAT_004a6ee8;
    uVar4 = ((param_1[0x30] - DAT_004a6e94) + -1 + DAT_004a6eb0) / DAT_004a6eb0;
  }
  param_1[0x33] = uVar4;
LAB_00479e63:
  param_1[0x1f] = param_1[0x2a];
  param_1[0x1e] = param_1[0x29];
  return;
}


