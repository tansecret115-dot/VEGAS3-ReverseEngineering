/* Module: vegas30k.dll
   Function: FUN_010b3640
   Address: 010b3640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b3640(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0xf8) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xf8));
  }
  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0xfc));
  }
  if (*(HGDIOBJ *)(param_1 + 0x294) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x294));
  }
  DAT_012062b8 = DAT_012062b8 + -1;
  if (DAT_012062b8 == 0) {
    DeleteDC(DAT_01206448);
  }
  return;
}


