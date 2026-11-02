/* Module: sfppack2.dll
   Function: FUN_5cd49b50
   Address: 5cd49b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd49b50(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5cd49ac0(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


