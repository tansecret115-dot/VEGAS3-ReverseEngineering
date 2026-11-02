/* Module: sfxpfx1.dll
   Function: FUN_5c9846b0
   Address: 5c9846b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c9846b0(int *param_1)

{
  _SYSTEMTIME local_10;
  
  GetSystemTime(&local_10);
  FUN_5c984620(param_1,(uint)local_10.wYear,(uint)local_10.wMonth,local_10._6_4_ & 0xffff);
  return;
}


