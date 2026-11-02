/* Module: vegas30.exe
   Function: FUN_0053a500
   Address: 0053a500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053a500(int param_1)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  HGLOBAL hMem;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_28 [4];
  SIZE_T local_18;
  undefined4 *local_14;
  
  BVar2 = OpenClipboard(*(HWND *)(param_1 + 4));
  if (BVar2 != 0) {
    EmptyClipboard();
  }
  FUN_00538540(param_1);
  if (*(int *)(param_1 + 0xe8c) == 400) {
    iVar3 = FUN_00445d30(param_1 + 0xe80,0xffffffff);
    iVar1 = 0;
    if (*(int **)(iVar3 + 0x60) != (int *)0x0) {
      iVar1 = **(int **)(iVar3 + 0x60);
    }
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar5 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60) + 4) * iVar1;
      puVar8 = (undefined4 *)(iVar7 + iVar5);
      if ((*(byte *)(iVar7 + 0x20 + iVar5) & 2) != 0) {
        puVar9 = puVar8;
        puVar10 = local_28;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        hMem = GlobalAlloc(2,local_18);
        local_14 = GlobalLock(hMem);
        if (local_14 == (undefined4 *)0x0) {
          return 0x8007000e;
        }
        puVar8 = (undefined4 *)puVar8[5];
        puVar9 = local_14;
        for (uVar6 = local_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = local_18 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xcd4),0,local_28,1);
      }
    }
  }
  else if (*(int *)(param_1 + 0xe8c) == 0x191) {
    FUN_0050c130(param_1 + 0xe80);
    piVar4 = (int *)FUN_00522a00(0xffffffff);
    iVar1 = 0;
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
    }
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      if ((*(byte *)(piVar4[1] * iVar1 + 0x14 + piVar4[2]) & 2) != 0) {
        _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xcd4),0,piVar4[1] * iVar1 + piVar4[2],1);
      }
    }
  }
  if (BVar2 != 0) {
    FUN_00539e30(param_1);
    CloseClipboard();
  }
  return 0;
}


