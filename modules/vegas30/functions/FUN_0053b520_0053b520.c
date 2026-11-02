/* Module: vegas30.exe
   Function: FUN_0053b520
   Address: 0053b520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053b520(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0xe88);
  iVar1 = param_1 + 0xe80;
  iVar6 = FUN_005382e0(1);
  iVar9 = (param_3 - *(int *)(param_1 + 0xac4)) / iVar6 + *(int *)(param_1 + 0xba8);
  iVar7 = FUN_0053add0(iVar1);
  if (iVar9 < 0) {
    return 0;
  }
  if (iVar7 <= iVar9) {
    return 0;
  }
  if (iVar9 < *(int *)(param_1 + 0xba8)) {
    *(int *)(param_1 + 0xba8) = iVar9;
  }
  else if (*(int *)(param_1 + 0xba8) + *(int *)(param_1 + 0xbac) <= iVar9) {
    *(int *)(param_1 + 0xba8) = (iVar9 - *(int *)(param_1 + 0xbac)) + 1;
  }
  uVar8 = *(int *)(param_1 + 0x674) - *(int *)(param_1 + 0xbac);
  if ((int)*(uint *)(param_1 + 0xba8) < (int)uVar8) {
    uVar8 = *(uint *)(param_1 + 0xba8);
  }
  *(uint *)(param_1 + 0xba8) = uVar8;
  *(uint *)(param_1 + 0xba8) = uVar8 & ((int)uVar8 < 1) - 1;
  if ((*(int *)(param_1 + 0xe8c) == 400) && (iVar9 != iVar2)) {
    *(int *)(param_1 + 0xe88) = iVar9;
    FUN_00445200(*(undefined4 *)(DAT_0064762c + 0xa0),iVar9);
    FUN_00448c50(*(undefined4 *)(DAT_0064762c + 0xa0),iVar9);
    FUN_00446940(*(undefined4 *)(DAT_0064762c + 0xa0));
    return 1;
  }
  if (*(int *)(param_1 + 0xe8c) != 0x191) {
    return 0;
  }
  bVar4 = false;
  if (iVar9 == 0) goto LAB_0053b726;
  iVar7 = FUN_0050c130(iVar1);
  if ((param_2 <= *(int *)(param_1 + 0x38c)) || (*(int *)(param_1 + 0x38c) + iVar6 <= param_2))
  goto LAB_0053b726;
  uVar8 = 0;
  if (iVar9 == 1) {
    uVar8 = ~*(uint *)(iVar7 + 4) >> 2;
LAB_0053b6a2:
    uVar8 = uVar8 & 1;
    bVar4 = true;
  }
  else if (iVar9 == 2) {
    uVar8 = ~*(uint *)(iVar7 + 4) >> 3;
    goto LAB_0053b6a2;
  }
  FUN_005386a0(iVar1,0x22f);
  FUN_00538700(iVar1);
  puVar5 = DAT_0064b138;
  FUN_005b83b0(DAT_0064b138,1);
  if (iVar9 == 1) {
    uVar8 = uVar8 << 2 | *(uint *)(iVar7 + 4) & 0xfffffffb;
LAB_0053b6fd:
    *(uint *)(iVar7 + 4) = uVar8;
  }
  else if (iVar9 == 2) {
    uVar8 = uVar8 << 3 | *(uint *)(iVar7 + 4) & 0xfffffff7;
    goto LAB_0053b6fd;
  }
  FUN_005b84d0(puVar5,1);
  DAT_0064767c = DAT_0064767c | 0x400;
  puVar3 = (uint *)*puVar5;
  *puVar3 = *puVar3 | 0x10;
  FUN_00538740(iVar1,0);
LAB_0053b726:
  if ((iVar9 == iVar2) && (!bVar4)) {
    return 0;
  }
  *(int *)(param_1 + 0xe88) = iVar9;
  FUN_0051cff0(*(undefined4 *)(DAT_0064762c + 0xa4),iVar9);
  return 1;
}


