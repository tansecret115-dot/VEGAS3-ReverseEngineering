/* Module: vegas30.exe
   Function: FUN_005587d0
   Address: 005587d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005587d0(HWND param_1,HWND param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  HWND hWnd;
  int *piVar2;
  bool bVar3;
  UINT Msg;
  LPARAM lParam;
  int local_20 [4];
  tagRECT local_10;
  
  if (param_4 == 0) {
    if (param_5 == 0x439) {
      local_20[0] = param_3[0x50];
      local_20[1] = param_3[0x51];
      local_20[2] = param_3[0x52];
      local_20[3] = param_3[0x53];
      param_3 = param_3 + 0x50;
    }
    else if (param_5 == 0x43a) {
      local_20[0] = param_3[0x4c];
      local_20[1] = param_3[0x4d];
      local_20[2] = param_3[0x4e];
      local_20[3] = param_3[0x4f];
      param_3 = param_3 + 0x4c;
    }
    else if (param_5 == 0x43b) {
      local_20[0] = param_3[0x54];
      local_20[1] = param_3[0x55];
      local_20[2] = param_3[0x56];
      local_20[3] = param_3[0x57];
      param_3 = param_3 + 0x54;
    }
    iVar1 = FUN_00438480(param_1,param_3,0,&DAT_005588f0,0,0);
    if (-1 < iVar1) {
      GetClientRect(param_2,&local_10);
      InvalidateRect(param_2,&local_10,1);
      UpdateWindow(param_2);
      iVar1 = 4;
      bVar3 = true;
      piVar2 = local_20;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar3 = *piVar2 == *param_3;
        piVar2 = piVar2 + 1;
        param_3 = param_3 + 1;
      } while (bVar3);
      if (!bVar3) {
        lParam = 0;
        Msg = 0x468;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
      }
    }
  }
  return 1;
}


