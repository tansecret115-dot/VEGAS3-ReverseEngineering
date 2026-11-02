/* Module: vidpcore.dll
   Function: FUN_5df11990
   Address: 5df11990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df11990(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5df11900(param_1,local_10.wYear,local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


