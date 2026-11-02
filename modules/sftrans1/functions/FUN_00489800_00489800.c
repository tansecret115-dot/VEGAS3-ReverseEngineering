/* Module: sftrans1.dll
   Function: FUN_00489800
   Address: 00489800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00489800(int param_1,HDC param_2,int param_3,LPRECT param_4)

{
  int *piVar1;
  HDC hdc;
  HGDIOBJ h;
  UINT UVar2;
  DWORD color;
  undefined8 uVar3;
  tagRECT local_30;
  tagRECT local_20;
  RECT local_10;
  
  if ((-1 < param_3) && (param_3 < **(int **)(param_1 + 0xa4))) {
    piVar1 = *(int **)((*(int **)(param_1 + 0xa4))[2] + param_3 * 4);
    if (*piVar1 != -1) {
      hdc = CreateCompatibleDC(param_2);
      h = SelectObject(hdc,*(HGDIOBJ *)
                            (*(int *)(*(int *)(*(int *)(param_1 + 0xa8) + 8) + *piVar1 * 4) + 8));
      local_30.left = 0;
      local_30.top = 0;
      local_30.right = 0x10;
      local_30.bottom = 0xf;
      UVar2 = 5;
      if (((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0x114) != 0)) &&
         (*(int *)(param_1 + 0xe4) == param_3)) {
        UVar2 = 10;
      }
      DrawEdge(param_2,param_4,UVar2,0x100f);
      local_20.top = param_4->top;
      local_20.left = param_4->left;
      local_20.right = param_4->right;
      local_20.bottom = param_4->bottom;
      InflateRect(&local_20,-2,-2);
      uVar3 = FUN_00487420(&local_20,&local_30);
      OffsetRect(&local_30,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      color = GetSysColor(0xf);
      SetBkColor(param_2,color);
      if (((local_20.left <= local_30.left) && (local_20.top <= local_30.top)) &&
         ((local_30.right <= local_20.right && (local_30.bottom <= local_20.bottom)))) {
        local_10.bottom = local_30.top;
        local_10.left = local_20.left;
        local_10.top = local_20.top;
        local_10.right = local_20.right;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.top = local_30.bottom;
        local_10.left = local_20.left;
        local_10.right = local_20.right;
        local_10.bottom = local_20.bottom;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.top = local_30.top;
        local_10.left = local_20.left;
        local_10.right = local_30.left;
        local_10.bottom = local_30.bottom;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.top = local_30.top;
        local_10.left = local_30.right;
        local_10.right = local_20.right;
        local_10.bottom = local_30.bottom;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      }
      BitBlt(param_2,local_30.left,local_30.top,local_30.right - local_30.left,
             local_30.bottom - local_30.top,hdc,0,0,0xcc0020);
      SelectObject(hdc,h);
      DeleteDC(hdc);
      return;
    }
    UVar2 = 0x10;
    if (((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0x114) != 0)) &&
       (*(int *)(param_1 + 0xe4) == param_3)) {
      UVar2 = 0x210;
    }
    DrawFrameControl(param_2,param_4,4,UVar2);
  }
  return;
}


