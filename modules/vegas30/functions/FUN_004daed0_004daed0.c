/* Module: vegas30.exe
   Function: FUN_004daed0
   Address: 004daed0
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_004daed0(HWND param_1,WPARAM param_2,int param_3)

{
  WPARAM wParam;
  CHAR local_514 [259];
  undefined1 local_411;
  char local_410 [260];
  char local_30c [260];
  char local_208 [260];
  char local_104 [260];
  
  if (DAT_0064a484 == 0) {
    lstrcpynA(local_514,*(char **)(param_3 + 0xa4),0x104);
    local_411 = 0;
  }
  else {
    _splitpath(*(char **)(param_3 + 0xa4),local_410,local_208,local_104,local_30c);
    SfPrintF(local_514,"%s%s    [%s%s]",local_104,local_30c,local_410,local_208);
  }
  wParam = SendMessageA(param_1,0x14a,param_2,(LPARAM)local_514);
  SendMessageA(param_1,0x151,wParam,param_3);
  return wParam;
}


