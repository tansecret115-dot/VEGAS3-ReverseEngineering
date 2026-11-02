/* Module: vidcap30.exe
   Function: FUN_00544330
   Address: 00544330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00544330(HDC param_1,RECT *param_2,COLORREF param_3,COLORREF param_4)

{
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  
  SetBkColor(param_1,param_4);
  iVar4 = param_2->right;
  iVar1 = param_2->left;
  if (iVar1 < iVar4) {
    if (param_2->top < param_2->bottom) {
      if ((iVar4 < iVar1 + 2) || (param_2->bottom < param_2->top + 2)) {
        ExtTextOutA(param_1,0,0,2,param_2,(LPCSTR)0x0,0,(INT *)0x0);
        iVar4 = param_2->left;
        iVar1 = param_2->right;
        if (2 - iVar4 < iVar1) {
          param_2->right = iVar1 + -1;
          param_2->left = iVar4 + 1;
        }
        else {
          iVar4 = (iVar1 + iVar4) / 2;
          param_2->left = iVar4;
          param_2->right = iVar4;
        }
        iVar4 = param_2->top;
        iVar1 = param_2->bottom;
        if (2 - iVar4 < iVar1) {
          param_2->bottom = iVar1 + -1;
          param_2->top = iVar4 + 1;
          return 0;
        }
        iVar4 = (iVar1 + iVar4) / 2;
        param_2->top = iVar4;
        param_2->bottom = iVar4;
      }
      else {
        param_2->left = iVar4 + -1;
        ExtTextOutA(param_1,0,0,2,param_2,(LPCSTR)0x0,0,(INT *)0x0);
        LVar2 = param_2->left;
        param_2->left = iVar1;
        LVar3 = param_2->top;
        param_2->right = LVar2;
        param_2->top = param_2->bottom + -1;
        ExtTextOutA(param_1,0,0,2,param_2,(LPCSTR)0x0,0,(INT *)0x0);
        LVar2 = param_2->top;
        param_2->top = LVar3;
        param_2->bottom = LVar2;
        SetBkColor(param_1,param_3);
        LVar2 = param_2->bottom;
        param_2->bottom = param_2->top + 1;
        ExtTextOutA(param_1,0,0,2,param_2,(LPCSTR)0x0,0,(INT *)0x0);
        LVar3 = param_2->bottom;
        param_2->bottom = LVar2;
        iVar4 = param_2->right;
        param_2->top = LVar3;
        param_2->right = param_2->left + 1;
        ExtTextOutA(param_1,0,0,2,param_2,(LPCSTR)0x0,0,(INT *)0x0);
        iVar1 = param_2->right;
        param_2->right = iVar4;
        param_2->left = iVar1;
        if ((iVar1 < iVar4) && (param_2->top < param_2->bottom)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


