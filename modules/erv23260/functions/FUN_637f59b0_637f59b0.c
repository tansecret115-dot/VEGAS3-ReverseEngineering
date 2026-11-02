/* Module: erv23260.dll
   Function: FUN_637f59b0
   Address: 637f59b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f59b0(void *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_c [2];
  
  if ((*(byte *)((int)param_1 + 0x9c) & 4) == 0) {
    iVar3 = *(int *)((int)param_1 + 0x90) - *(int *)((int)param_1 + 0x34);
    bVar1 = *(byte *)(*(int *)((int)param_1 + 0x24) + iVar3) & 0x1f;
    if ((2 < bVar1) && (bVar1 < 7)) {
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x10 + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x14 + iVar3 * 0x20));
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x18 + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x1c + iVar3 * 0x20));
    }
  }
  if ((*(byte *)((int)param_1 + 0x9c) & 8) == 0) {
    iVar3 = *(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x34);
    bVar1 = *(byte *)(*(int *)((int)param_1 + 0x24) + iVar3) & 0x1f;
    if ((2 < bVar1) && (bVar1 < 7)) {
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 4 + iVar3 * 0x20));
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 8 + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0xc + iVar3 * 0x20));
    }
  }
  if ((*(byte *)((int)param_1 + 0x9c) & 1) == 0) {
    iVar3 = *(int *)((int)param_1 + 0x90) + -1;
    bVar1 = *(byte *)(*(int *)((int)param_1 + 0x24) + iVar3) & 0x1f;
    if ((2 < bVar1) && (bVar1 < 7)) {
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 8 + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0xc + iVar3 * 0x20));
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x18 + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x1c + iVar3 * 0x20));
    }
  }
  if ((*(byte *)((int)param_1 + 0x9c) & 2) == 0) {
    iVar3 = *(int *)((int)param_1 + 0x90) + 1;
    bVar1 = *(byte *)(*(int *)((int)param_1 + 0x24) + iVar3) & 0x1f;
    if ((2 < bVar1) && (bVar1 < 7)) {
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 4 + iVar3 * 0x20));
      FUN_637f5b30(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x10 + iVar3 * 0x20),
                   *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x14 + iVar3 * 0x20));
    }
  }
  if (1 < *(int *)((int)param_1 + 0x3c)) {
    puVar2 = (undefined4 *)FUN_637f5c20(param_1,local_c);
    FUN_637f5b30(param_1,*puVar2,puVar2[1]);
    FUN_637f5b50((int)param_1);
  }
  return;
}


