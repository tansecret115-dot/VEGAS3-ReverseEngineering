/* Module: vegas30.exe
   Function: FUN_00439600
   Address: 00439600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00439600(int param_1,int param_2)

{
  if (*(HGDIOBJ *)(param_1 + 0x8c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(HDC *)(param_1 + 0x84) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x88) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (param_2 == 0) {
    FUN_00453250(DAT_00647630,0);
  }
  return 0;
}


