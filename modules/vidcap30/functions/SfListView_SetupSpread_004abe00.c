/* Module: vidcap30.exe
   Function: SfListView_SetupSpread
   Address: 004abe00
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
  
                    /* 0xabe00  82
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
  _DAT_005b7634 = *(undefined4 *)param_2;
  _DAT_005b7628 = param_4;
  _DAT_005b764c = param_2;
  _DAT_005b7650 = param_3;
  _DAT_005b7654 = param_6;
  SendMessageA(param_1,0x419,0,0x5b7628);
  SendMessageA(param_1,0x42d,0,(LPARAM)&local_1c);
  SendMessageA(param_1,0x438,0,0);
  return 1;
}


