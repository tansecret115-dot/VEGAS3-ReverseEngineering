/* Module: vegas30.exe
   Function: FUN_005d6f80
   Address: 005d6f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d6f80(HWND param_1,HWND param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  HWND hWnd;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  UINT Msg;
  LPARAM lParam;
  int local_20 [4];
  tagRECT local_10;
  
  if (param_4 == 6) {
    uVar1 = SendMessageA(param_1,0x400,0,0);
    if ((uVar1 >> 0x10 == 0x534b) && ((short)uVar1 != 0x439)) {
      DAT_00646c08 = uVar1 & 0xffff;
    }
    SendMessageA(param_1,0x401,0x439,0);
  }
  else {
    if (param_4 == 7) {
      SendMessageA(param_1,0x401,DAT_00646c08,0);
      return 1;
    }
    if (param_4 == 0) {
      piVar4 = (int *)(param_3 + 0xdb0);
      local_20[0] = *piVar4;
      local_20[1] = *(undefined4 *)(param_3 + 0xdb4);
      local_20[2] = *(undefined4 *)(param_3 + 0xdb8);
      local_20[3] = *(undefined4 *)(param_3 + 0xdbc);
      iVar2 = FUN_00438480(param_1,piVar4,0,&DAT_005d70d0,0x69b6,0);
      if (-1 < iVar2) {
        GetClientRect(param_2,&local_10);
        InvalidateRect(param_2,&local_10,1);
        UpdateWindow(param_2);
        iVar2 = 4;
        bVar5 = true;
        piVar3 = local_20;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          if (*(int *)(param_3 + 0xd30) == 0) {
            lParam = 0;
            Msg = 0x468;
            hWnd = GetParent(param_1);
            SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
          }
          *(undefined4 *)(param_3 + 0xd4c) = 1;
          return 1;
        }
      }
    }
  }
  return 1;
}


