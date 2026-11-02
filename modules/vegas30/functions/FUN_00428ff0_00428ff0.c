/* Module: vegas30.exe
   Function: FUN_00428ff0
   Address: 00428ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428ff0(void)

{
  int iVar1;
  int iVar2;
  HDC hdcSrc;
  HGDIOBJ h;
  
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) {
    if (DAT_0064a560 == 0) {
      *(undefined4 *)(iVar1 + 0x4f8) = 1;
      return;
    }
    iVar2 = FUN_00548ec0(iVar1 + 0x4fc,*(int *)(iVar1 + 0x108) - *(int *)(iVar1 + 0x100),
                         *(int *)(iVar1 + 0x10c) - *(int *)(iVar1 + 0x104),0x1b);
    if (-1 < iVar2) {
      hdcSrc = GetDC(*(HWND *)(iVar1 + 0xfc));
      h = SelectObject(*(HDC *)(iVar1 + 0x928),*(HGDIOBJ *)(iVar1 + 0x924));
      BitBlt(*(HDC *)(iVar1 + 0x928),0,0,*(int *)(iVar1 + 0x500),*(int *)(iVar1 + 0x504),hdcSrc,0,0,
             0xcc0020);
      SelectObject(*(HDC *)(iVar1 + 0x928),h);
      ReleaseDC(*(HWND *)(iVar1 + 0xfc),hdcSrc);
      *(undefined4 *)(iVar1 + 0x4f4) = 1;
    }
  }
  return;
}


