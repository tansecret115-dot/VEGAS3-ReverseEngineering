/* Module: rmme3260.dll
   Function: FUN_6624b9d0
   Address: 6624b9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL __cdecl FUN_6624b9d0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int hDest;
  HGDIOBJ h;
  HDC hdc;
  BOOL BVar5;
  int wDest;
  
  wDest = param_4[2] - *param_4;
  hDest = param_4[3] - param_4[1];
  iVar1 = param_3[2];
  iVar2 = *param_3;
  iVar3 = param_3[1];
  iVar4 = param_3[3];
  h = SelectObject(*(HDC *)(param_1 + 0x864),*(HGDIOBJ *)(param_2 + 0x54));
  if (*(ushort *)(param_2 + 0x26) < 9) {
    SetDIBColorTable(*(HDC *)(param_1 + 0x864),0,DAT_6627dd1c,(RGBQUAD *)&DAT_6627d918);
  }
  hdc = GetDC(*(HWND *)(param_1 + 4));
  if ((wDest == iVar1 - iVar2) && (hDest == iVar4 - iVar3)) {
    BVar5 = BitBlt(hdc,*param_4,param_4[1],wDest,hDest,*(HDC *)(param_1 + 0x864),*param_3,param_3[1]
                   ,0xcc0020);
  }
  else {
    SetStretchBltMode(hdc,3);
    BVar5 = StretchBlt(hdc,*param_4,param_4[1],wDest,hDest,*(HDC *)(param_1 + 0x864),*param_3,
                       param_3[1],iVar1 - iVar2,iVar4 - iVar3,0xcc0020);
  }
  SelectObject(*(HDC *)(param_1 + 0x864),h);
  ReleaseDC(*(HWND *)(param_1 + 4),hdc);
  return BVar5;
}


