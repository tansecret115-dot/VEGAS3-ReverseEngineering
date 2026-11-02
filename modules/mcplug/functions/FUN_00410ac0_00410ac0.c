/* Module: mcplug.dll
   Function: FUN_00410ac0
   Address: 00410ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00410ac0(void *this,HWND param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  void *pvVar6;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  HWND hWnd_02;
  HWND hWnd_03;
  HWND hWnd_04;
  LPSTR pCVar7;
  int iVar8;
  WPARAM wParam;
  HWND local_d0;
  HWND local_b0 [16];
  HWND local_70;
  int local_6c;
  uint local_68;
  HWND local_64;
  HWND local_60;
  HWND local_5c;
  void *local_58;
  uint local_54;
  HWND local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uchar local_40 [64];
  
  iVar8 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar8 == 0) {
    return 0x80070057;
  }
  local_48 = *(uint *)(iVar8 + 0x34);
  local_54 = *(uint *)(iVar8 + 0x38);
  local_44 = *(uint *)(iVar8 + 0x24);
  iVar1 = *(int *)(iVar8 + 0x68);
  iVar2 = *(int *)(iVar8 + 0x28);
  local_4c = *(uint *)(iVar8 + 0x44);
  iVar3 = *(int *)(iVar8 + 0x2c);
  local_68 = *(uint *)(iVar8 + 0x3c);
  iVar4 = *(int *)(iVar8 + 0x60);
  local_6c = *(int *)(iVar8 + 0x5c);
  local_58 = this;
  local_b0[0xf] = GetDlgItem(param_1,0x45d);
  local_64 = GetDlgItem(param_1,0x426);
  local_5c = GetDlgItem(param_1,0x460);
  hWnd = GetDlgItem(param_1,0x428);
  local_b0[0] = GetDlgItem(param_1,0x423);
  local_70 = GetDlgItem(param_1,0x42d);
  hWnd_00 = GetDlgItem(param_1,0x464);
  hWnd_01 = GetDlgItem(param_1,0x424);
  local_60 = GetDlgItem(param_1,0x42c);
  hWnd_02 = GetDlgItem(param_1,0x427);
  hWnd_03 = GetDlgItem(param_1,0x425);
  local_50 = GetDlgItem(param_1,0x46a);
  hWnd_04 = GetDlgItem(param_1,0x46c);
  SendMessageA(hWnd_04,0x14b,0,0);
  pCVar7 = FUN_00419470(DAT_00487a6c,0x17a2);
  SendMessageA(hWnd_04,0x143,0,(LPARAM)pCVar7);
  pCVar7 = FUN_00419470(DAT_00487a6c,0x17a3);
  SendMessageA(hWnd_04,0x143,0,(LPARAM)pCVar7);
  pCVar7 = FUN_00419470(DAT_00487a6c,0x17a4);
  SendMessageA(hWnd_04,0x143,0,(LPARAM)pCVar7);
  if (iVar1 == 0) {
    wParam = 0;
  }
  else if (iVar1 == 1) {
    wParam = 1;
  }
  else {
    if (iVar1 != 2) {
      return 0x80004005;
    }
    wParam = 2;
  }
  SendMessageA(hWnd_04,0x14e,wParam,0);
  SendMessageA(local_50,0xf1,(uint)(local_6c != 0),0);
  FUN_0042f8b0(local_48,local_40,0);
  SetWindowTextA(local_b0[0xf],(LPCSTR)local_40);
  FUN_0042f8b0(local_54,local_40,0);
  SetWindowTextA(local_64,(LPCSTR)local_40);
  FUN_0042f8b0(local_44,local_40,0);
  SetWindowTextA(local_5c,(LPCSTR)local_40);
  FUN_0042f8b0(local_4c,local_40,0);
  SetWindowTextA(local_70,(LPCSTR)local_40);
  FUN_0042f8b0(local_68,local_40,0);
  SetWindowTextA(local_60,(LPCSTR)local_40);
  pvVar6 = local_58;
  if (*(int *)((int)local_58 + 0x28) == 0) {
    *(undefined4 *)((int)local_58 + 0x28) = 1;
    *(undefined4 *)((int)local_58 + 0x34) = 0xb4;
  }
  if (iVar2 != 0) {
    FUN_0042fbb0(local_40,SUB84((double)iVar2,0),(int)((ulonglong)(double)iVar2 >> 0x20),0,1);
    SetWindowTextA(hWnd,(LPCSTR)local_40);
    EnableWindow(hWnd,1);
  }
  else {
    FUN_0042fbb0(local_40,SUB84((double)*(int *)((int)local_58 + 0x34),0),
                 (int)((ulonglong)(double)*(int *)((int)local_58 + 0x34) >> 0x20),0,1);
    SetWindowTextA(hWnd,(LPCSTR)local_40);
    EnableWindow(hWnd,0);
  }
  SendMessageA(local_b0[0],0xf1,(uint)(iVar2 == 0),0);
  if (*(int *)((int)pvVar6 + 0x2c) == 0) {
    *(undefined4 *)((int)pvVar6 + 0x2c) = 1;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0xb4;
  }
  if (iVar3 != 0) {
    FUN_0042fbb0(local_40,SUB84((double)iVar3,0),(int)((ulonglong)(double)iVar3 >> 0x20),0,1);
    SetWindowTextA(hWnd_00,(LPCSTR)local_40);
    EnableWindow(hWnd_00,1);
  }
  else {
    FUN_0042fbb0(local_40,SUB84((double)*(int *)((int)pvVar6 + 0x38),0),
                 (int)((ulonglong)(double)*(int *)((int)pvVar6 + 0x38) >> 0x20),0,1);
    SetWindowTextA(hWnd_00,(LPCSTR)local_40);
    EnableWindow(hWnd_00,0);
  }
  SendMessageA(hWnd_01,0xf1,(uint)(iVar3 == 0),0);
  if (iVar4 == 0) {
    if (*(int *)((int)pvVar6 + 0x30) == 0) {
      local_d0 = (HWND)0x0;
      if (*(int *)(iVar8 + 4) == 1) {
        local_b0[1] = (HWND)0x7d00;
        local_b0[2] = (HWND)0xfa00;
        local_b0[3] = (HWND)0x17700;
        local_b0[4] = (HWND)0x1f400;
        local_b0[5] = (HWND)0x27100;
        local_b0[6] = (HWND)0x2ee00;
        local_b0[7] = (HWND)0x36b00;
        local_b0[8] = (HWND)0x3e800;
        local_b0[9] = (HWND)0x46500;
        local_b0[10] = (HWND)0x4e200;
        local_b0[0xb] = (HWND)0x55f00;
        local_b0[0xc] = (HWND)0x5dc00;
        local_b0[0xd] = (HWND)0x65900;
        local_b0[0xe] = (HWND)0x6d600;
        local_d0 = local_b0[*(int *)(iVar8 + 0xc)];
      }
      else if (*(int *)(iVar8 + 4) == 2) {
        local_b0[1] = (HWND)0x7d00;
        local_b0[2] = (HWND)0xbb80;
        local_b0[3] = (HWND)0xdac0;
        local_b0[4] = (HWND)0xfa00;
        local_b0[5] = (HWND)0x13880;
        local_b0[6] = (HWND)0x17700;
        local_b0[7] = (HWND)0x1b580;
        local_b0[8] = (HWND)0x1f400;
        local_b0[9] = (HWND)0x27100;
        local_b0[10] = (HWND)0x2ee00;
        local_b0[0xb] = (HWND)0x36b00;
        local_b0[0xc] = (HWND)0x3e800;
        local_b0[0xd] = (HWND)0x4e200;
        local_b0[0xe] = (HWND)0x5dc00;
        local_d0 = local_b0[*(int *)(iVar8 + 0xc)];
      }
      *(HWND *)((int)pvVar6 + 0x3c) = local_d0;
      iVar8 = ftol();
      *(int *)((int)pvVar6 + 0x3c) = (int)&local_d0->unused + iVar8;
    }
    FUN_0042fbb0(local_40,SUB84((double)*(int *)((int)pvVar6 + 0x3c),0),
                 (int)((ulonglong)(double)*(int *)((int)pvVar6 + 0x3c) >> 0x20),0,1);
    SetWindowTextA(hWnd_02,(LPCSTR)local_40);
    EnableWindow(hWnd_02,0);
    SendMessageA(hWnd_03,0xf1,1,0);
    return 0;
  }
  dVar5 = (double)(iVar4 * 400);
  FUN_0042fbb0(local_40,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),0,1);
  SetWindowTextA(hWnd_02,(LPCSTR)local_40);
  EnableWindow(hWnd_02,1);
  SendMessageA(hWnd_03,0xf1,0,0);
  return 0;
}


