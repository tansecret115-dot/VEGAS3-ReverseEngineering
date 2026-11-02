/* Module: vidcap30.exe
   Function: FUN_004cfb10
   Address: 004cfb10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cfb10(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_004cfa80(param_1,local_10.wYear,local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


