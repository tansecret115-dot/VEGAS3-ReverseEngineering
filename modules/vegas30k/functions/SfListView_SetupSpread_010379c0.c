/* Module: vegas30k.dll
   Function: SfListView_SetupSpread
   Address: 010379c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __stdcall SfListView_SetupSpread(struct HWND__ *,struct tSFLIST *,struct _sfviewfield const
   *,struct _spreadcol *,char const *,unsigned int) */

int SfListView_SetupSpread
              (HWND__ *param_1,tSFLIST *param_2,_sfviewfield *param_3,_spreadcol *param_4,
              char *param_5,uint param_6)

{
  WPARAM wParam;
  LPARAM lParam;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  _spreadcol *local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x379c0  404
                       ?SfListView_SetupSpread@@YGHPAUHWND__@@PAUtSFLIST@@PBU_sfviewfield@@PAU_spreadcol@@PBDI@Z
                        */
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_1c = 1;
  local_18 = 0xff00;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_30 = param_6;
  local_2c = param_6;
  local_28 = 0;
  local_24 = param_4;
  local_20 = param_5;
  SendMessageA(param_1,0x438,1,0);
  SendMessageA(param_1,0x40b,0,(LPARAM)&local_30);
  lParam = 0;
  wParam = _SfGetUIFont_4(100);
  SendMessageA(param_1,0x30,wParam,lParam);
  SendMessageA(param_1,0x42e,0,0x10000004);
  _DAT_012050ac = *(undefined4 *)param_2;
  _DAT_012050a0 = param_4;
  _DAT_012050c4 = param_2;
  _DAT_012050c8 = param_3;
  _DAT_012050cc = param_6;
  SendMessageA(param_1,0x419,0,0x12050a0);
  SendMessageA(param_1,0x42d,0,(LPARAM)&local_1c);
  SendMessageA(param_1,0x438,0,0);
  return 1;
}


