/* Module: sfmarket2.dll
   Function: FUN_0041bf60
   Address: 0041bf60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bf60(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_0041bed0(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


