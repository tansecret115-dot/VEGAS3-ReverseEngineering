/* Module: vegas30k.dll
   Function: FUN_0113a760
   Address: 0113a760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113a760(HWND param_1,HWND param_2)

{
  LPCWSTR lpWideCharStr;
  WPARAM WVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  tagRECT *lpRect;
  int local_158;
  tagPOINT local_154;
  HWND local_14c;
  tagRECT local_148;
  int local_138 [3];
  CHAR *local_12c;
  int *local_120;
  undefined4 local_11c [6];
  int *local_104;
  CHAR local_100 [255];
  undefined1 local_1;
  
  WVar1 = SendMessageA(param_2,0x130b,0,0);
  puVar5 = local_11c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_11c[0] = 8;
  SendMessageA(param_2,0x1305,WVar1,(LPARAM)local_11c);
  if (local_104 != (int *)0x0) {
    GetWindowRect(param_2,&local_148);
    SendMessageA(param_2,0x1328,0,(LPARAM)&local_148);
    local_154.y = local_148.top;
    local_154.x = local_148.left;
    if (local_104[1] < 2) {
      iVar3 = *local_104 + local_104[2] * 0x44;
      iVar4 = FUN_0113a650(param_1,iVar3);
      if (iVar4 == 0) {
        return 1;
      }
      lpRect = &local_148;
      pHVar2 = GetDlgItem(param_1,0x438);
      GetWindowRect(pHVar2,lpRect);
      local_154.x = local_148.left;
      local_154.y = local_148.top;
      ScreenToClient(param_1,&local_154);
      local_138[0] = local_154.x;
      local_138[1] = local_154.y;
      local_138[2] = *(int *)(iVar3 + 8) + local_154.x;
      local_12c = (CHAR *)(*(int *)(iVar3 + 0xc) + local_154.y);
      (**(code **)(**(int **)(iVar3 + 0x24) + 0x10))(*(int **)(iVar3 + 0x24),param_1,local_138,1);
      *(undefined4 *)(iVar3 + 0x38) = 1;
      (**(code **)(**(int **)(iVar3 + 0x24) + 0x20))(*(int **)(iVar3 + 0x24),5);
    }
    else {
      local_14c = GetDlgItem(param_2,0x436);
      WVar1 = 0;
      if (0 < local_104[1]) {
        local_158 = 0;
        do {
          iVar3 = *local_104;
          piVar6 = local_138;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          local_138[0] = 9;
          lpWideCharStr = *(LPCWSTR *)(iVar3 + 4 + local_158);
          if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
            WideCharToMultiByte(0,0,lpWideCharStr,-1,local_100,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x100) {
            local_100[0] = '\0';
          }
          local_12c = local_100;
          local_1 = 0;
          local_120 = local_104;
          SendMessageA(local_14c,0x1307,WVar1,(LPARAM)local_138);
          WVar1 = WVar1 + 1;
          local_158 = local_158 + 0x44;
        } while ((int)WVar1 < local_104[1]);
      }
      pHVar2 = local_14c;
      ShowWindow(local_14c,5);
      SendMessageA(pHVar2,0x130c,0,0);
      FUN_0113aa40(param_1,pHVar2);
    }
  }
  FUN_0113a320(param_1);
  return 0;
}


