/* Module: mcplug.dll
   Function: FUN_00410670
   Address: 00410670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00410670(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  short sVar1;
  HWND pHVar2;
  uint uVar3;
  uchar local_40 [64];
  
  pHVar2 = param_1;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00410a10(this);
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 != 0x53) {
        return 0;
      }
      FUN_00418240(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_004862a0,(uchar *)0x0);
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    return 0;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = 1;
  sVar1 = (short)(param_3 >> 0x10);
  switch(param_3 & 0xffff) {
  case 0x40c:
    FUN_004167c0(&param_4,param_1,(int *)&param_2,(int *)&param_1,0,
                 *(undefined1 **)((int)this + 0x5c));
    FUN_00415880(pHVar2,*(int *)((int)this + 0x5c));
    break;
  case 0x415:
    if ((sVar1 == 5) || (sVar1 == 1)) goto switchD_0041071e_caseD_417;
    if (sVar1 != 4) {
      return 0;
    }
    pHVar2 = GetDlgItem(param_1,0x415);
    GetWindowTextA(pHVar2,(LPSTR)local_40,0x40);
    uVar3 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
      goto LAB_0041090d;
    }
    goto joined_r0x00410906;
  case 0x416:
    if ((sVar1 == 5) || (sVar1 == 1)) goto switchD_0041071e_caseD_417;
    if (sVar1 != 4) {
      return 0;
    }
    pHVar2 = GetDlgItem(param_1,0x416);
    GetWindowTextA(pHVar2,(LPSTR)local_40,0x40);
    uVar3 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
      goto LAB_0041090d;
    }
joined_r0x00410906:
    if (100 < (int)uVar3) {
      uVar3 = 100;
    }
LAB_0041090d:
    FUN_0042f8b0(uVar3,local_40,0);
    SetWindowTextA(pHVar2,(LPCSTR)local_40);
    return 0;
  case 0x417:
  case 0x418:
  case 0x423:
  case 0x424:
  case 0x426:
  case 0x428:
  case 0x429:
  case 0x42a:
  case 0x42c:
  case 0x42d:
  case 0x42e:
  case 0x42f:
  case 0x430:
switchD_0041071e_caseD_417:
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  case 0x425:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 != 0x200) {
      return 0;
    }
    pHVar2 = GetDlgItem(param_1,0x425);
    GetWindowTextA(pHVar2,(LPSTR)local_40,0x40);
    uVar3 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (5399999 < (int)uVar3) {
      uVar3 = 5399999;
    }
    goto LAB_0041090d;
  case 0x42b:
    if (sVar1 == 0x300) goto switchD_0041071e_caseD_417;
    if (sVar1 == 0x200) {
      pHVar2 = GetDlgItem(param_1,0x42b);
      GetWindowTextA(pHVar2,(LPSTR)local_40,0x40);
      uVar3 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      else if (0x1000 < (int)uVar3) {
        uVar3 = 0x1000;
      }
      goto LAB_0041090d;
    }
    break;
  case 0x431:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 != 0x200) {
      return 0;
    }
    pHVar2 = GetDlgItem(param_1,0x431);
    GetWindowTextA(pHVar2,(LPSTR)local_40,0x40);
    uVar3 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar3 < 2) {
      uVar3 = 2;
      goto LAB_0041090d;
    }
    goto LAB_00410847;
  case 0x432:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 != 0x200) {
      return 0;
    }
    pHVar2 = GetDlgItem(param_1,0x432);
    GetWindowTextA(pHVar2,(LPSTR)local_40,0x40);
    uVar3 = FUN_00430020((LPCSTR)local_40,(undefined4 *)0x0);
    if ((int)uVar3 < 2) {
      uVar3 = 2;
      goto LAB_0041090d;
    }
LAB_00410847:
    if (0x3fff < (int)uVar3) {
      uVar3 = 0x3fff;
    }
    goto LAB_0041090d;
  }
  return 0;
}


