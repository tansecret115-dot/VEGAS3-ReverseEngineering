/* Module: sfxpfx2.dll
   Function: FUN_5c8d5fe0
   Address: 5c8d5fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d5fe0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5c8d5f50(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


