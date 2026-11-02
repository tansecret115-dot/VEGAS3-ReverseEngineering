/* Module: vegas30k.dll
   Function: FUN_010728c0
   Address: 010728c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010728c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_2 + 0x34c);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - *(int *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x20) = 0x44;
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - *(int *)(iVar1 + 0x14);
  *(undefined4 *)(iVar1 + 0x18) = 0x44;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  if (*(int **)(param_2 + 0x214) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_2 + 0x214);
  }
  local_4 = 0;
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x214) + 8) + local_4 * 4) + 0x34c);
      if (iVar3 != 0) {
        uVar5 = *(uint *)(iVar1 + 0x20) & 0x7ff;
        if (0x800 - uVar5 < (uint)*(byte *)(iVar3 + 0x12d)) {
          *(uint *)(iVar1 + 0x20) = (*(uint *)(iVar1 + 0x20) - uVar5) + 0x800;
        }
        *(uint *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + (uint)*(byte *)(iVar3 + 0x12d);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - *(int *)(iVar1 + 0x1c);
        iVar2 = (*(uint *)(iVar1 + 0x20) >> 0xb) + (uint)((*(uint *)(iVar1 + 0x20) & 0x7ff) != 0);
        *(int *)(iVar1 + 0x1c) = iVar2;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar2;
        uVar5 = *(uint *)(iVar1 + 0x18) & 0x7ff;
        if (0x800 - uVar5 < (uint)*(byte *)(iVar3 + 0xe6)) {
          *(uint *)(iVar1 + 0x18) = (*(uint *)(iVar1 + 0x18) - uVar5) + 0x800;
        }
        *(uint *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + (uint)*(byte *)(iVar3 + 0xe6);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - *(int *)(iVar1 + 0x14);
        iVar3 = (*(uint *)(iVar1 + 0x18) >> 0xb) + (uint)((*(uint *)(iVar1 + 0x18) & 0x7ff) != 0);
        *(int *)(iVar1 + 0x14) = iVar3;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar3;
      }
      local_4 = local_4 + 1;
    } while (local_4 < iVar4);
  }
  return;
}


