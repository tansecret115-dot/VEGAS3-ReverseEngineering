/* Module: vegas30.exe
   Function: FUN_0058ada0
   Address: 0058ada0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058ada0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    uVar2 = *(int *)(param_1 + 0x13c) - iVar1;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 300 + *(int *)(param_1 + 0x138) * 4) + iVar1);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar1 = FUN_0058aa50(param_1);
    if (iVar1 < 0) {
      *(undefined4 *)(DAT_0065a068 + 0x748) = 1;
      return iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  return 0;
}


