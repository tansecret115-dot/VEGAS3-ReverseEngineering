/* Module: vegas30.exe
   Function: FUN_00422330
   Address: 00422330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422330(void)

{
  int *lp;
  int iVar1;
  BOOL BVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_0040c050(200);
  iVar4 = DAT_0064b138;
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x248) != 0) {
    return;
  }
  switch(*(undefined4 *)(iVar1 + 0x8c)) {
  default:
    goto switchD_00422365_caseD_1;
  case 2:
    lp = *(int **)(iVar1 + 0x94);
    if ((((lp != (int *)0x0) && (BVar2 = IsBadReadPtr(lp,0x6a0), BVar2 == 0)) && (*lp == 0x20)) &&
       (((iVar4 == 0 || (iVar4 == lp[2])) &&
        ((iVar4 = FUN_005cb3d0(lp[2],lp), -1 < iVar4 &&
         (iVar4 = FUN_005d1590(*(undefined4 *)(iVar1 + 0x94)), iVar4 != 0)))))) {
      iVar5 = *(int *)(*(int *)(iVar1 + 0x94) + 0x1c);
      iVar4 = *(int *)(iVar1 + 0xa4);
      goto LAB_0042244b;
    }
    break;
  case 3:
    if (*(int *)(iVar1 + 0xa0) == 0) {
      lVar3 = Mixer_NumBusTypePorts(4);
      if (*(int *)(iVar1 + 0x88) < lVar3) {
        return;
      }
    }
    else {
      iVar4 = FUN_00573430(*(int *)(iVar1 + 0xa0));
      if (iVar4 != 0) {
        uVar6 = *(undefined4 *)(iVar1 + 0xa0);
        goto LAB_00422440;
      }
    }
    break;
  case 4:
    iVar4 = FUN_00573430(*(undefined4 *)(iVar1 + 0xa0));
    if ((iVar4 != 0) && (iVar4 = FUN_00418e90(*(undefined4 *)(iVar1 + 0x90)), iVar4 != 0)) {
      uVar6 = *(undefined4 *)(iVar1 + 0xa0);
LAB_00422440:
      iVar4 = FUN_00573720(uVar6);
      iVar5 = *(int *)(iVar1 + 0xa4);
LAB_0042244b:
      if (iVar5 == iVar4) {
        return;
      }
      FUN_00422110(iVar1,1);
      return;
    }
  }
  FUN_00422110(iVar1,1);
switchD_00422365_caseD_1:
  return;
}


