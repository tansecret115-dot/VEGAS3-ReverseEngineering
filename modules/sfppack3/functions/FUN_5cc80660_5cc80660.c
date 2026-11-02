/* Module: sfppack3.dll
   Function: FUN_5cc80660
   Address: 5cc80660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc80660(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5cc805d0(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


