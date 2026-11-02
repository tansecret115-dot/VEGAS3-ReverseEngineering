/* Module: vegas30.exe
   Function: FUN_00429c10
   Address: 00429c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00429c10(HWND param_1,int *param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  _mbscpy((uchar *)(*param_2 + 0x3120),&DAT_006423d0);
  _mbscpy((uchar *)(*param_2 + 0x3170),&DAT_00642420);
  _mbscpy((uchar *)(*param_2 + 0x31c0),&DAT_00642470);
  *(undefined4 *)(*param_2 + 0x3210) = DAT_006424c0;
  *(undefined4 *)(*param_2 + 0x3214) = DAT_006424c4;
  *(undefined4 *)(*param_2 + 0x3218) = DAT_006424c8;
  *(undefined4 *)(*param_2 + 0x3118) = DAT_006423c8;
  *(undefined4 *)(*param_2 + 0x322c) = DAT_006424dc;
  *(undefined4 *)(*param_2 + 0x3228) = DAT_006424d8;
  FUN_004f19e0(*param_2);
  FUN_0042a200(*param_2,DAT_0064b57c);
  FUN_004299a0(param_1,*param_2);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return 0;
}


