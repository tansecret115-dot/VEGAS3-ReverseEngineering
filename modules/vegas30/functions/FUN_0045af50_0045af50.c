/* Module: vegas30.exe
   Function: FUN_0045af50
   Address: 0045af50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045af50(void)

{
  if (DAT_0064be04 != (HDC)0x0) {
    DAT_0064be00 = SelectObject(DAT_0064be04,DAT_0064be00);
    DeleteDC(DAT_0064be04);
    DAT_0064be04 = (HDC)0x0;
  }
  if (DAT_0064be00 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0064be00);
    DAT_0064be00 = (HGDIOBJ)0x0;
  }
  if (DAT_0064bdf4 != (HDC)0x0) {
    DAT_0064bdf0 = SelectObject(DAT_0064bdf4,DAT_0064bdf0);
    DeleteDC(DAT_0064bdf4);
    DAT_0064bdf4 = (HDC)0x0;
  }
  if (DAT_0064bdf0 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_0064bdf0);
    DAT_0064bdf0 = (HGDIOBJ)0x0;
  }
  return;
}


