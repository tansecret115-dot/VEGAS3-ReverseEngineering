/* Module: wavplug.dll
   Function: FUN_5f3c39a0
   Address: 5f3c39a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c39a0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5f3c3910(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


