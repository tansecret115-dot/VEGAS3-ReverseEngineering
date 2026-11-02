/* Module: mcplug.dll
   Function: FUN_0046f9f0
   Address: 0046f9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046f9f0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_0046f960(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


