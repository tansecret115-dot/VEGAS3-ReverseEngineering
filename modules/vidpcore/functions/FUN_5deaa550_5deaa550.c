/* Module: vidpcore.dll
   Function: FUN_5deaa550
   Address: 5deaa550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deaa550(int param_1)

{
  HDC hdc;
  int h;
  HGDIOBJ pvVar1;
  DWORD color;
  HBRUSH pHVar2;
  COLORREF *pCVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x80070057;
  }
  hdc = *(HDC *)(param_1 + 0x39c);
  pvVar1 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x3a0));
  iVar4 = *(int *)(param_1 + 0x3a8);
  *(HGDIOBJ *)(param_1 + 0x3d4) = pvVar1;
  h = *(int *)(param_1 + 0x3ac);
  color = GetSysColor(0xf);
  pHVar2 = CreateSolidBrush(color);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,0,0,iVar4,h,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  iVar4 = 0;
  pCVar3 = &DAT_5df340bc;
  do {
    pHVar2 = CreateSolidBrush(*pCVar3);
    pvVar1 = SelectObject(hdc,pHVar2);
    iVar4 = iVar4 + 1;
    PatBlt(hdc,1,iVar4,5,1,0xf00021);
    pvVar1 = SelectObject(hdc,pvVar1);
    DeleteObject(pvVar1);
    pCVar3 = pCVar3 + 1;
  } while ((int)pCVar3 < 0x5df340ec);
  pHVar2 = CreateSolidBrush(0xff);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,8,1,5,4,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  pHVar2 = CreateSolidBrush(0xff00);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,8,5,5,4,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  pHVar2 = CreateSolidBrush(0xff0000);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,8,9,5,4,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  return 0;
}


