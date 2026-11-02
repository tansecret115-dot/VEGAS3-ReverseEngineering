/* Module: vidcap30.exe
   Function: FUN_0054fdb0
   Address: 0054fdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0054fdb0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar4 = *(uint *)((int)param_1 + 0x6a);
    if (uVar4 < 2) {
      FUN_0054ff10(param_1);
      uVar4 = *(uint *)((int)param_1 + 0x6a);
      if (uVar4 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = *(int *)((int)param_1 + 0x52);
        if (iVar2 < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)param_1 + 0x2e) + iVar2;
        }
        FUN_0055d310(param_1,iVar3,*(int *)((int)param_1 + 0x62) - iVar2,param_2 == 4);
        *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_1 + 0x62);
        FUN_0054fa40(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (-(uint)(param_2 != 4) & 0xfffffffe) + 3;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
    iVar3 = *(int *)((int)param_1 + 0x62) + uVar4;
    *(int *)((int)param_1 + 0x62) = iVar3;
    iVar2 = *(int *)((int)param_1 + 0x52);
    uVar1 = *(uint *)((int)param_1 + 0x62);
    uVar4 = iVar2 + uVar5;
    if ((iVar3 == 0) || (uVar4 <= uVar1)) {
      *(uint *)((int)param_1 + 0x62) = uVar4;
      *(uint *)((int)param_1 + 0x6a) = uVar1 - uVar4;
      if (iVar2 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)param_1 + 0x2e) + iVar2;
      }
      FUN_0055d310(param_1,iVar3,uVar4 - iVar2,0);
      *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_1 + 0x62);
      FUN_0054fa40(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = *(int *)((int)param_1 + 0x52);
    uVar4 = *(int *)((int)param_1 + 0x62) - iVar2;
    if (*(int *)((int)param_1 + 0x22) - 0x106U <= uVar4) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)param_1 + 0x2e) + iVar2;
      }
      FUN_0055d310(param_1,iVar2,uVar4,0);
      *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_1 + 0x62);
      FUN_0054fa40(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}


