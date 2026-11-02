/* Module: vegas30.exe
   Function: FUN_00581600
   Address: 00581600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00581600(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HDC hdc;
  HGDIOBJ h;
  int iVar3;
  int iVar4;
  tagRECT local_10;
  
  puVar1 = (undefined4 *)param_2[5];
  if (*param_2 != 1) {
    return 0;
  }
  if ((puVar1[4] & 0x100) == 0) {
    if ((puVar1[4] & 0x800) == 0) {
      hdc = GetDC((HWND)0x0);
      local_10.left = 0;
      local_10.top = 0;
      local_10.right = 0;
      local_10.bottom = 0;
      h = SelectObject(hdc,DAT_0065a050);
      DrawTextA(hdc,(LPCSTR)*puVar1,-1,&local_10,0x424);
      SelectObject(hdc,h);
      iVar3 = local_10.bottom - local_10.top;
      iVar2 = GetSystemMetrics(0xf);
      if (iVar3 < iVar2) {
        iVar3 = GetSystemMetrics(0xf);
      }
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 <= iVar3) {
        iVar2 = local_10.bottom - local_10.top;
        iVar3 = GetSystemMetrics(0xf);
        if (iVar2 < iVar3) {
          iVar2 = GetSystemMetrics(0xf);
        }
      }
      param_2[4] = iVar2;
      iVar4 = local_10.right - local_10.left;
      iVar3 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x38) <= iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = GetSystemMetrics(0x47);
      param_2[3] = ((iVar4 + iVar3 * 2) - iVar2) + 6;
      ReleaseDC((HWND)0x0,hdc);
      return 1;
    }
    iVar2 = GetSystemMetrics(0xf);
    param_2[4] = iVar2 >> 1;
    param_2[3] = 0;
    return 1;
  }
  param_2[5] = puVar1[10];
  return 0;
}


