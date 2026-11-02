/* Module: vegas30k.dll
   Function: SfCheckList_SetupSpread
   Address: 01037ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __stdcall SfCheckList_SetupSpread(struct HWND__ *,void *,struct _sfviewfield const *,unsigned
   int) */

int SfCheckList_SetupSpread(HWND__ *param_1,void *param_2,_sfviewfield *param_3,uint param_4)

{
  WPARAM wParam;
  LPARAM lParam;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x37ce0  360  ?SfCheckList_SetupSpread@@YGHPAUHWND__@@PAXPBU_sfviewfield@@I@Z
                        */
  local_1c = 9;
  local_18 = 0xff00;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  SendMessageA(param_1,0x438,1,0);
  SendMessageA(param_1,0x40b,0,0x1205140);
  lParam = 0;
  wParam = _SfGetUIFont_4(100);
  SendMessageA(param_1,0x30,wParam,lParam);
  SendMessageA(param_1,0x42e,0,0x10000001);
  _DAT_01205164 = param_4;
  _DAT_0120517c = param_3;
  _DAT_01205158 = param_2;
  SendMessageA(param_1,0x419,0,0x1205158);
  SendMessageA(param_1,0x42d,0,(LPARAM)&local_1c);
  SendMessageA(param_1,0x438,0,0);
  return 1;
}


