/* Module: sfppack1.dll
   Function: FUN_5ce0acd0
   Address: 5ce0acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0acd0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5ce0ac40(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


