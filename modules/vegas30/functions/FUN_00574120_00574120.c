/* Module: vegas30.exe
   Function: FUN_00574120
   Address: 00574120
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT __thiscall FUN_00574120(int param_1,int param_2,WPARAM param_3,uint param_4)

{
  SHORT SVar1;
  int iVar2;
  int iVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 != 0x100) {
    if (param_2 == 0x101) {
      SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x101,param_3,param_4);
    }
    return 0;
  }
  SVar1 = GetKeyState(0x10);
  bVar6 = SVar1 < 0;
  SVar1 = GetKeyState(0x11);
  bVar7 = SVar1 < 0;
  switch(param_3) {
  case 9:
    if (bVar7) goto switchD_00574185_caseD_a;
    iVar3 = FUN_00569920();
    if (bVar6) {
      param_4 = -(param_4 & 0xffff);
    }
    else {
      param_4 = param_4 & 0xffff;
    }
    iVar2 = **(int **)(param_1 + 0x2b0);
    for (iVar3 = iVar3 + param_4; iVar2 <= iVar3; iVar3 = iVar3 - iVar2) {
    }
    for (; iVar3 < 0; iVar3 = iVar3 + iVar2) {
    }
    uVar5 = *(undefined4 *)((*(int **)(param_1 + 0x2b0))[2] + iVar3 * 4);
    goto LAB_00574226;
  default:
switchD_00574185_caseD_a:
    SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8),0x100,param_3,param_4);
    return 0;
  case 0x23:
    iVar3 = **(int **)(param_1 + 0x2b0) + -1;
    uVar5 = *(undefined4 *)((*(int **)(param_1 + 0x2b0))[2] + iVar3 * 4);
    if (bVar6) {
      FUN_00569b60(iVar3,bVar7);
      goto LAB_0057423a;
    }
    break;
  case 0x24:
    uVar5 = **(undefined4 **)(*(int *)(param_1 + 0x2b0) + 8);
    if (bVar6) {
      FUN_00569b60(0,bVar7);
    }
    else if (!bVar7) {
      FUN_00569aa0(uVar5,1,1);
      FUN_00569a70(uVar5);
    }
    FUN_00569990(uVar5);
    FUN_0056a330(0);
    return 0;
  case 0x25:
    iVar3 = FUN_00569920();
    iVar3 = iVar3 - (param_4 & 0xffff);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x2b0) + -1;
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
    }
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
    if (bVar6) {
      FUN_00569b60(iVar3,bVar7);
      goto LAB_0057423a;
    }
    break;
  case 0x26:
  case 0x28:
    iVar3 = FUN_00569960();
    if (iVar3 == 0) {
      return 0;
    }
    if (bVar6) {
      if (!bVar7) {
        uVar5 = 2;
        goto LAB_005742dd;
      }
    }
    else {
      uVar5 = 3;
      if (bVar7) goto LAB_005742dd;
    }
    uVar5 = 1;
LAB_005742dd:
    FUN_00573c60(iVar3,0x100,param_3,param_4,uVar5);
    return 0;
  case 0x27:
    iVar3 = FUN_00569920();
    iVar3 = iVar3 + (param_4 & 0xffff);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x2b0) + -1;
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
    }
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
    if (bVar6) {
      FUN_00569b60(iVar3,bVar7);
      goto LAB_0057423a;
    }
    break;
  case 0x2e:
    FUN_00574570();
    return 0;
  case 0x5d:
    LVar4 = DefWindowProcA(*(HWND *)(param_1 + 0x24),0x100,param_3,param_4);
    return LVar4;
  }
  if (!bVar7) {
LAB_00574226:
    FUN_00569aa0(uVar5,1,1);
    FUN_00569a70(uVar5);
  }
LAB_0057423a:
  FUN_00569990(uVar5);
  FUN_0056a330(iVar3);
  return 0;
}


