/* Module: vegas30.exe
   Function: FUN_0052d140
   Address: 0052d140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052d140(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  BOOL BVar7;
  bool bVar8;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  FUN_004582a0(param_1,&local_10,&local_8);
  if ((((local_8 != 0 || local_4 != 0) && (iVar2 = *(int *)(param_1 + 0xc9c), iVar2 != 0)) &&
      (piVar3 = *(int **)(iVar2 + 0x18), piVar3 != (int *)0x0)) &&
     (((0 < *piVar3 && (iVar4 = *(int *)(iVar2 + 0x40), -1 < iVar4)) &&
      ((iVar4 < *piVar3 && (*(int *)(iVar2 + 0x4c) != 0)))))) {
    uVar5 = *(undefined4 *)(*(int *)(piVar3[2] + iVar4 * 4) + 0x10);
    BVar7 = OpenClipboard(*(HWND *)(param_1 + 4));
    if (BVar7 != 0) {
      EmptyClipboard();
    }
    FUN_004693b0(*(undefined4 *)(param_1 + 0xcd4));
    FUN_005b83b0(uVar1,0);
    piVar3 = *(int **)(iVar2 + 0x50);
    iVar4 = *piVar3;
    if (iVar4 != 0x20) {
      bVar8 = local_10 < (uint)piVar3[6];
      local_10 = local_10 - piVar3[6];
      local_c = (local_c - piVar3[7]) - (uint)bVar8;
    }
    FUN_0046a410(uVar1,iVar2,*(undefined4 *)(param_1 + 0xcd4),local_10,local_c,local_8,local_4,uVar5
                );
    FUN_0046dae0(*(undefined4 *)(param_1 + 0xcd4),1,local_10,local_c,local_8,local_4);
    if (BVar7 != 0) {
      FUN_0046dbd0(param_1,*(undefined4 *)(param_1 + 0xcd4));
      CloseClipboard();
    }
    FUN_005b84d0(uVar1,0);
    if (param_2 != 0) {
      FUN_005b83b0(uVar1,1);
      if (iVar4 != 0x20) {
        uVar6 = *(undefined4 *)(iVar2 + 0x50);
        FUN_004e9f70(*(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x40),0x34,0);
        FUN_004ea750(*(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x40),uVar6,2,0);
      }
      else {
        FUN_004e9f70(uVar1,0x49,0);
        FUN_004ea250(uVar1,*(undefined4 *)(iVar2 + 0x50),0xf,0);
      }
      FUN_0046bfc0(uVar1,iVar2,local_10,local_c,local_8,local_4,uVar5,0);
      FUN_004eb2b0(uVar1);
      FUN_004ea040(uVar1,0);
      FUN_005b84d0(uVar1,1);
      FUN_0052c070(param_1,*(undefined4 *)(param_1 + 0xcbc));
      FUN_004530a0(param_1,0);
      FUN_00456c20(param_1);
    }
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


