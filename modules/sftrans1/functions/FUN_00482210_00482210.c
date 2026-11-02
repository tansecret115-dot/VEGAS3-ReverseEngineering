/* Module: sftrans1.dll
   Function: FUN_00482210
   Address: 00482210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00482210(int param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  int iVar5;
  LPARAM LVar6;
  UINT UVar7;
  UINT UVar8;
  longlong lVar9;
  WPARAM local_218;
  CHAR local_210 [260];
  CHAR local_10c [264];
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x656);
  WVar2 = SendMessageA(pHVar1,0x147,0,0);
  LVar3 = SendMessageA(pHVar1,0x150,WVar2,0);
  if (LVar3 != *(int *)(*(int *)(param_1 + 0x30) + 0x14)) {
    LVar3 = SendMessageA(pHVar1,0x146,0,0);
    local_218 = 0;
    if (0 < LVar3) {
      do {
        LVar4 = SendMessageA(pHVar1,0x150,local_218,0);
        if (LVar4 == *(int *)(*(int *)(param_1 + 0x30) + 0x14)) {
          SendMessageA(pHVar1,0x14e,local_218,0);
          break;
        }
        local_218 = local_218 + 1;
      } while ((int)local_218 < LVar3);
    }
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x658);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x68));
  GetWindowTextA(pHVar1,local_10c,0x104);
  iVar5 = lstrcmpA(local_210,local_10c);
  if (iVar5 != 0) {
    FUN_004c84a0(pHVar1);
  }
  LVar6 = ftol();
  WVar2 = 1;
  UVar8 = 0x610;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x657);
  SendMessageA(pHVar1,UVar8,WVar2,LVar6);
  UVar8 = *(UINT *)(*(int *)(param_1 + 0x30) + 0x10);
  UVar7 = IsDlgButtonChecked(*(HWND *)(param_1 + 4),0x671);
  if (UVar7 != UVar8) {
    CheckDlgButton(*(HWND *)(param_1 + 4),0x671,UVar8);
  }
  lVar9 = (ulonglong)(*(int *)(param_1 + 0x30) + 0x110) << 0x20;
  UVar8 = 0xa05;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x677);
  SendMessageA(pHVar1,UVar8,(WPARAM)lVar9,(LPARAM)((ulonglong)lVar9 >> 0x20));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x667);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,(double)*(float *)(*(int *)(param_1 + 0x30) + 0x124));
  GetWindowTextA(pHVar1,local_10c,0x104);
  iVar5 = lstrcmpA(local_210,local_10c);
  if (iVar5 != 0) {
    FUN_004c84a0(pHVar1);
  }
  LVar6 = ftol();
  WVar2 = 1;
  UVar8 = 0x610;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x666);
  SendMessageA(pHVar1,UVar8,WVar2,LVar6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x669);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,(double)*(float *)(*(int *)(param_1 + 0x30) + 0x120));
  GetWindowTextA(pHVar1,local_10c,0x104);
  iVar5 = lstrcmpA(local_210,local_10c);
  if (iVar5 != 0) {
    FUN_004c84a0(pHVar1);
  }
  LVar6 = ftol();
  WVar2 = 1;
  UVar8 = 0x610;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x668);
  SendMessageA(pHVar1,UVar8,WVar2,LVar6);
  UVar8 = *(UINT *)(*(int *)(param_1 + 0x30) + 0x104);
  UVar7 = IsDlgButtonChecked(*(HWND *)(param_1 + 4),0x665);
  if (UVar7 != UVar8) {
    CheckDlgButton(*(HWND *)(param_1 + 4),0x665,UVar8);
  }
  lVar9 = (ulonglong)(*(int *)(param_1 + 0x30) + 0xe4) << 0x20;
  UVar8 = 0xa05;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x676);
  SendMessageA(pHVar1,UVar8,(WPARAM)lVar9,(LPARAM)((ulonglong)lVar9 >> 0x20));
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x66c);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,(double)*(float *)(*(int *)(param_1 + 0x30) + 0xf4));
  GetWindowTextA(pHVar1,local_10c,0x104);
  iVar5 = lstrcmpA(local_210,local_10c);
  if (iVar5 != 0) {
    FUN_004c84a0(pHVar1);
  }
  LVar6 = ftol();
  WVar2 = 1;
  UVar8 = 0x610;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x66b);
  SendMessageA(pHVar1,UVar8,WVar2,LVar6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x66e);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,(double)*(float *)(*(int *)(param_1 + 0x30) + 0xdc));
  GetWindowTextA(pHVar1,local_10c,0x104);
  iVar5 = lstrcmpA(local_210,local_10c);
  if (iVar5 != 0) {
    FUN_004c84a0(pHVar1);
  }
  LVar6 = ftol();
  WVar2 = 1;
  UVar8 = 0x610;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x66d);
  SendMessageA(pHVar1,UVar8,WVar2,LVar6);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x670);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,(double)*(float *)(*(int *)(param_1 + 0x30) + 0xe0));
  GetWindowTextA(pHVar1,local_10c,0x104);
  iVar5 = lstrcmpA(local_210,local_10c);
  if (iVar5 != 0) {
    FUN_004c84a0(pHVar1);
  }
  LVar6 = ftol();
  WVar2 = 1;
  UVar8 = 0x610;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x66f);
  SendMessageA(pHVar1,UVar8,WVar2,LVar6);
  UVar8 = *(UINT *)(*(int *)(param_1 + 0x30) + 0xb0);
  UVar7 = IsDlgButtonChecked(*(HWND *)(param_1 + 4),0x66a);
  if (UVar7 != UVar8) {
    CheckDlgButton(*(HWND *)(param_1 + 4),0x66a,UVar8);
  }
  return 1;
}


