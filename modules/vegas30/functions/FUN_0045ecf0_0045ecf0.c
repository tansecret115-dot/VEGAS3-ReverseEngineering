/* Module: vegas30.exe
   Function: FUN_0045ecf0
   Address: 0045ecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ecf0(int param_1,HDC param_2)

{
  HDC hdc;
  HGDIOBJ h;
  DWORD DVar1;
  UINT UVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  tagRECT local_38;
  CHAR local_28 [40];
  
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x3d8) &&
      -1 < *(int *)(param_1 + 0x3e0) - *(int *)(param_1 + 0x3d8)) {
    hdc = param_2;
    if ((param_2 == (HDC)0x0) && (hdc = GetDC(*(HWND *)(param_1 + 4)), hdc == (HDC)0x0)) {
      return;
    }
    h = (HGDIOBJ)_SfGetUIFont_4(100);
    SelectObject(hdc,h);
    SetTextAlign(hdc,2);
    DVar1 = GetSysColor(0x12);
    SetTextColor(hdc,DVar1);
    DVar1 = GetSysColor(0xf);
    SetBkColor(hdc,DVar1);
    local_44 = *(int *)(param_1 + 0xb34);
    local_48 = *(uint *)(param_1 + 0xb30);
    local_40 = 0;
    local_3c = 0;
    if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
      FUN_004582a0(param_1,&local_48,&local_40);
    }
    pcVar4 = ExtTextOutA_exref;
    if (*(int *)(param_1 + 0x3dc) != *(int *)(param_1 + 0x3d4)) {
      local_38.top = *(int *)(param_1 + 0x3d8);
      local_38.right = *(int *)(param_1 + 0x3dc);
      local_38.bottom = *(LONG *)(param_1 + 0x3e0);
      local_38.left = *(int *)(param_1 + 0x3d4);
      InflateRect(&local_38,-1,-1);
      UVar2 = _SfNanoTimeToTextEx_20(local_28,param_1 + 0x20,local_48,local_44,0);
      ExtTextOutA(hdc,local_38.right + -2,local_38.top + 1,6,&local_38,local_28,UVar2,(INT *)0x0);
    }
    if (*(int *)(param_1 + 0x3ec) != *(int *)(param_1 + 0x3e4)) {
      local_38.top = *(int *)(param_1 + 1000);
      local_38.right = *(int *)(param_1 + 0x3ec);
      local_38.bottom = *(LONG *)(param_1 + 0x3f0);
      local_38.left = *(int *)(param_1 + 0x3e4);
      InflateRect(&local_38,-1,-1);
      UVar2 = 0;
      if (local_40 != 0 || local_3c != 0) {
        UVar2 = _SfNanoTimeToTextEx_20
                          (local_28,param_1 + 0x20,local_40 + local_48,
                           local_3c + local_44 + (uint)CARRY4(local_40,local_48),0);
      }
      pcVar4 = ExtTextOutA_exref;
      ExtTextOutA(hdc,local_38.right + -2,local_38.top + 1,6,&local_38,local_28,UVar2,(INT *)0x0);
    }
    if (*(int *)(param_1 + 0x3fc) != *(int *)(param_1 + 0x3f4)) {
      local_38.top = *(int *)(param_1 + 0x3f8);
      local_38.right = *(int *)(param_1 + 0x3fc);
      local_38.bottom = *(LONG *)(param_1 + 0x400);
      local_38.left = *(int *)(param_1 + 0x3f4);
      InflateRect(&local_38,-1,-1);
      uVar3 = 0;
      if (local_40 != 0 || local_3c != 0) {
        uVar3 = _SfNanoTimeToTextEx_20(local_28,param_1 + 0x20,local_40,local_3c,2);
      }
      (*pcVar4)(hdc,local_38.right + -2,local_38.top + 1,6,&local_38,local_28,uVar3,0);
    }
    if (param_2 == (HDC)0x0) {
      ReleaseDC(*(HWND *)(param_1 + 4),hdc);
    }
  }
  return;
}


