/* Module: vegas30.exe
   Function: FUN_004592f0
   Address: 004592f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004592f0(int param_1,LPRECT param_2,int param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  LONG LVar2;
  HDC hdc;
  DWORD color;
  RECT local_10;
  
  if (param_2 == (LPRECT)0x0) {
    param_3 = 0;
  }
  if (param_3 != *(int *)(param_1 + 0x1d8)) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
    if (*(int *)(param_1 + 0x1d8) != 0) {
      piVar1 = *(int **)(param_1 + 0x1ec);
      if (piVar1 != (int *)0x0) {
        IntersectClipRect(hdc,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
      }
      if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
        color = GetSysColor(0xf);
        SetBkColor(hdc,color);
        local_10.left = *(LONG *)(param_1 + 0x1dc);
        local_10.top = *(int *)(param_1 + 0x1e0);
        local_10.right = *(LONG *)(param_1 + 0x1e4);
        local_10.bottom = local_10.top + 2;
        ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.bottom = *(int *)(param_1 + 0x1e8);
        local_10.left = *(LONG *)(param_1 + 0x1dc);
        local_10.top = local_10.bottom + -2;
        local_10.right = *(LONG *)(param_1 + 0x1e4);
        ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.left = *(int *)(param_1 + 0x1dc);
        local_10.right = local_10.left + 2;
        local_10.top = *(int *)(param_1 + 0x1e0) + 2;
        local_10.bottom =
             (local_10.top - *(int *)(param_1 + 0x1e0)) + -4 + *(int *)(param_1 + 0x1e8);
        ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.right = *(int *)(param_1 + 0x1e4);
        local_10.left = local_10.right + -2;
        local_10.top = *(int *)(param_1 + 0x1e0) + 2;
        local_10.bottom =
             (local_10.top - *(int *)(param_1 + 0x1e0)) + -4 + *(int *)(param_1 + 0x1e8);
        ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      }
      else {
        (**(code **)(param_1 + 0x1f0))
                  (param_1,hdc,param_1 + 0x1dc,*(undefined4 *)(param_1 + 0x1d8),0);
      }
      if (*(int *)(param_1 + 0x1ec) != 0) {
        SelectClipRgn(hdc,(HRGN)0x0);
        *(undefined4 *)(param_1 + 0x1ec) = 0;
      }
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      if (DAT_0064769c == *(int *)(param_1 + 4)) {
        DAT_0064769c = 0;
      }
    }
    if (param_3 != 0) {
      if (param_5 != (int *)0x0) {
        IntersectClipRect(hdc,*param_5,param_5[1],param_5[2],param_5[3]);
      }
      *(undefined4 *)(param_1 + 0x1f0) = param_4;
      *(LONG *)(param_1 + 0x1dc) = param_2->left;
      *(LONG *)(param_1 + 0x1e0) = param_2->top;
      *(LONG *)(param_1 + 0x1e4) = param_2->right;
      LVar2 = param_2->bottom;
      *(int **)(param_1 + 0x1ec) = param_5;
      *(LONG *)(param_1 + 0x1e8) = LVar2;
      DAT_0064769c = *(int *)(param_1 + 4);
      *(int *)(param_1 + 0x1d8) = param_3;
      if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
        DrawEdge(hdc,param_2,4,0xf);
      }
      else {
        (**(code **)(param_1 + 0x1f0))
                  (param_1,hdc,(LONG *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1d8),1);
      }
    }
    ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  }
  return;
}


