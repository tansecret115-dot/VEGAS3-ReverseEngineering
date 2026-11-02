/* Module: vidpcore.dll
   Function: FUN_5de99c30
   Address: 5de99c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de99c30(int param_1)

{
  LPARAM LVar1;
  WPARAM wParam;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  int *piStack_130;
  undefined *puStack_12c;
  int **ppiStack_128;
  CHAR local_118 [260];
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  piStack_130 = (int *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (piStack_130 != (int *)0x0) {
    ppiStack_128 = &local_14;
    puStack_12c = &DAT_5df17c60;
    (**(code **)*piStack_130)();
  }
  puStack_12c = (undefined *)(param_1 + 0x4c);
  ppiStack_128 = (int **)0x3c;
  piStack_130 = local_14;
  (**(code **)(*local_14 + 0x34))();
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a8);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,100);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a9);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,100);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5aa);
  SendMessageA(local_8,0x60e,0,1);
  SendMessageA(local_8,0x60f,0,10);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ab);
  SendMessageA(local_8,0x60e,0,1);
  SendMessageA(local_8,0x60f,0,10);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b4);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,100);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a6);
  local_8 = (HWND)0x0;
  do {
    LVar1 = FUN_5deb7ce0(DAT_5df42778,(int)local_8 + 0x4c4);
    wParam = SendMessageA(local_c,0x143,0,LVar1);
    SendMessageA(local_c,0x151,wParam,(LPARAM)local_8);
    local_8 = (HWND)((int)local_8 + 1);
  } while ((int)local_8 < 0xe);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b3);
  LVar1 = FUN_5deb7ce0(DAT_5df42778,0x508);
  SendMessageA(local_c,0x143,0,LVar1);
  LVar1 = FUN_5deb7ce0(DAT_5df42778,0x509);
  SendMessageA(local_c,0x143,0,LVar1);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b0);
  SendMessageA(local_10,0x80d,1,0);
  SendMessageA(local_10,0x80e,1,0);
  local_10 = *(HWND *)(param_1 + 0x30);
  hWnd = GetDlgItem(local_10,0x5b1);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(local_10,0x5b1,local_118,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x5df18d88);
  SendMessageA(hWnd,0x601,41000,0x5df18d90);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&piStack_130;
  FUN_5df157d0();
  local_c = (HWND)&piStack_130;
  lstrcpynA((LPSTR)local_8,local_118,uVar2 + 1);
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  lstrcpynA((LPSTR)local_c,"Sonic Foundry ",uVar2 + 1);
  *(CHAR *)((int)local_c + uVar2) = '\0';
  *(CHAR *)((int)local_c + uVar2) = '\0';
  iVar3 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_c);
  FUN_5deb6b40(local_10,0x5b1,local_118 + (~-(uint)(iVar3 != 0) & uVar2));
  FUN_5de998d0();
  (**(code **)(*local_14 + 0x3c))(local_14,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


