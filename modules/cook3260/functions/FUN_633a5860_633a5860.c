/* Module: cook3260.dll
   Function: FUN_633a5860
   Address: 633a5860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_633a5860(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 1 && -1 < *(int *)(param_1 + 0xc) + -1) {
    puVar2 = (undefined4 *)(param_1 + 0x44b8);
    iVar3 = 0;
    do {
      puVar1 = malloc(0xc0);
      *puVar2 = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      FUN_633a5970(puVar1,(int *)((int)&DAT_633afa30 + iVar3),(int)&DAT_633ac7a0 + iVar3,0x18);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar4 < *(int *)(param_1 + 0xc) + -1);
  }
  puVar2 = (undefined4 *)(param_1 + 0x4580);
  iVar4 = 0;
  do {
    puVar1 = malloc(*(int *)((int)&DAT_633a98b8 + iVar4) << 3);
    *puVar2 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    FUN_633a5970(puVar1,*(int **)((int)&PTR_DAT_633a9898 + iVar4),
                 *(int *)((int)&PTR_DAT_633a9878 + iVar4),*(int *)((int)&DAT_633a98b8 + iVar4));
    iVar4 = iVar4 + 4;
    puVar2 = puVar2 + 1;
  } while (iVar4 < 0x1c);
  if (*(int *)(param_1 + 8) == 2) {
    puVar2 = malloc((1 << ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x1f)) * 8 - 8);
    *(undefined4 **)(param_1 + 0x459c) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    FUN_633a5970(puVar2,(int *)(param_1 + 0x469c),param_1 + 0x45a0,
                 (1 << ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x1f)) + -1);
  }
  return 0;
}


