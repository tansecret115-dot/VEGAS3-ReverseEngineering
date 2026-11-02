/* Module: g2plug.dll
   Function: FUN_5f819800
   Address: 5f819800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f819800(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5f819770(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


