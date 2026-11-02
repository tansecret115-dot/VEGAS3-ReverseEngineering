/* Module: sftrans1.dll
   Function: FUN_00462340
   Address: 00462340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00462340(int param_1)

{
  HWND pHVar1;
  LPARAM lParam;
  double local_264;
  double local_25c;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  wchar_t local_238 [130];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c [264];
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x595);
  lParam = ftol();
  SendMessageA(pHVar1,0x610,1,lParam);
  FUN_004c6ae0(local_10c,&DAT_0055e6e4,(double)*(float *)(*(int *)(param_1 + 8) + 0x68));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x596);
  FUN_004c84a0(pHVar1);
  FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x586,"%1.3f",
               (double)*(float *)(*(int *)(param_1 + 8) + 0x58));
  FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x587,"%1.3f",
               (double)*(float *)(*(int *)(param_1 + 8) + 0x5c));
  FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x58a,"%1.3f",
               (double)*(float *)(*(int *)(param_1 + 8) + 0x60));
  FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x58b,"%1.3f",
               (double)*(float *)(*(int *)(param_1 + 8) + 100));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x588);
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_254 = 2;
  local_250 = 1;
  local_24c = 0xffffffff;
  local_248 = 0x3f800000;
  local_244 = 0x3f000000;
  local_240 = 0x3f000000;
  local_23c = 0;
  local_238[0] = L'\0';
  local_130 = 0xffffff;
  local_12c = 0;
  local_128 = 0x3f800000;
  local_114 = 1;
  local_110 = 0;
  local_264 = (double)*(float *)(*(int *)(param_1 + 8) + 0x58);
  local_134 = 1;
  local_25c = (double)*(float *)(*(int *)(param_1 + 8) + 0x5c);
  wcscpy(local_238,L"Source");
  local_244 = 0x3f800000;
  local_240 = 0x3ecccccd;
  local_23c = 0x3ecccccd;
  local_130 = 0xff;
  local_12c = 0x80;
  SendMessageA(pHVar1,0x804,0,(LPARAM)&local_264);
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_254 = 2;
  local_250 = 1;
  local_24c = 0xffffffff;
  local_248 = 0x3f800000;
  local_244 = 0x3f000000;
  local_240 = 0x3f000000;
  local_23c = 0;
  local_238[0] = L'\0';
  local_130 = 0xffffff;
  local_12c = 0;
  local_128 = 0x3f800000;
  local_118 = 0;
  local_114 = 1;
  local_110 = 0;
  local_264 = (double)*(float *)(*(int *)(param_1 + 8) + 0x60);
  local_134 = 2;
  local_25c = (double)*(float *)(*(int *)(param_1 + 8) + 100);
  wcscpy(local_238,L"Destination");
  local_244 = 0x3ecccccd;
  local_240 = 0x3ecccccd;
  local_23c = 0x3f800000;
  local_130 = 0xff0000;
  local_12c = 0x800000;
  SendMessageA(pHVar1,0x804,1,(LPARAM)&local_264);
  SendMessageA(pHVar1,0x80f,0,0);
  return;
}


