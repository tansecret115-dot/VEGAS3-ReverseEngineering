/* Module: vegas30k.dll
   Function: FUN_0114f020
   Address: 0114f020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114f020(undefined4 *param_1,int param_2)

{
  LPRECT lprc;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  BOOL BVar8;
  HWND pHVar9;
  HWND pHVar10;
  undefined4 uVar11;
  undefined4 unaff_EBP;
  
  if (param_2 == 2) goto LAB_0114f099;
  FUN_0114e920(param_1);
  uVar2 = param_1[0xf];
  if (((uVar2 < (uint)param_1[0x17]) || (uVar2 == 0xffff)) &&
     (uVar3 = param_1[0x10], uVar3 <= (uint)param_1[0x18])) {
    uVar1 = *(ushort *)(uVar3 * 0x10 + 4 + param_1[0x70]);
    if (((uVar1 & 0x4000) == 0) && ((*(byte *)(param_1 + 0x59) & 2) == 0)) {
      if ((uVar1 & 0x8000) != 0) goto LAB_0114f099;
    }
    else {
      iVar6 = (*(code *)param_1[0x82])(param_1 + 0x72,uVar2,uVar3,0);
      if (iVar6 == 1) goto LAB_0114f099;
    }
  }
  param_2 = 0;
LAB_0114f099:
  if (param_1[2] != 0) {
    if (param_2 == 1) {
      piVar5 = (int *)FUN_0114eae0(param_1,param_1[0xf],param_1[0x10]);
      uVar11 = param_1[0xf];
      uVar4 = param_1[0x10];
      if (((piVar5 != (int *)0x0) && (piVar5[3] == piVar5[1])) &&
         ((piVar5[3] != 0xffff && (*piVar5 == 0xffff)))) {
        uVar11 = 0;
      }
      FUN_0114f9b0(param_1,uVar11,uVar4);
      lprc = (LPRECT)(param_1 + 3);
      iVar6 = FUN_0114e800(param_1,uVar4,lprc);
      if ((iVar6 != 0) && (iVar6 = FUN_0114e8b0(param_1,uVar11,lprc), iVar6 != 0)) {
        InflateRect(lprc,1,1);
        SetWindowPos((HWND)param_1[2],(HWND)0x0,lprc->left,param_1[4],param_1[5] - lprc->left,
                     param_1[6] - param_1[4],0x14);
        iVar6 = FUN_0114e690(param_1,0x10);
        if (iVar6 != -1) {
          puVar7 = (undefined4 *)(*(code *)param_1[0x81])(param_1 + 0x72,uVar11,uVar4,3);
          SetWindowTextA((HWND)param_1[2],(LPCSTR)*puVar7);
          SendMessageA((HWND)param_1[2],0xb1,0,0x7fff);
          BVar8 = IsWindowVisible((HWND)param_1[2]);
          if (BVar8 == 0) {
            ShowWindow((HWND)param_1[2],5);
          }
          pHVar10 = (HWND)param_1[2];
          pHVar9 = GetFocus();
          if (pHVar9 != pHVar10) {
            SetFocus(pHVar10);
          }
          param_1[7] = 0;
          param_1[1] = unaff_EBP;
          FUN_011553c0(param_1);
          return;
        }
        param_1[1] = 0;
        FUN_011553c0(param_1);
        return;
      }
      param_1[1] = 0;
      FUN_011553c0(param_1);
      return;
    }
    pHVar10 = GetFocus();
    if (pHVar10 == (HWND)param_1[2]) {
      SetFocus((HWND)*param_1);
    }
    BVar8 = IsWindowVisible((HWND)param_1[2]);
    if (BVar8 != 0) {
      ShowWindow((HWND)param_1[2],0);
      InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 3),1);
    }
  }
  param_1[1] = param_2;
  FUN_011553c0(param_1);
  return;
}


