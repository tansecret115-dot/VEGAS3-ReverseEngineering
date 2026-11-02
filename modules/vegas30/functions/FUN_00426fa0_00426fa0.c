/* Module: vegas30.exe
   Function: FUN_00426fa0
   Address: 00426fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426fa0(LPVOID param_1)

{
  HWND pHVar1;
  
  *(undefined4 *)((int)param_1 + 0x118) = DAT_0064aa58;
  *(undefined4 *)((int)param_1 + 0x128) = DAT_0064aa5c;
  *(undefined4 *)((int)param_1 + 0x124) = DAT_0064a490;
  *(undefined4 *)((int)param_1 + 0x11c) = DAT_0064a494;
  *(undefined4 *)((int)param_1 + 0x120) = DAT_0064a498;
  *(undefined4 *)((int)param_1 + 300) = DAT_0064aa54;
  pHVar1 = CreateWindowExA(0,"Vegas.Class.VideoPreview.Transport","",0x50000000,0,0,0,0,
                           *(HWND *)((int)param_1 + 8),(HMENU)&DAT_00000065,DAT_006471fc,param_1);
  *(HWND *)((int)param_1 + 0xb8) = pHVar1;
  pHVar1 = CreateWindowExA(4,"Vegas.VideoPreviewStatus","",0x50000000,0,0,0,0,
                           *(HWND *)((int)param_1 + 8),(HMENU)&DAT_0000fdeb,DAT_006471fc,param_1);
  *(HWND *)((int)param_1 + 0xd0) = pHVar1;
  pHVar1 = CreateWindowExA(0,"Vegas.Class.VideoPreview.Output","Video Preview Window",0x50000000,0,0
                           ,0,0,*(HWND *)((int)param_1 + 8),(HMENU)&DAT_00000064,DAT_006471fc,
                           param_1);
  *(HWND *)((int)param_1 + 0xfc) = pHVar1;
  *(LPVOID *)(DAT_0064762c + 0x80) = param_1;
  FUN_00425d70(param_1);
  FUN_004266c0();
  FUN_00423b60(param_1);
  FUN_00426710();
  return 0;
}


