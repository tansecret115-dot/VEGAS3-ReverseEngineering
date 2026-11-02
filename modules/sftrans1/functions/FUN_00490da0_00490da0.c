/* Module: sftrans1.dll
   Function: FUN_00490da0
   Address: 00490da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00490da0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  int *piStack_154;
  undefined *puStack_150;
  int **ppiStack_14c;
  CHAR local_13c [260];
  undefined4 local_38;
  undefined4 local_34 [8];
  HWND local_14;
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
  ppiStack_14c = (int **)0x3e8;
  piStack_154 = local_8;
  (**(code **)(*local_8 + 0x14))();
  hMem = GlobalAlloc(0x40,0x38);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00485db0();
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_LAB_00563a58;
    puVar1[4] = 0x6ae;
  }
  *(undefined4 **)(param_1 + 0x340) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = local_34;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_34[1] = *(undefined4 *)(param_1 + 0x30);
    local_38 = 6;
    local_34[2] = 0x6b0;
    FUN_00491550(&local_38,param_1 + 0x68,param_1);
    FUN_00490b30();
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6ae);
    SetWindowPos(*(HWND *)(param_1 + 0x30),(HWND)0xfffffffe,0,0,0,0,3);
    SetWindowPos(pHVar2,(HWND)0xfffffffe,0,0,0,0,3);
    FUN_00486140(0);
    FUN_004911f0();
    local_14 = *(HWND *)(param_1 + 0x30);
    pHVar2 = GetDlgItem(local_14,0x5b3);
    SendMessageA(pHVar2,0x600,0,0);
    GetDlgItemTextA(local_14,0x5b3,local_13c,0x82);
    SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
    SendMessageA(pHVar2,0x601,41000,0x555a74);
    uVar3 = lstrlenA("Sonic Foundry ");
    FUN_00551640();
    local_c = (LPCSTR)&piStack_154;
    FUN_00551640();
    local_10 = (LPCSTR)&piStack_154;
    lstrcpynA(local_c,local_13c,uVar3 + 1);
    local_c[uVar3] = '\0';
    local_c[uVar3] = '\0';
    lstrcpynA(local_10,"Sonic Foundry ",uVar3 + 1);
    local_10[uVar3] = '\0';
    local_10[uVar3] = '\0';
    iVar4 = lstrcmpiA(local_c,local_10);
    FUN_004c85d0(local_14,0x5b3,local_13c + (~-(uint)(iVar4 != 0) & uVar3));
    SetActiveWindow(*(HWND *)(param_1 + 0x30));
    SetFocus(*(HWND *)(param_1 + 0x30));
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


