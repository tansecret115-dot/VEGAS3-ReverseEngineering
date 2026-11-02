/* Module: sftrans1.dll
   Function: FUN_00480a30
   Address: 00480a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00480a30(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  int iVar3;
  LPARAM LVar4;
  UINT UVar5;
  HWND hWnd;
  UINT UVar6;
  WPARAM WVar7;
  BOOL BVar8;
  int *local_21c;
  undefined1 auStack_218 [4];
  int iStack_214;
  CHAR local_210 [260];
  CHAR local_10c [264];
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x650);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x88),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x8c));
  GetWindowTextA(pHVar2,local_10c,0x104);
  iVar3 = lstrcmpA(local_210,local_10c);
  if (iVar3 != 0) {
    FUN_004c84a0(pHVar2,local_210);
  }
  LVar4 = ftol();
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x64f);
  SendMessageA(pHVar2,UVar6,WVar7,LVar4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x64e);
  FUN_004c6ae0(local_210,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x90),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x94));
  GetWindowTextA(pHVar2,local_10c,0x104);
  iVar3 = lstrcmpA(local_210,local_10c);
  if (iVar3 != 0) {
    FUN_004c84a0(pHVar2,local_210);
  }
  LVar4 = ftol();
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x64d);
  SendMessageA(pHVar2,UVar6,WVar7,LVar4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x662);
  iVar3 = *(int *)(param_1 + 0x30);
  if ((*(byte *)(iVar3 + 0x160) & 1) != 0) {
    *(undefined4 *)(iVar3 + 0x98) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = 0x3ff00000;
    puVar1 = (undefined4 *)**(int **)(*(int *)(param_1 + 0x34) + 8);
    local_21c = (int *)0x0;
    if ((puVar1 != (undefined4 *)0x0) &&
       ((**(code **)*puVar1)(puVar1,&DAT_00554d00,&local_21c), local_21c != (int *)0x0)) {
      (**(code **)(*local_21c + 0x3c))(local_21c,auStack_218);
      if (0 < iStack_214) {
        *(double *)(*(int *)(param_1 + 0x30) + 0x98) = _DAT_00563300 / (double)iStack_214;
      }
      if (local_21c != (int *)0x0) {
        (**(code **)(*local_21c + 8))(local_21c);
      }
    }
  }
  FUN_004c6ae0(local_210,&DAT_0055e6e4,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x98),
               *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x9c));
  GetWindowTextA(pHVar2,local_10c,0x104);
  iVar3 = lstrcmpA(local_210,local_10c);
  if (iVar3 != 0) {
    FUN_004c84a0(pHVar2,local_210);
  }
  if (*(double *)(*(int *)(param_1 + 0x30) + 0x98) <= _DAT_00555908) {
    LVar4 = ftol();
    pHVar2 = *(HWND *)(param_1 + 4);
  }
  else {
    LVar4 = ftol();
    pHVar2 = *(HWND *)(param_1 + 4);
  }
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar2 = GetDlgItem(pHVar2,0x660);
  SendMessageA(pHVar2,UVar6,WVar7,LVar4);
  UVar6 = *(UINT *)(*(int *)(param_1 + 0x30) + 0xa8);
  UVar5 = IsDlgButtonChecked(*(HWND *)(param_1 + 4),0x653);
  if (UVar5 != UVar6) {
    CheckDlgButton(*(HWND *)(param_1 + 4),0x653,UVar6);
  }
  if (*(int *)(*(int *)(param_1 + 0x30) + 0xa8) == 0) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x663);
    BVar8 = 0;
    hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x664);
    EnableWindow(hWnd,BVar8);
    EnableWindow(pHVar2,0);
    FUN_004c84a0(pHVar2,&DAT_00555654);
  }
  else {
    BVar8 = 1;
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x663);
    EnableWindow(pHVar2,BVar8);
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x664);
    EnableWindow(pHVar2,1);
    SendMessageA(pHVar2,0x610,0,*(LPARAM *)(*(int *)(param_1 + 0x30) + 0xac));
    UVar6 = GetDlgItemInt(*(HWND *)(param_1 + 4),0x663,(BOOL *)&local_21c,1);
    if ((local_21c == (int *)0x0) || (UVar6 != *(UINT *)(*(int *)(param_1 + 0x30) + 0xac))) {
      SetDlgItemInt(*(HWND *)(param_1 + 4),0x663,*(UINT *)(*(int *)(param_1 + 0x30) + 0xac),1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x30) + 400;
  WVar7 = 0;
  UVar6 = 0x703;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x678);
  SendMessageA(pHVar2,UVar6,WVar7,iVar3);
  iVar3 = *(int *)(param_1 + 0x30) + 0x78;
  WVar7 = 0;
  UVar6 = 0x703;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x679);
  SendMessageA(pHVar2,UVar6,WVar7,iVar3);
  return 1;
}


