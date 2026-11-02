/* Module: sfcdi.dll
   Function: FUN_5bf2b870
   Address: 5bf2b870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2b870(byte *param_1,uint param_2)

{
  if (param_1 == (byte *)0x0) {
    return 0x80004003;
  }
  *param_1 = (char)(param_2 / 10) << 4 | (byte)((ulonglong)param_2 % 10);
  return 0;
}


