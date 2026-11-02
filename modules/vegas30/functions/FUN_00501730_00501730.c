/* Module: vegas30.exe
   Function: FUN_00501730
   Address: 00501730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00501730(undefined4 *param_1)

{
  HWND pHVar1;
  undefined1 *puVar2;
  undefined1 local_28 [40];
  
  _SfWndCenter_16(param_1[0xc],0,0,0x8001);
  _SfNanoTimeToTextEx_20(local_28,param_1 + 2,*param_1,param_1[1],2);
  puVar2 = local_28;
  pHVar1 = GetDlgItem((HWND)param_1[0xc],0x469);
  SfSetWindowText(pHVar1,puVar2);
  return;
}


