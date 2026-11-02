/* Module: vegas30.exe
   Function: FUN_00455e00
   Address: 00455e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455e00(int param_1)

{
  HGDIOBJ ho;
  
  *(undefined4 *)(param_1 + 0xd3c) = 0;
  if (*(HDC *)(param_1 + 0xd1c) != (HDC)0x0) {
    if (*(HGDIOBJ *)(param_1 + 0xd18) != (HGDIOBJ)0x0) {
      ho = SelectObject(*(HDC *)(param_1 + 0xd1c),*(HGDIOBJ *)(param_1 + 0xd18));
      DeleteObject(ho);
    }
    *(undefined4 *)(param_1 + 0xd18) = 0;
    DeleteDC(*(HDC *)(param_1 + 0xd1c));
    *(undefined4 *)(param_1 + 0xd1c) = 0;
  }
  return;
}


