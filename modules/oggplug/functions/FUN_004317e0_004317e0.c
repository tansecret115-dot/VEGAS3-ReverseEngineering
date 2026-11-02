/* Module: oggplug.dll
   Function: FUN_004317e0
   Address: 004317e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004317e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStackY_9c [92];
  int local_c;
  
  iVar2 = param_1;
  FUN_00444a80();
  iVar5 = *(int *)(param_1 + 0x14);
  FUN_00444a80();
  *(undefined4 *)(param_1 + 0x1c) = 1;
  if ((0x40 < iVar5 - *(int *)(param_1 + 0x30)) &&
     (local_c = 0, 0 < *(int *)(*(int *)(param_1 + 4) + 4))) {
    param_1 = 0;
    do {
      puVar4 = (undefined4 *)&stack0xffffffe4;
      iVar3 = 0;
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 - iVar3;
          iVar3 = iVar3 + 1;
          *puVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 8) + param_1) + -4 + iVar5 * 4);
          iVar5 = *(int *)(iVar2 + 0x14);
          puVar4 = puVar4 + 1;
        } while (iVar3 < iVar5);
      }
      puVar4 = (undefined4 *)&stack0xffffffe4;
      FUN_00438430((int)puVar4,(float *)&stack0xffffffe4,
                   *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x30),0x20);
      iVar5 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x30);
      FUN_00438690((int)&stack0xffffffe4,(int)(auStackY_9c + iVar5 * 4),0x20,
                   (float *)(puVar4 + iVar5),*(int *)(iVar2 + 0x30));
      iVar5 = *(int *)(iVar2 + 0x14);
      iVar3 = 0;
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 - iVar3;
          iVar3 = iVar3 + 1;
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 8) + param_1) + -4 + iVar5 * 4) = uVar1;
          iVar5 = *(int *)(iVar2 + 0x14);
        } while (iVar3 < iVar5);
      }
      param_1 = param_1 + 4;
      local_c = local_c + 1;
    } while (local_c < *(int *)(*(int *)(iVar2 + 4) + 4));
  }
  return;
}


