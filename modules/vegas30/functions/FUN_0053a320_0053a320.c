/* Module: vegas30.exe
   Function: FUN_0053a320
   Address: 0053a320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053a320(int param_1)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  HGLOBAL hMem;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_3c;
  undefined4 local_28 [4];
  SIZE_T local_18;
  undefined4 *local_14;
  
  iVar8 = 0;
  iVar1 = param_1 + 0xe80;
  FUN_005386a0(iVar1,0);
  FUN_00538700(iVar1);
  BVar2 = OpenClipboard(*(HWND *)(param_1 + 4));
  if (BVar2 != 0) {
    EmptyClipboard();
  }
  FUN_00538540(param_1);
  if (*(int *)(param_1 + 0xe8c) == 400) {
    iVar8 = FUN_00445d30(iVar1,0xffffffff);
    if (*(int **)(iVar8 + 0x60) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(iVar8 + 0x60);
    }
    local_3c = 0;
    iVar9 = iVar3 + -1;
    while ((-1 < iVar9 && (local_3c < iVar3 + -1))) {
      puVar10 = (undefined4 *)
                (*(int *)(*(int *)(iVar8 + 0x60) + 4) * iVar9 + *(int *)(*(int *)(iVar8 + 0x60) + 8)
                );
      if ((*(byte *)(puVar10 + 8) & 2) != 0) {
        puVar11 = puVar10;
        puVar12 = local_28;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        hMem = GlobalAlloc(2,local_18);
        local_14 = GlobalLock(hMem);
        if (local_14 == (undefined4 *)0x0) {
          return 0x8007000e;
        }
        puVar10 = (undefined4 *)puVar10[5];
        puVar11 = local_14;
        for (uVar7 = local_18 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = local_18 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xcd4),0,local_28,1);
        FUN_0044db10(iVar1,iVar9);
        local_3c = local_3c + 1;
      }
      iVar9 = iVar9 + -1;
    }
  }
  else if (*(int *)(param_1 + 0xe8c) == 0x191) {
    FUN_0050c130(iVar1);
    piVar4 = (int *)FUN_00522a00(0xffffffff);
    if (piVar4 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar4;
    }
    iVar9 = iVar3 + -1;
    while ((-1 < iVar9 && (iVar8 < iVar3 + -1))) {
      if ((*(byte *)(piVar4[1] * iVar9 + 0x14 + piVar4[2]) & 2) != 0) {
        _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xcd4),0,piVar4[1] * iVar9 + piVar4[2],1);
        FUN_0050ce30(*(undefined4 *)(DAT_0064762c + 0xa4),iVar9);
        iVar8 = iVar8 + 1;
      }
      iVar9 = iVar9 + -1;
    }
  }
  if (BVar2 != 0) {
    FUN_00539e30(param_1);
    CloseClipboard();
  }
  uVar5 = FUN_00538740(iVar1,0);
  return uVar5;
}


