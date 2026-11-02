/* Module: vegas30.exe
   Function: FUN_004ea040
   Address: 004ea040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea040(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar5 = FUN_005b8630(param_1);
  iVar6 = *(int *)(iVar5 + 0x3e4) + -1;
  *(int *)(iVar5 + 0x3e4) = iVar6;
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = -0x7fffbffb;
  if (*(char *)(iVar5 + 0x1d0) != '\x01') goto LAB_004ea23a;
  if (*(int **)(iVar5 + 0x3bc) == (int *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = **(int **)(iVar5 + 0x3bc);
  }
  if (*(int **)(iVar5 + 0x3c0) == (int *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = **(int **)(iVar5 + 0x3c0);
  }
  if (*(int **)(iVar5 + 0x3c4) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(iVar5 + 0x3c4);
  }
  if (*(int **)(iVar5 + 0x3c8) == (int *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = **(int **)(iVar5 + 0x3c8);
  }
  if (*(int **)(iVar5 + 0x3cc) == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = **(int **)(iVar5 + 0x3cc);
  }
  if (*(int **)(iVar5 + 0x3d0) == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = **(int **)(iVar5 + 0x3d0);
  }
  if (*(int **)(iVar5 + 0x3d4) == (int *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = **(int **)(iVar5 + 0x3d4);
  }
  if (*(int **)(iVar5 + 0x3d8) == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = **(int **)(iVar5 + 0x3d8);
  }
  iVar1 = *(int *)(iVar5 + 0x3dc);
  iVar2 = *(int *)(iVar5 + 0x3e0);
  iVar3 = *(int *)(iVar5 + 0x3b8);
  if ((((((local_1c == 0) && (local_18 == 0)) && (iVar6 == 0)) &&
       (((local_10 == 0 && (local_c == 0)) && ((iVar8 == 0 && ((local_14 == 0 && (iVar7 == 0))))))))
      && (iVar1 == 0)) && (iVar2 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar6 = FUN_005b3d40();
  if ((iVar6 < 0) || (iVar6 = FUN_005b5890(), iVar6 < 0)) goto LAB_004ea23a;
  if (param_2 == 0) {
    if ((iVar3 == 0) || (!bVar4)) {
LAB_004ea22d:
      iVar6 = FUN_005b5940();
    }
    else {
      iVar6 = FUN_005b5330();
      FUN_005b3ea0(param_1,1);
      if ((((local_1c != 0) || (local_18 != 0)) || (local_14 != 0)) ||
         ((iVar1 != 0 || (iVar2 != 0)))) {
        FUN_005410b0(param_1,0,0);
      }
    }
  }
  else {
    if ((iVar3 == 0) || (!bVar4)) goto LAB_004ea22d;
    FUN_005b83b0(param_1,1);
    iVar6 = FUN_005b7820();
    FUN_005b84d0(param_1,1);
    FUN_00469280(DAT_00647630);
  }
  if (-1 < iVar6) {
    return iVar6;
  }
LAB_004ea23a:
  FUN_004ea010(iVar5,iVar6);
  return iVar6;
}


