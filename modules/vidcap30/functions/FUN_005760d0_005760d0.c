/* Module: vidcap30.exe
   Function: FUN_005760d0
   Address: 005760d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005760d0(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_00576040(param_1,local_10.wYear,local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


