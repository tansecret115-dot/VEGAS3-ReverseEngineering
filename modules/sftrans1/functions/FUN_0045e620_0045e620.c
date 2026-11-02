/* Module: sftrans1.dll
   Function: FUN_0045e620
   Address: 0045e620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0045e620(int param_1)

{
  HWND hDlg;
  LPSTR lpString1;
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int *piStack_12c;
  undefined *puStack_128;
  int **ppiStack_124;
  CHAR local_114 [260];
  HWND local_10;
  LPSTR local_c;
  int *local_8;
  
  piStack_12c = (int *)**(int **)(param_1 + 8);
  local_8 = (int *)0x0;
  if (piStack_12c != (int *)0x0) {
    ppiStack_124 = &local_8;
    puStack_128 = &DAT_00555130;
    (**(code **)*piStack_12c)();
  }
  puStack_128 = *(undefined **)(param_1 + 0x30);
  ppiStack_124 = (int **)0x3e8;
  piStack_12c = local_8;
  (**(code **)(*local_8 + 0x14))();
  FUN_0045e5b0();
  hDlg = *(HWND *)(param_1 + 0x30);
  local_10 = hDlg;
  hWnd = GetDlgItem(hDlg,0x5b3);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(hDlg,0x5b3,local_114,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x555a6c);
  SendMessageA(hWnd,0x601,41000,0x555a74);
  uVar1 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  FUN_00551640();
  local_c = (LPSTR)&piStack_12c;
  lstrcpynA((LPSTR)&piStack_12c,local_114,uVar1 + 1);
  lpString1 = local_c;
  *(undefined1 *)((int)&piStack_12c + uVar1) = 0;
  *(undefined1 *)((int)&piStack_12c + uVar1) = 0;
  lstrcpynA(lpString1,"Sonic Foundry ",uVar1 + 1);
  local_c[uVar1] = '\0';
  local_c[uVar1] = '\0';
  iVar2 = lstrcmpiA((LPCSTR)&piStack_12c,local_c);
  FUN_004c85d0(local_10,0x5b3,local_114 + (~-(uint)(iVar2 != 0) & uVar1));
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


