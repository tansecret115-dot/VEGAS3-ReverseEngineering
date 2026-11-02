/* Module: vidcap30.exe
   Function: FUN_0050f1d0
   Address: 0050f1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050f1d0(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x58) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x5c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x60) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}


