/* Module: vidcap30.exe
   Function: FUN_0041ce30
   Address: 0041ce30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ce30(HWND param_1,HWND param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  WPARAM wParam;
  LRESULT LVar2;
  HWND pHVar3;
  float10 fVar4;
  UINT UVar5;
  LPARAM LVar6;
  CHAR local_30 [44];
  
  if (param_3 < 0x4ee) {
    if (param_3 == 0x4ed) {
      UVar5 = IsDlgButtonChecked(param_1,0x4ed);
      pHVar3 = GetDlgItem(param_1,0x4ee);
      EnableWindow(pHVar3,UVar5);
    }
    else {
      if (param_3 == 0x489) {
        if (param_4 == 1) {
          LVar2 = SendMessageA(param_2,0x147,0,0);
          if (LVar2 == -1) {
            return 1;
          }
          iVar1 = *param_5;
          if (*(double *)(iVar1 + 0x1008) == (double)(&DAT_00588f50)[LVar2 * 2]) {
            return 1;
          }
          *(undefined4 *)(iVar1 + 0x1008) = *(undefined4 *)(&DAT_00588f50 + LVar2 * 2);
          *(undefined4 *)(iVar1 + 0x100c) = *(undefined4 *)((int)&DAT_00588f50 + LVar2 * 0x10 + 4);
          if (LVar2 == 0) {
            *(undefined4 *)(*param_5 + 0x1010) = 1;
          }
          else {
            *(undefined4 *)(*param_5 + 0x1010) = 0;
          }
          LVar6 = 0;
          UVar5 = 0x468;
          pHVar3 = GetParent(param_1);
          SendMessageA(pHVar3,UVar5,(WPARAM)param_1,LVar6);
          param_5[2] = 1;
          return 1;
        }
        if (param_4 == 5) {
          LVar6 = 0;
          UVar5 = 0x468;
          *(undefined4 *)(*param_5 + 0x1010) = 0;
          pHVar3 = GetParent(param_1);
          SendMessageA(pHVar3,UVar5,(WPARAM)param_1,LVar6);
          param_5[2] = 1;
          return 1;
        }
        if (param_4 != 4) {
          return 1;
        }
        LVar2 = SendMessageA(param_2,0x147,0,0);
        if (LVar2 == -1) {
          local_30[0] = '\0';
          GetWindowTextA(param_2,local_30,0x28);
          fVar4 = (float10)_SfTextToDoubleTokenEx_32
                                     (local_30,*(undefined4 *)(*param_5 + 0x1008),
                                      *(undefined4 *)(*param_5 + 0x100c),0,0x3fe00000,0,0x40000000,0
                                     );
          *(undefined4 *)(*param_5 + 0x1010) = 0;
          if (fVar4 != (float10)*(double *)(*param_5 + 0x1008)) {
            *(double *)(*param_5 + 0x1008) = (double)fVar4;
          }
          SfSetWindowText(param_2,&DAT_00589f60,(double)fVar4);
          return 1;
        }
        iVar1 = *param_5;
        *(undefined4 *)(iVar1 + 0x1008) = *(undefined4 *)(&DAT_00588f50 + LVar2 * 2);
        *(undefined4 *)(iVar1 + 0x100c) = *(undefined4 *)((int)&DAT_00588f50 + LVar2 * 0x10 + 4);
        if (LVar2 == 0) {
          *(undefined4 *)(*param_5 + 0x1010) = 1;
          return 1;
        }
        *(undefined4 *)(*param_5 + 0x1010) = 0;
        return 1;
      }
      if (param_3 == 0x48a) {
        if (param_4 != 1) {
          return 1;
        }
        wParam = SendMessageA(param_2,0x147,0,0);
        if (wParam == 0xffffffff) {
          return 1;
        }
        if ((*(int *)(*param_5 + 0xfb0) == (&DAT_005b2adc)[wParam * 2]) &&
           (*(int *)(*param_5 + 0xfb4) == (int)(&DAT_005b2adc)[wParam * 2] >> 0x1f)) {
          return 1;
        }
        LVar2 = SendMessageA(param_2,0x150,wParam,0);
        iVar1 = *param_5;
        LVar6 = 0;
        *(LRESULT *)(iVar1 + 0xfb0) = LVar2;
        UVar5 = 0x468;
        *(LRESULT *)(iVar1 + 0xfb4) = LVar2 >> 0x1f;
        pHVar3 = GetParent(param_1);
        SendMessageA(pHVar3,UVar5,(WPARAM)param_1,LVar6);
        param_5[2] = 1;
        return 1;
      }
      if (param_3 != 0x4d5) {
        return 1;
      }
    }
  }
  else if (param_3 != 0x4ee) {
    if (param_3 != 0x9c56) {
      return 1;
    }
    FUN_0041d180(param_1,param_5);
    return 1;
  }
  LVar6 = 0;
  UVar5 = 0x468;
  pHVar3 = GetParent(param_1);
  SendMessageA(pHVar3,UVar5,(WPARAM)param_1,LVar6);
  param_5[2] = 1;
  return 1;
}


