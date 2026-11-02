/* Module: vidcap30.exe
   Function: FUN_0050f220
   Address: 0050f220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050f220(int param_1)

{
  if (param_1 != 0) {
    FUN_0050f1d0(param_1);
    DAT_005b8050 = DAT_005b8050 + -1;
    if (DAT_005b8050 == 0) {
      DAT_005b8050 = 0;
      if (DAT_005b805c != (HDC)0x0) {
        DeleteDC(DAT_005b805c);
        DAT_005b805c = (HDC)0x0;
      }
    }
  }
  return;
}


