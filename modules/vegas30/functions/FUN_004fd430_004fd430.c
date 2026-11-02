/* Module: vegas30.exe
   Function: FUN_004fd430
   Address: 004fd430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fd430(undefined4 *param_1,HDC param_2,RECT *param_3)

{
  int iVar1;
  bool bVar2;
  HDC hdc;
  HGDIOBJ pvVar3;
  BOOL BVar4;
  COLORREF color;
  LPCSTR lpchText;
  int iVar5;
  int iVar6;
  tagRECT local_20;
  tagRECT local_10;
  
  hdc = param_2;
  pvVar3 = (HGDIOBJ)_SfGetUIFont_4(100);
  pvVar3 = SelectObject(param_2,pvVar3);
  iVar5 = 0;
  if ((int *)param_1[0x5e] == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)param_1[0x5e];
  }
  FUN_0044ed00(param_2,param_1 + 4,0,0x800);
  bVar2 = false;
  if ((int *)param_1[0x5f] == (int *)0x0) {
    param_2 = (HDC)0x0;
  }
  else {
    param_2 = *(HDC *)param_1[0x5f];
  }
  iVar1 = param_1[0x60];
  if (((-1 < iVar1) && (iVar1 < iVar6)) && (0 < (int)param_2)) {
    iVar6 = *(int *)(*(int *)(param_1[0x5e] + 8) + iVar1 * 4);
    if ((*(int *)(iVar6 + 0x150) < 0) || ((int)param_2 <= *(int *)(iVar6 + 0x150))) {
      *(undefined4 *)(iVar6 + 0x150) = 0;
    }
    if (0 < (int)param_2) {
      do {
        iVar1 = *(int *)(*(int *)(param_1[0x5f] + 8) + iVar5 * 4);
        BVar4 = IntersectRect(&local_10,param_3,(RECT *)(iVar1 + 0x108));
        if (BVar4 != 0) {
          FUN_004fcc00(param_1,iVar6,iVar1,hdc,&local_10);
          if (*(int *)(iVar1 + 0x150) == 0) {
            bVar2 = true;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_2);
      if (bVar2) {
        SetTimer((HWND)*param_1,0x62,10,(TIMERPROC)0x0);
      }
    }
  }
  if (*(int *)param_1[0x5e] < 1) {
    GetClientRect((HWND)*param_1,&local_20);
    iVar5 = SetBkMode(hdc,1);
    color = _SfGetUIColor_4(0x12);
    SetTextColor(hdc,color);
    local_10.top = local_20.top;
    local_10.left = local_20.left;
    local_10.right = local_20.right;
    local_10.bottom = local_20.bottom;
    lpchText = (LPCSTR)_SfGetString_8(DAT_00647204,0x5643);
    DrawTextA(hdc,lpchText,-1,&local_10,0x411);
    local_20.top = (((local_10.top - local_10.bottom) - local_20.top) + local_20.bottom) / 2;
    if (local_20.top < 0) {
      local_20.top = 0;
    }
    DrawTextA(hdc,lpchText,-1,&local_20,0x11);
    SetBkMode(hdc,iVar5);
  }
  SelectObject(hdc,pvVar3);
  return;
}


