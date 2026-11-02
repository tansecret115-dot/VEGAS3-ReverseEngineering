/* Module: sftrans1.dll
   Function: FUN_005371a0
   Address: 005371a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005371a0(undefined4 param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_00537110(param_1,local_10.wYear,local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


