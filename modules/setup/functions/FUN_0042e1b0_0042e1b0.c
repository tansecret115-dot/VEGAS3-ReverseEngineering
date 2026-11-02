/* Module: Setup.exe
   Function: FUN_0042e1b0
   Address: 0042e1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e1b0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_0042e120(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


