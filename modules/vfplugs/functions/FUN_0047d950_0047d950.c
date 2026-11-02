/* Module: vfplugs.dll
   Function: FUN_0047d950
   Address: 0047d950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d950(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_0047d8c0(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


