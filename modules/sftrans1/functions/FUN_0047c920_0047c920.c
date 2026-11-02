/* Module: sftrans1.dll
   Function: FUN_0047c920
   Address: 0047c920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0047c920(int param_1)

{
  uint uVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  HWND hWnd;
  uint uVar3;
  HWND pHVar4;
  int iVar5;
  HWND *ppHVar6;
  int *piStack_154;
  undefined *puStack_150;
  int **ppiStack_14c;
  CHAR local_13c [260];
  undefined4 local_38;
  HWND local_34 [8];
  uint local_14;
  LPCSTR local_10;
  LPCSTR local_c;
  int *local_8;
  
  piStack_154 = (int *)**(int **)(param_1 + 8);
  local_8 = (int *)0x0;
  if (piStack_154 != (int *)0x0) {
    ppiStack_14c = &local_8;
    puStack_150 = &DAT_00555130;
    (**(code **)*piStack_154)();
  }
  puStack_150 = *(undefined **)(param_1 + 0x30);
  ppiStack_14c = (int **)0x0;
  piStack_154 = (int *)0x47c954;
  FUN_004c5a20();
  puStack_150 = *(undefined **)(param_1 + 0x30);
  ppiStack_14c = (int **)0x3e8;
  piStack_154 = local_8;
  (**(code **)(*local_8 + 0x14))();
  hMem = GlobalAlloc(0x40,0x38);
  puVar2 = GlobalLock(hMem);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00485db0();
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &PTR_LAB_005632e0;
    puVar2[4] = 0x641;
  }
  *(undefined4 **)(param_1 + 0x410) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    pHVar4 = *(HWND *)(param_1 + 0x30);
    ppHVar6 = local_34;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppHVar6 = (HWND)0x0;
      ppHVar6 = ppHVar6 + 1;
    }
    local_38 = 6;
    local_34[2] = (HWND)0x65e;
    local_34[1] = pHVar4;
    hWnd = GetDlgItem(pHVar4,0x5b3);
    SendMessageA(hWnd,0x600,0,0);
    GetDlgItemTextA(pHVar4,0x5b3,local_13c,0x82);
    SendMessageA(hWnd,0x601,0xa029,0x555a6c);
    SendMessageA(hWnd,0x601,41000,0x555a74);
    uVar3 = lstrlenA("Sonic Foundry ");
    local_14 = uVar3;
    FUN_00551640();
    local_c = (LPCSTR)&piStack_154;
    FUN_00551640();
    local_10 = (LPCSTR)&piStack_154;
    lstrcpynA(local_c,local_13c,uVar3 + 1);
    local_c[uVar3] = '\0';
    local_c[local_14] = '\0';
    lstrcpynA(local_10,"Sonic Foundry ",uVar3 + 1);
    uVar1 = local_14;
    local_10[uVar3] = '\0';
    local_10[local_14] = '\0';
    iVar5 = lstrcmpiA(local_c,local_10);
    FUN_004c85d0(pHVar4,0x5b3,local_13c + (~-(uint)(iVar5 != 0) & uVar1));
    FUN_0047ce50(&local_38,param_1 + 0x70,param_1);
    FUN_0047c8d0();
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x641);
    SetWindowPos(*(HWND *)(param_1 + 0x30),(HWND)0xfffffffe,0,0,0,0,3);
    SetWindowPos(pHVar4,(HWND)0xfffffffe,0,0,0,0,3);
    FUN_00486140(0);
    SetActiveWindow(*(HWND *)(param_1 + 0x30));
    SetFocus(*(HWND *)(param_1 + 0x30));
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


