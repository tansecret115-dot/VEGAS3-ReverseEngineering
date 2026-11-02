/* Module: vidcap30.exe
   Function: FUN_004015f0
   Address: 004015f0
   Source: Ghidra pseudocode (Stage 10 batch) */


UINT FUN_004015f0(HWND param_1,DWORD param_2,HWND param_3)

{
  HPALETTE pHVar1;
  HDC pHVar2;
  int iVar3;
  UINT UVar4;
  uint bForceBkgd;
  
  pHVar1 = (HPALETTE)FUN_004015e0();
  iVar3 = DAT_005bb83c;
  if ((param_2 != 0x30f) && (param_2 != 0x311)) {
    return 0;
  }
  if (DAT_005bb83c != 0) {
    pHVar2 = GetDC(param_1);
    iVar3 = DrawDibRealize(iVar3,pHVar2,param_2 == 0x311);
    if (iVar3 != 0) {
      InvalidateRect(param_1,(RECT *)0x0,1);
    }
    ReleaseDC(param_1,pHVar2);
  }
  bForceBkgd = (uint)(param_2 == 0x311);
  if (bForceBkgd != 0) {
    if (param_3 == param_1) {
      return 0;
    }
    GetWindowThreadProcessId(param_3,&param_2);
  }
  pHVar2 = GetDC(param_1);
  pHVar1 = SelectPalette(pHVar2,pHVar1,bForceBkgd);
  UVar4 = RealizePalette(pHVar2);
  if ((UVar4 != 0) || (bForceBkgd != 0)) {
    InvalidateRect(param_1,(RECT *)0x0,1);
  }
  SelectPalette(pHVar2,pHVar1,bForceBkgd);
  ReleaseDC(param_1,pHVar2);
  return UVar4;
}


