/* Module: vidpcore.dll
   Function: FUN_5de8d2f0
   Address: 5de8d2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de8d2f0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  WPARAM WVar5;
  CHAR local_22c [260];
  CHAR local_128 [259];
  undefined1 local_25;
  HWND local_24;
  int *local_20;
  HWND local_1c;
  HWND local_18;
  HWND local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_20 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c20,&local_20);
  }
  local_24 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x518);
  local_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x496);
  local_14 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x495);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x519);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x51b);
  GetDlgItem(*(HWND *)(param_1 + 0x30),0x51a);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x521);
  local_1c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x520);
  FUN_5deb3f90(*(undefined4 *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x592);
  uVar3 = SendMessageA(local_8,0x43b,0,0);
  SendMessageA(local_8,0x445,0,uVar3 | 2);
  SendMessageA(local_8,0xc,0,0);
  SendMessageA(local_8,0x459,1,0);
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,2000);
  SendMessageA(local_1c,0x60e,0,0);
  SendMessageA(local_1c,0x60f,0,2000);
  SendMessageA(local_10,0x60e,0,4);
  SendMessageA(local_10,0x60f,0,800);
  iVar4 = FUN_5ded6140(param_1 + 0xd0,0x3c,0xffffffff,0xffffffff,0x40000004,0,0,0);
  if (-1 < iVar4) {
    local_10 = (HWND)GetDC(local_8);
    EnumFontFamiliesA((HDC)local_10,(LPCSTR)0x0,FUN_5de8d2b0,param_1 + 0xd0);
    ReleaseDC(*(HWND *)(param_1 + 0x30),(HDC)local_10);
    local_8 = (HWND)0x0;
    local_c = (HWND)**(int **)(param_1 + 0xd0);
    if (0 < (int)local_c) {
      do {
        lstrcpynA(local_128,
                  (LPCSTR)(*(int *)(*(int *)(param_1 + 0xd0) + 4) * (int)local_8 + 0x1c +
                          *(int *)(*(int *)(param_1 + 0xd0) + 8)),0x104);
        local_25 = 0;
        SendMessageA(local_24,0x143,0,(LPARAM)local_128);
        local_8 = (HWND)((int)local_8 + 1);
      } while ((int)local_8 < (int)local_c);
    }
    local_8 = (HWND)0x0;
    if (0 < (int)local_c) {
      do {
        lstrcpynA(local_128,
                  (LPCSTR)(*(int *)(*(int *)(param_1 + 0xd0) + 4) * (int)local_8 + 0x1c +
                          *(int *)(*(int *)(param_1 + 0xd0) + 8)),0x104);
        local_25 = 0;
        WVar5 = SendMessageA(local_24,0x14c,0xffffffff,(LPARAM)local_128);
        if (WVar5 != 0xffffffff) {
          SendMessageA(local_24,0x151,WVar5,(LPARAM)local_8);
        }
        local_8 = (HWND)((int)local_8 + 1);
      } while ((int)local_8 < (int)local_c);
    }
    WVar5 = SendMessageA(local_18,0x143,0,0x5df2bd1c);
    SendMessageA(local_18,0x151,WVar5,0);
    WVar5 = SendMessageA(local_18,0x143,0,0x5df2bd14);
    SendMessageA(local_18,0x151,WVar5,1);
    WVar5 = SendMessageA(local_18,0x143,0,0x5df2bd0c);
    SendMessageA(local_18,0x151,WVar5,2);
    WVar5 = SendMessageA(local_14,0x143,0,0x5df2bd04);
    SendMessageA(local_14,0x151,WVar5,0);
    WVar5 = SendMessageA(local_14,0x143,0,0x5df2bd14);
    SendMessageA(local_14,0x151,WVar5,1);
    WVar5 = SendMessageA(local_14,0x143,0,0x5df2bcfc);
    SendMessageA(local_14,0x151,WVar5,2);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x5df2bcf4);
    SendMessageA(pHVar2,0x151,WVar5,0);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x5df2bcec);
    SendMessageA(pHVar2,0x151,WVar5,1);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x5df2bce4);
    SendMessageA(pHVar2,0x151,WVar5,2);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x5df2bcd8);
    SendMessageA(pHVar2,0x151,WVar5,3);
    local_1c = *(HWND *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0xd4) = 1;
    pHVar2 = GetDlgItem(local_1c,0x5b1);
    SendMessageA(pHVar2,0x600,0,0);
    GetDlgItemTextA(local_1c,0x5b1,local_22c,0x82);
    SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
    SendMessageA(pHVar2,0x601,41000,0x5df18d90);
    uVar3 = lstrlenA("Sonic Foundry ");
    FUN_5df157d0();
    local_c = (HWND)&stack0xfffffdc8;
    FUN_5df157d0();
    local_10 = (HWND)&stack0xfffffdc8;
    lstrcpynA((LPSTR)local_c,local_22c,uVar3 + 1);
    *(CHAR *)((int)local_c + uVar3) = '\0';
    *(CHAR *)((int)local_c + uVar3) = '\0';
    lstrcpynA((LPSTR)local_10,"Sonic Foundry ",uVar3 + 1);
    *(CHAR *)((int)local_10 + uVar3) = '\0';
    *(CHAR *)((int)local_10 + uVar3) = '\0';
    iVar4 = lstrcmpiA((LPCSTR)local_c,(LPCSTR)local_10);
    FUN_5deb6b40(local_1c,0x5b1,local_22c + (~-(uint)(iVar4 != 0) & uVar3));
    FUN_5de8d860();
    (**(code **)(*local_20 + 0x28))(local_20,*(undefined4 *)(param_1 + 0x30),0x7f00);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
    return 1;
  }
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  return 0;
}


