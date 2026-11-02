/* Module: vegas30.exe
   Function: FUN_004e5690
   Address: 004e5690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e5690(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(HGDIOBJ *)(param_1 + 0xe38) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_1 + 0xe38));
      *(undefined4 *)(param_1 + 0xe38) = 0;
    }
    *(undefined4 *)(param_1 + 0xe34) = 0;
    *(undefined4 *)(param_1 + 0xe30) = 0;
  }
  return;
}


