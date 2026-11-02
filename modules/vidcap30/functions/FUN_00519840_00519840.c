/* Module: vidcap30.exe
   Function: FUN_00519840
   Address: 00519840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00519840(int param_1)

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
  DAT_005b8068 = DAT_005b8068 + -1;
  if (DAT_005b8068 == 0) {
    DeleteDC(DAT_005b81f8);
  }
  return;
}


