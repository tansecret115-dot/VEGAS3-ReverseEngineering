/* Module: vidcap30.exe
   Function: FUN_0041a3f0
   Address: 0041a3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a3f0(HWND param_1,int *param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  *(undefined4 *)(*param_2 + 0x48) = DAT_005b2b48;
  *(undefined4 *)(*param_2 + 0x48c) = DAT_005b2f8c;
  *(undefined4 *)(*param_2 + 0x3c) = DAT_005b2b3c;
  *(undefined4 *)(*param_2 + 0x5a0) = DAT_005b30a0;
  *(undefined4 *)(*param_2 + 0x5a4) = DAT_005b30a4;
  *(undefined4 *)(*param_2 + 0x1280) = DAT_005b3d80;
  *(undefined4 *)(*param_2 + 0xf24) = DAT_005b3a24;
  *(undefined4 *)(*param_2 + 0x5ac) = DAT_005b30ac;
  *(undefined4 *)(*param_2 + 0x5b0) = DAT_005b30b0;
  *(undefined4 *)(*param_2 + 0xf34) = DAT_005b3a34;
  *(undefined4 *)(*param_2 + 0xf38) = DAT_005b3a38;
  *(undefined4 *)(*param_2 + 0xf80) = DAT_005b3a80;
  *(undefined4 *)(*param_2 + 0xf10) = DAT_005b3a10;
  *(undefined4 *)(*param_2 + 0x1044) = DAT_005b3b44;
  *(undefined4 *)(*param_2 + 0x1288) = DAT_005b3d88;
  *(undefined4 *)(*param_2 + 0x128c) = DAT_005b3d8c;
  *(undefined4 *)(*param_2 + 0x1290) = DAT_005b3d90;
  *(undefined4 *)(*param_2 + 0x1294) = DAT_005b3d94;
  *(undefined4 *)(*param_2 + 0xfc0) = DAT_005b3ac0;
  *(undefined4 *)(*param_2 + 0xfc4) = DAT_005b3ac4;
  *(undefined4 *)(*param_2 + 0x1270) = DAT_005b3d70;
  *(undefined4 *)(*param_2 + 0xfcc) = DAT_005b3acc;
  *(undefined4 *)(*param_2 + 0x468) = DAT_005b2f68;
  *(undefined4 *)(*param_2 + 0x460) = DAT_005b2f60;
  FUN_00418370(param_1,*param_2);
  InvalidateRect(param_1,(RECT *)0x0,0);
  FUN_0041a160(param_2,param_1);
  lParam = 0;
  Msg = 0x468;
  hWnd = GetParent(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
  param_2[2] = 1;
  return;
}


