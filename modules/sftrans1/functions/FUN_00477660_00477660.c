/* Module: sftrans1.dll
   Function: FUN_00477660
   Address: 00477660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00477660(int param_1)

{
  HWND pHVar1;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  int *piStack_130;
  undefined *puStack_12c;
  int **ppiStack_128;
  CHAR local_118 [260];
  HWND local_14;
  HWND local_10;
  int *local_c;
  HWND local_8;
  
  piStack_130 = (int *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (piStack_130 != (int *)0x0) {
    ppiStack_128 = &local_c;
    puStack_12c = &DAT_00554ce0;
    (**(code **)*piStack_130)();
  }
  puStack_12c = *(undefined **)(param_1 + 0x30);
  ppiStack_128 = (int **)0x3e8;
  piStack_130 = local_c;
  (**(code **)(*local_c + 0x3c))();
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5fd);
  local_10 = pHVar1;
  local_14 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5fe);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ff);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(local_10,0x60f,0,10000);
  SendMessageA(local_14,0x60e,0,0);
  SendMessageA(local_14,0x60f,0,10000);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,10000);
  pHVar1 = *(HWND *)(param_1 + 0x30);
  local_10 = pHVar1;
  hWnd = GetDlgItem(pHVar1,0x5b3);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(pHVar1,0x5b3,local_118,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x555a6c);
  SendMessageA(hWnd,0x601,41000,0x555a74);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  FUN_00551640();
  local_8 = (HWND)&piStack_130;
  lstrcpynA((LPSTR)&piStack_130,local_118,uVar2 + 1);
  pHVar1 = local_8;
  *(undefined1 *)((int)&piStack_130 + uVar2) = 0;
  *(undefined1 *)((int)&piStack_130 + uVar2) = 0;
  lstrcpynA((LPSTR)pHVar1,"Sonic Foundry ",uVar2 + 1);
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  iVar3 = lstrcmpiA((LPCSTR)&piStack_130,(LPCSTR)local_8);
  FUN_004c85d0(local_10,0x5b3,local_118 + (~-(uint)(iVar3 != 0) & uVar2));
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


