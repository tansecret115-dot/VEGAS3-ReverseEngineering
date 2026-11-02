/* Module: sfppack2.dll
   Function: FUN_5cd13340
   Address: 5cd13340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd13340(int param_1)

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


