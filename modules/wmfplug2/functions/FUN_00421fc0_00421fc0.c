/* Module: wmfplug2.dll
   Function: FUN_00421fc0
   Address: 00421fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421fc0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_00421f30(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


