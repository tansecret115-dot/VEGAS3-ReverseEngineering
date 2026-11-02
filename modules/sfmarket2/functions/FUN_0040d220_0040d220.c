/* Module: sfmarket2.dll
   Function: FUN_0040d220
   Address: 0040d220
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT __thiscall
FUN_0040d220(void *this,uint param_1,uint param_2,HWND param_3,undefined4 *param_4)

{
  uint nIDDlgItem;
  HWND pHVar1;
  LRESULT LVar2;
  
  pHVar1 = param_3;
  if (param_1 < 0x4f) {
    if (param_1 == 0x4e) {
      pHVar1 = (HWND)param_3->unused;
    }
    else {
      switch(param_1) {
      case 0x2b:
        if (param_2 == 0) goto switchD_0040d24d_caseD_30;
        pHVar1 = (HWND)param_3[5].unused;
        goto LAB_0040d2ef;
      case 0x2c:
        if (param_2 == 0) goto switchD_0040d24d_caseD_30;
        nIDDlgItem = param_3[1].unused;
        pHVar1 = *(HWND *)((int)this + 4);
        break;
      case 0x2d:
        if (param_2 == 0) goto switchD_0040d24d_caseD_30;
        nIDDlgItem = param_3[1].unused;
        pHVar1 = *(HWND *)((int)this + 4);
        break;
      case 0x2e:
      case 0x2f:
        goto switchD_0040d24d_caseD_2e;
      default:
        goto switchD_0040d24d_caseD_30;
      case 0x39:
        if (param_2 == 0) goto switchD_0040d24d_caseD_30;
        nIDDlgItem = param_3[1].unused;
LAB_0040d2e4:
        pHVar1 = *(HWND *)((int)this + 4);
      }
      pHVar1 = GetDlgItem(pHVar1,nIDDlgItem);
    }
  }
  else if (param_1 < 0x139) {
    if (param_1 < 0x132) {
      if (param_1 == 0x111) {
        if (param_3 == (HWND)0x0) goto switchD_0040d24d_caseD_30;
        goto LAB_0040d2ef;
      }
      if ((param_1 < 0x114) || (0x115 < param_1)) goto switchD_0040d24d_caseD_30;
    }
switchD_0040d24d_caseD_2e:
  }
  else {
    if (param_1 != 0x210) goto switchD_0040d24d_caseD_30;
    if (((param_2 & 0xffff) == 0) || (2 < (param_2 & 0xffff))) {
      nIDDlgItem = param_2 >> 0x10;
      goto LAB_0040d2e4;
    }
  }
LAB_0040d2ef:
  if (pHVar1 != (HWND)0x0) {
    LVar2 = SendMessageA(pHVar1,param_1 + 0x2000,param_2,(LPARAM)param_3);
    return LVar2;
  }
switchD_0040d24d_caseD_30:
  *param_4 = 0;
  return 1;
}


