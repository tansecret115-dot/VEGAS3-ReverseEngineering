/* Module: sfpaplug.dll
   Function: FUN_00418220
   Address: 00418220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418220(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_00418190(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


