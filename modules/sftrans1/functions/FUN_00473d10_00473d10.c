/* Module: sftrans1.dll
   Function: FUN_00473d10
   Address: 00473d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00473d10(int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  int *piVar3;
  HWND pHVar4;
  LPARAM LVar5;
  int iVar6;
  LRESULT LVar7;
  uint unaff_EBX;
  int *unaff_ESI;
  UINT Msg;
  WPARAM WVar8;
  float *lParam;
  undefined4 uVar9;
  double dStack_44;
  int *piStack_40;
  CHAR aCStack_3c [12];
  CHAR aCStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  dStack_44 = (double)(ulonglong)unaff_EBX;
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00554cf0,&piStack_40);
    piVar3 = piStack_40;
  }
  pdVar1 = (double *)(param_1 + 0x50);
  (**(code **)(*piVar3 + 0x34))(piVar3,pdVar1,0x118);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x402,(uint)(*(int *)(param_1 + 0x58) != 0));
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f3);
  LVar5 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar5);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44e);
  if (_DAT_00555910 <= *pdVar1) {
    if (*pdVar1 <= _DAT_00555908) {
      dStack_44 = *pdVar1;
    }
    else {
      dStack_44 = 1.0;
    }
  }
  else {
    dStack_44 = 0.0;
  }
  FUN_004d6250(aCStack_3c,uVar9,piStack_40,3,0);
  SendMessageA(pHVar4,0xd,10,(LPARAM)aCStack_30);
  iVar6 = lstrcmpA(aCStack_30,aCStack_3c);
  if (iVar6 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)aCStack_3c);
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f5);
  LVar5 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar5);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44f);
  if (_DAT_00555910 <= *(double *)(param_1 + 0x60)) {
    if (*(double *)(param_1 + 0x60) <= _DAT_00555908) {
      dStack_44 = *(double *)(param_1 + 0x60);
    }
    else {
      dStack_44 = 1.0;
    }
  }
  else {
    dStack_44 = 0.0;
  }
  FUN_004d6250(aCStack_3c,uVar9,piStack_40,3,0);
  SendMessageA(pHVar4,0xd,10,(LPARAM)aCStack_30);
  iVar6 = lstrcmpA(aCStack_30,aCStack_3c);
  if (iVar6 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)aCStack_3c);
  }
  fStack_1c = (float)*(double *)(param_1 + 0x78);
  lParam = &fStack_24;
  fStack_20 = (float)*(double *)(param_1 + 0x70);
  WVar8 = 0;
  fStack_24 = (float)*(double *)(param_1 + 0x68);
  Msg = 0xa05;
  uStack_18 = 0x3f800000;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c8);
  SendMessageA(pHVar4,Msg,WVar8,(LPARAM)lParam);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f7);
  WVar8 = SendMessageA(pHVar4,0x147,0,0);
  LVar7 = SendMessageA(pHVar4,0x150,WVar8,0);
  FUN_00473750(LVar7);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


