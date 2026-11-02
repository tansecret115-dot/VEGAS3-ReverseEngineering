/* Module: vidcap30.exe
   Function: FUN_004162c0
   Address: 004162c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004162c0(HWND param_1)

{
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_10);
  _SfSetMetricBinary_16(DAT_005ba29c,0x475,&local_10,0x10);
  FUN_004041c0(0);
  return;
}


