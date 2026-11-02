/* Module: vegas30.exe
   Function: FUN_0040bd70
   Address: 0040bd70
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT __thiscall
FUN_0040bd70(int param_1,uint param_2,uint param_3,HWND param_4,undefined4 *param_5)

{
  uint nIDDlgItem;
  HWND pHVar1;
  LRESULT LVar2;
  
  pHVar1 = param_4;
  if (param_2 < 0x4f) {
    if (param_2 == 0x4e) {
      pHVar1 = (HWND)param_4->unused;
    }
    else {
      switch(param_2) {
      case 0x2b:
        if (param_3 == 0) goto switchD_0040bd9d_caseD_30;
        pHVar1 = (HWND)param_4[5].unused;
        goto LAB_0040be3f;
      case 0x2c:
        if (param_3 == 0) goto switchD_0040bd9d_caseD_30;
        nIDDlgItem = param_4[1].unused;
        pHVar1 = *(HWND *)(param_1 + 4);
        break;
      case 0x2d:
        if (param_3 == 0) goto switchD_0040bd9d_caseD_30;
        nIDDlgItem = param_4[1].unused;
        pHVar1 = *(HWND *)(param_1 + 4);
        break;
      case 0x2e:
      case 0x2f:
        goto switchD_0040bd9d_caseD_2e;
      default:
        goto switchD_0040bd9d_caseD_30;
      case 0x39:
        if (param_3 == 0) goto switchD_0040bd9d_caseD_30;
        nIDDlgItem = param_4[1].unused;
LAB_0040be34:
        pHVar1 = *(HWND *)(param_1 + 4);
      }
      pHVar1 = GetDlgItem(pHVar1,nIDDlgItem);
    }
  }
  else if (param_2 < 0x139) {
    if (param_2 < 0x132) {
      if (param_2 == 0x111) {
        if (param_4 == (HWND)0x0) goto switchD_0040bd9d_caseD_30;
        goto LAB_0040be3f;
      }
      if ((param_2 < 0x114) || (0x115 < param_2)) goto switchD_0040bd9d_caseD_30;
    }
switchD_0040bd9d_caseD_2e:
  }
  else {
    if (param_2 != 0x210) goto switchD_0040bd9d_caseD_30;
    if (((param_3 & 0xffff) == 0) || (2 < (param_3 & 0xffff))) {
      nIDDlgItem = param_3 >> 0x10;
      goto LAB_0040be34;
    }
  }
LAB_0040be3f:
  if (pHVar1 != (HWND)0x0) {
    LVar2 = SendMessageA(pHVar1,param_2 + 0x2000,param_3,(LPARAM)param_4);
    return LVar2;
  }
switchD_0040bd9d_caseD_30:
  *param_5 = 0;
  return 1;
}


