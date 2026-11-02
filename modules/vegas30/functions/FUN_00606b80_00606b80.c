/* Module: vegas30.exe
   Function: FUN_00606b80
   Address: 00606b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00606b80(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_00606af0(param_1,local_10.wYear,local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


