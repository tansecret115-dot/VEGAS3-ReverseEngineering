/* Module: vegas30.exe
   Function: FUN_00455c70
   Address: 00455c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455c70(int param_1,int param_2)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  HDC pHVar2;
  HBITMAP h;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4;
  
  local_4 = *(int *)(param_1 + 0xad4);
  iVar4 = *(int *)(param_1 + 0xad0);
  iVar5 = *(int *)(param_1 + 0xac0);
  iVar3 = *(int *)(param_1 + 0xac4);
  *(int *)(param_1 + 0xd3c) = param_2;
  if (param_2 == 5) {
    local_4 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x10);
    iVar5 = 0;
    iVar3 = 0;
  }
  if (((*(int *)(param_1 + 0xd1c) == 0) || (*(int *)(param_1 + 0xd20) != iVar4)) ||
     (*(int *)(param_1 + 0xd24) != local_4)) {
    hdc = GetDC(*(HWND *)(param_1 + 4));
    if (*(HDC *)(param_1 + 0xd1c) == (HDC)0x0) {
      pHVar2 = CreateCompatibleDC(hdc);
      *(HDC *)(param_1 + 0xd1c) = pHVar2;
    }
    else {
      if (*(HGDIOBJ *)(param_1 + 0xd18) != (HGDIOBJ)0x0) {
        pvVar1 = SelectObject(*(HDC *)(param_1 + 0xd1c),*(HGDIOBJ *)(param_1 + 0xd18));
        DeleteObject(pvVar1);
      }
      *(undefined4 *)(param_1 + 0xd18) = 0;
    }
    *(undefined4 *)(param_1 + 0xd38) = 1;
    if (*(int *)(param_1 + 0xd1c) != 0) {
      *(int *)(param_1 + 0xd20) = iVar4;
      *(int *)(param_1 + 0xd24) = local_4;
      h = CreateCompatibleBitmap(hdc,*(int *)(param_1 + 0xd20),local_4);
      *(HBITMAP *)(param_1 + 0xd18) = h;
      if (h == (HBITMAP)0x0) {
        DeleteDC(*(HDC *)(param_1 + 0xd1c));
        *(undefined4 *)(param_1 + 0xd1c) = 0;
      }
      else {
        pvVar1 = SelectObject(*(HDC *)(param_1 + 0xd1c),h);
        *(HGDIOBJ *)(param_1 + 0xd18) = pvVar1;
        PatBlt(*(HDC *)(param_1 + 0xd1c),0,0,*(int *)(param_1 + 0xd20),*(int *)(param_1 + 0xd24),
               0x42);
        SelectObject(*(HDC *)(param_1 + 0xd1c),*(HGDIOBJ *)(param_1 + 8));
        SetViewportOrgEx(*(HDC *)(param_1 + 0xd1c),-iVar5,-iVar3,(LPPOINT)0x0);
      }
    }
    ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  }
  return;
}


