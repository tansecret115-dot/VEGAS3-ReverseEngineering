/* Module: vidcap30.exe
   Function: FUN_00453d90
   Address: 00453d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453d90(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x1c) = (((int)param_2 < 0) - 1 & param_2) + ((RECT *)(param_1 + 0x14))->left;
  *(uint *)(param_1 + 0x20) = (((int)param_3 < 0) - 1 & param_3) + *(int *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


