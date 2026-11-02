/* Module: vidcap30.exe
   Function: FUN_00411880
   Address: 00411880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411880(HWND param_1,undefined4 param_2)

{
  undefined4 uVar1;
  WPARAM wParam;
  WPARAM local_808;
  LPARAM local_804;
  uchar local_800 [2048];
  
  uVar1 = 0;
  if (param_1 != (HWND)0x0) {
    uVar1 = _SfVPrintF_12(local_800,param_2,&stack0x0000000c);
    _mbscat(local_800,&DAT_005b2788);
    SendMessageA(param_1,0xb0,(WPARAM)&local_808,(LPARAM)&local_804);
    wParam = GetWindowTextLengthA(param_1);
    SendMessageA(param_1,0xb1,wParam,wParam);
    SendMessageA(param_1,0xc2,0,(LPARAM)local_800);
    SendMessageA(param_1,0xb1,local_808,local_804);
  }
  return uVar1;
}


