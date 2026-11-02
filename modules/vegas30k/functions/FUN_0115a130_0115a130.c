/* Module: vegas30k.dll
   Function: FUN_0115a130
   Address: 0115a130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115a130(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ((uint)*(byte *)(param_1 + 0x123) * (uint)*(byte *)(param_1 + 0x120) *
           *(int *)(param_1 + 0xc0) + 7 >> 3) + 1;
  puVar1 = (undefined1 *)FUN_01155eb0(param_1,uVar4);
  *(undefined1 **)(param_1 + 0xe4) = puVar1;
  *puVar1 = 0;
  if ((*(byte *)(param_1 + 0x11d) & 0x10) != 0) {
    puVar1 = (undefined1 *)FUN_01155eb0(param_1,*(int *)(param_1 + 0xd0) + 1);
    *(undefined1 **)(param_1 + 0xe8) = puVar1;
    *puVar1 = 1;
  }
  if ((*(byte *)(param_1 + 0x11d) & 0xe0) != 0) {
    puVar2 = (undefined4 *)FUN_01155eb0(param_1,uVar4);
    *(undefined4 **)(param_1 + 0xe0) = puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if ((*(byte *)(param_1 + 0x11d) & 0x20) != 0) {
      puVar1 = (undefined1 *)FUN_01155eb0(param_1,*(int *)(param_1 + 0xd0) + 1);
      *(undefined1 **)(param_1 + 0xec) = puVar1;
      *puVar1 = 2;
    }
    if ((*(byte *)(param_1 + 0x11d) & 0x40) != 0) {
      puVar1 = (undefined1 *)FUN_01155eb0(param_1,*(int *)(param_1 + 0xd0) + 1);
      *(undefined1 **)(param_1 + 0xf0) = puVar1;
      *puVar1 = 3;
    }
    if ((*(byte *)(param_1 + 0x11d) & 0x80) != 0) {
      puVar1 = (undefined1 *)FUN_01155eb0(param_1,*(int *)(param_1 + 0xd0) + 1);
      *(undefined1 **)(param_1 + 0xf4) = puVar1;
      *puVar1 = 4;
    }
  }
  if (*(char *)(param_1 + 0x11b) == '\0') {
    uVar4 = *(uint *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc4);
  }
  else {
    if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc0);
      goto LAB_0115a293;
    }
    *(uint *)(param_1 + 200) =
         ((*(int *)(param_1 + 0xc4) - DAT_0120707c) + -1 + DAT_01207098) / DAT_01207098;
    uVar4 = ((*(int *)(param_1 + 0xc0) - DAT_01207044) + -1 + DAT_01207060) / DAT_01207060;
  }
  *(uint *)(param_1 + 0xcc) = uVar4;
LAB_0115a293:
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
  return;
}


