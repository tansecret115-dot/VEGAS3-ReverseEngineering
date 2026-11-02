/* Module: vegas30k.dll
   Function: FUN_0113ea20
   Address: 0113ea20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113ea20(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_0113e990(param_1,local_10.wYear,local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


