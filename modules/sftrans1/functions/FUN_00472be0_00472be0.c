/* Module: sftrans1.dll
   Function: FUN_00472be0
   Address: 00472be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00472be0(int param_1)

{
  uint uVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  HWND hWnd;
  int *piStack_134;
  undefined *puStack_130;
  int **ppiStack_12c;
  CHAR local_11c [260];
  uint local_18;
  LPSTR local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  piStack_134 = (int *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (piStack_134 != (int *)0x0) {
    ppiStack_12c = &local_c;
    puStack_130 = &DAT_00555130;
    (**(code **)*piStack_134)();
  }
  puStack_130 = *(undefined **)(param_1 + 0x30);
  ppiStack_12c = (int **)0x3e8;
  piStack_134 = local_c;
  (**(code **)(*local_c + 0x14))();
  FUN_00472870();
  local_8 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_8,0x5b3);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_8,0x5b3,local_11c,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar2,0x601,41000,0x555a74);
  uVar3 = lstrlenA("Sonic Foundry ");
  local_18 = uVar3;
  FUN_00551640();
  local_10 = (LPSTR)&piStack_134;
  FUN_00551640();
  local_14 = (LPSTR)&piStack_134;
  lstrcpynA(local_10,local_11c,uVar3 + 1);
  local_10[uVar3] = '\0';
  local_10[local_18] = '\0';
  lstrcpynA(local_14,"Sonic Foundry ",uVar3 + 1);
  uVar1 = local_18;
  local_14[uVar3] = '\0';
  local_14[local_18] = '\0';
  iVar4 = lstrcmpiA(local_10,local_14);
  FUN_004c85d0(local_8,0x5b3,local_11c + (~-(uint)(iVar4 != 0) & uVar1));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5af);
  SendMessageA(pHVar2,0x80d,1,0);
  SendMessageA(pHVar2,0x80e,1,0);
  SendMessageA(pHVar2,0x810,1,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b2);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b5);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b0);
  SendMessageA(pHVar2,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,0xffff);
  pHVar2 = local_8;
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,0xffff);
  SendMessageA(hWnd,0x60e,0,0);
  SendMessageA(hWnd,0x60f,0,0xffff);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 0;
}


