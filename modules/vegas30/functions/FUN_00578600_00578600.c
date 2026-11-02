/* Module: vegas30.exe
   Function: FUN_00578600
   Address: 00578600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00578600(void)

{
  if (DAT_00659e38 == 0) {
    DeleteFileA(&DAT_00659d30);
    DAT_00659d30 = 0;
  }
  return;
}


