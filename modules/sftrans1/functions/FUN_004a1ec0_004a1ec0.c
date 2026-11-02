/* Module: sftrans1.dll
   Function: FUN_004a1ec0
   Address: 004a1ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a1ec0(int *param_1,HWND param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  LONG nIDDlgItem;
  int iVar4;
  HWND pHVar5;
  LRESULT LVar6;
  LRESULT LVar7;
  int *unaff_EBX;
  uint uVar8;
  uint unaff_retaddr;
  undefined4 uVar9;
  int *local_8 [2];
  
  puVar1 = *(undefined4 **)param_1[2];
  local_8[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,local_8);
  }
  (**(code **)(*local_8[0] + 0xc))(local_8[0],param_1 + 0x1a);
  uVar8 = unaff_retaddr & 0xffff;
  iVar2 = GetDlgCtrlID(param_2);
  pHVar3 = (HWND)SendMessageA(param_2,0x623,0,0);
  nIDDlgItem = GetWindowLongA(pHVar3,-0xc);
  iVar4 = 0;
  switch(iVar2) {
  case 0x71c:
    pHVar3 = GetDlgItem((HWND)param_1[0xc],iVar2);
    pHVar5 = GetDlgItem((HWND)param_1[0xc],nIDDlgItem);
    if (uVar8 == 9) {
      FUN_004a2a50(nIDDlgItem,iVar2,param_1 + 0x1b,0xfffff1f0,0xe10,1);
LAB_004a1f7b:
      iVar2 = ftol();
    }
    else {
      if (((uVar8 == 5) || (uVar8 == 8)) || (uVar8 == 4)) goto LAB_004a1f7b;
      iVar2 = SendMessageA(pHVar3,0x60a,0,0);
    }
    iVar4 = FUN_004bfba0(0x115,unaff_retaddr,param_2,1,10,iVar2);
    LVar6 = SendMessageA(pHVar3,0x60b,0,0);
    LVar7 = SendMessageA(pHVar3,0x60c,0,0);
    if (iVar4 - iVar2 != 0) {
      if (iVar4 == LVar7) {
        param_1[0x1b] = 0x45610000;
      }
      else if (iVar4 == LVar6) {
        param_1[0x1b] = -0x3a9f0000;
      }
      else {
        param_1[0x1b] = (int)((float)(iVar4 - iVar2) + (float)param_1[0x1b]);
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      FUN_004a19e0(pHVar5);
    }
    goto switchD_004a1f38_default;
  case 0x71d:
    pHVar3 = GetDlgItem((HWND)param_1[0xc],iVar2);
    pHVar5 = GetDlgItem((HWND)param_1[0xc],nIDDlgItem);
    if (uVar8 == 9) {
      FUN_004a2a50(nIDDlgItem,iVar2,param_1 + 0x1c,0,1,1000);
LAB_004a208c:
      iVar2 = ftol();
    }
    else {
      if (((uVar8 == 5) || (uVar8 == 8)) || (uVar8 == 4)) goto LAB_004a208c;
      iVar2 = SendMessageA(pHVar3,0x60a,0,0);
    }
    iVar4 = FUN_004bfba0(0x115,unaff_retaddr,param_2,1,10,iVar2);
    LVar6 = SendMessageA(pHVar3,0x60b,0,0);
    LVar7 = SendMessageA(pHVar3,0x60c,0,0);
    if (iVar4 - iVar2 != 0) {
      if (iVar4 == LVar7) {
        param_1[0x1c] = 0x3f800000;
      }
      else if (iVar4 == LVar6) {
        param_1[0x1c] = 0;
      }
      else {
        param_1[0x1c] = (int)((float)(iVar4 - iVar2) * _DAT_0055d648 + (float)param_1[0x1c]);
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      FUN_004a19e0(pHVar5);
    }
    goto switchD_004a1f38_default;
  case 0x71e:
    uVar9 = 100;
    param_1 = param_1 + 0x1a;
    break;
  case 0x727:
    iVar4 = 1;
  case 0x726:
    iVar4 = iVar4 + 1;
  case 0x725:
    iVar4 = iVar4 + 1;
  case 0x724:
    iVar4 = iVar4 + 1;
  case 0x723:
    iVar4 = iVar4 + 1;
  case 0x722:
    iVar4 = iVar4 + 1;
  case 0x721:
    iVar4 = iVar4 + 1;
  case 0x720:
    iVar4 = iVar4 + 1;
  case 0x71f:
    uVar9 = 10;
    param_1 = param_1 + iVar4 + 0x1e;
    break;
  default:
    goto switchD_004a1f38_default;
  }
  FUN_004a27e0(nIDDlgItem,iVar2,uVar8,param_1,0xffffff9c,100,unaff_retaddr,param_2,1,10,uVar9);
switchD_004a1f38_default:
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return 0;
}


