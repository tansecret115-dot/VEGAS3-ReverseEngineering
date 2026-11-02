/* Module: vidcap30.exe
   Function: _MeterInst_Deinit@4
   Address: 005106d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _MeterInst_Deinit_4(int param_1)

{
                    /* 0x1106d0  180  _MeterInst_Deinit@4 */
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


