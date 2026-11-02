/* Module: vegas30.exe
   Function: FUN_004780f0
   Address: 004780f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004780f0(void)

{
  HGDIOBJ ho;
  
  if (DAT_0064bf68 != (HDC)0x0) {
    ho = SelectObject(DAT_0064bf68,DAT_0064bf6c);
    DeleteObject(ho);
    DeleteDC(DAT_0064bf68);
    DAT_0064bf68 = (HDC)0x0;
    DAT_0064bf6c = (HGDIOBJ)0x0;
  }
  return 1;
}


