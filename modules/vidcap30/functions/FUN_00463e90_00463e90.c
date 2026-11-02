/* Module: vidcap30.exe
   Function: FUN_00463e90
   Address: 00463e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00463e90(HWND param_1,undefined4 *param_2,uint param_3,undefined4 param_4,int param_5)

{
  HWND pHVar1;
  HWND hWnd;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  WPARAM wParam;
  code *pcVar5;
  
  pcVar5 = GetDlgItem_exref;
  pHVar1 = GetDlgItem(param_1,0xe8e);
  hWnd = GetDlgItem(param_1,0xe7d);
  if (param_3 < 0xe7f) {
    if (param_3 == 0xe7e) {
      FUN_00463c40(param_1,param_2);
      return 0;
    }
    if (param_3 < 0xe3c) {
      if (param_3 == 0xe3b) {
        FUN_00463bd0(param_1,param_2);
        return 0;
      }
      if (param_3 == 1) {
        _SfList_CreateExZ_32(&param_5,4,0x10,0x10,0x40000002,0,0,0);
        if (param_5 != 0) {
          LVar2 = SendMessageA(hWnd,0x18b,0,0);
          wParam = 0;
          if (0 < LVar2) {
            do {
              LVar3 = SendMessageA(hWnd,0x199,wParam,0);
              iVar4 = FUN_00463ba0(*(undefined4 *)*param_2,LVar3);
              if ((iVar4 != 0) || (iVar4 = FUN_00463ba0(param_2[1],LVar3), iVar4 != 0)) {
                *(undefined2 *)(param_2[5] + 0x18 + (wParam + param_2[6] * 0x1a) * 2) =
                     *(undefined2 *)(iVar4 + 0xc);
                _SfList_AllocAndInsertItem_20(param_5,iVar4,0x10,0xffffffff,0);
              }
              wParam = wParam + 1;
            } while ((int)wParam < LVar2);
          }
          _SfList_Destroy_4(*(undefined4 *)*param_2);
          pcVar5 = GetDlgItem_exref;
          *(int *)*param_2 = param_5;
        }
        pHVar1 = (HWND)(*pcVar5)(param_1,0x51a);
        DAT_005bb7a4 = SendMessageA(pHVar1,0xf0,0,0);
      }
      else if (param_3 != 2) {
        return 0;
      }
      EndDialog(param_1,param_3);
      return 1;
    }
    if (param_3 == 0xe7d) {
      if (param_5 == 1) goto LAB_004640d8;
      if ((param_5 == 2) && (LVar2 = SendMessageA(hWnd,0x188,0,0), LVar2 != -1)) {
        FUN_00463c40(param_1,param_2);
        return 0;
      }
    }
  }
  else {
    switch(param_3) {
    case 0xe81:
      FUN_00463b10(hWnd,0xffffffff);
      FUN_00463770(param_1,hWnd,0);
      return 0;
    case 0xe82:
      FUN_00463b10(hWnd,1);
LAB_004640d8:
      FUN_00463770(param_1,hWnd,0);
      return 0;
    case 0xe83:
      FUN_00463ca0(param_1,param_2);
      break;
    case 0xe8e:
      if ((param_5 == 2) && (LVar2 = SendMessageA(pHVar1,0x188,0,0), LVar2 != -1)) {
        FUN_00463bd0(param_1,param_2);
        return 0;
      }
    }
  }
  return 0;
}


