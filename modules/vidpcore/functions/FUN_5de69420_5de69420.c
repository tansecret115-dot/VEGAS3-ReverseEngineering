/* Module: vidpcore.dll
   Function: FUN_5de69420
   Address: 5de69420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de69420(int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  LPARAM LVar3;
  HWND pHVar4;
  int iVar5;
  int *unaff_EBX;
  UINT UVar6;
  WPARAM WVar7;
  float *lParam;
  CHAR aCStack_38 [4];
  int *local_34 [2];
  CHAR aCStack_2c [12];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_34[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_5df18100,local_34);
  }
  pdVar1 = (double *)(param_1 + 0x68);
  (**(code **)(*local_34[0] + 0xc))(local_34[0],pdVar1);
  LVar3 = ftol();
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xc9);
  SendMessageA(pHVar4,UVar6,WVar7,LVar3);
  LVar3 = ftol();
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xca);
  SendMessageA(pHVar4,UVar6,WVar7,LVar3);
  LVar3 = ftol();
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcb);
  SendMessageA(pHVar4,UVar6,WVar7,LVar3);
  LVar3 = ftol();
  WVar7 = 1;
  UVar6 = 0x610;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcd);
  SendMessageA(pHVar4,UVar6,WVar7,LVar3);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x567);
  FUN_5dec51a0(aCStack_38,*(undefined4 *)pdVar1,*(undefined4 *)(param_1 + 0x6c),3,0);
  SendMessageA(pHVar4,0xd,10,(LPARAM)aCStack_2c);
  iVar5 = lstrcmpA(aCStack_2c,aCStack_38);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)aCStack_38);
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
  FUN_5dec51a0(aCStack_38,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),3,0);
  SendMessageA(pHVar4,0xd,10,(LPARAM)aCStack_2c);
  iVar5 = lstrcmpA(aCStack_2c,aCStack_38);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)aCStack_38);
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x569);
  FUN_5dec51a0(aCStack_38,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),3,0);
  SendMessageA(pHVar4,0xd,10,(LPARAM)aCStack_2c);
  iVar5 = lstrcmpA(aCStack_2c,aCStack_38);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)aCStack_38);
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56a);
  FUN_5dec51a0(aCStack_38,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),3,0);
  SendMessageA(pHVar4,0xd,10,(LPARAM)aCStack_2c);
  iVar5 = lstrcmpA(aCStack_2c,aCStack_38);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)aCStack_38);
  }
  WVar7 = *(WPARAM *)(param_1 + 0x88);
  LVar3 = 0;
  UVar6 = 0x14e;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcc);
  SendMessageA(pHVar4,UVar6,WVar7,LVar3);
  fStack_18 = (float)*pdVar1;
  lParam = &fStack_20;
  fStack_1c = (float)*(double *)(param_1 + 0x70);
  WVar7 = 0;
  fStack_20 = (float)*(double *)(param_1 + 0x78);
  UVar6 = 0x703;
  fStack_14 = (float)*(double *)(param_1 + 0x80);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd7);
  SendMessageA(pHVar4,UVar6,WVar7,(LPARAM)lParam);
  FUN_5de69f10(*(undefined4 *)(param_1 + 0x88));
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return;
}


