/* Module: sftrans1.dll
   Function: FUN_004976d0
   Address: 004976d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004976d0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  HWND pHVar3;
  LPARAM lParam;
  int *unaff_EBP;
  UINT UVar4;
  WPARAM wParam;
  CHAR *pCVar6;
  longlong lVar5;
  double local_264;
  double dStack_25c;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined2 uStack_238;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  CHAR aCStack_10c [268];
  
  local_264 = (double)((ulonglong)local_264 & 0xffffffff00000000);
  piVar2 = (int *)0x0;
  if ((undefined4 *)**(int **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(param_1 + 8))();
    piVar2 = local_264._0_4_;
  }
  pfVar1 = (float *)(param_1 + 0x68);
  (**(code **)(*piVar2 + 0xc))(piVar2,pfVar1);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1623);
  local_264 = (double)*pfVar1;
  uStack_250 = 1;
  uStack_114 = 1;
  dStack_25c = (double)*(float *)(param_1 + 0x6c);
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_238 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_110 = 0;
  uStack_254 = 2;
  uStack_24c = 0xffffffff;
  uStack_248 = 0x3f800000;
  uStack_244 = 0x3f000000;
  uStack_240 = 0x3f000000;
  uStack_23c = 0;
  uStack_130 = 0xffffff;
  uStack_128 = 0x3f800000;
  uStack_118 = 0;
  SendMessageA(pHVar3,0x804,0,(LPARAM)&local_264);
  SendMessageA(pHVar3,0x80f,0,0);
  lParam = ftol();
  wParam = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1624);
  SendMessageA(pHVar3,UVar4,wParam,lParam);
  FUN_004c6ae0(aCStack_10c,&DAT_0055e6e4,(double)(*(float *)(param_1 + 0x70) * (float)_DAT_00560ef8)
              );
  pCVar6 = aCStack_10c;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1620);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(aCStack_10c,&DAT_0055e6e4,(double)*pfVar1);
  pCVar6 = aCStack_10c;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1621);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(aCStack_10c,&DAT_0055e6e4,(double)*(float *)(param_1 + 0x6c));
  pCVar6 = aCStack_10c;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1622);
  SetWindowTextA(pHVar3,pCVar6);
  lVar5 = (ulonglong)(param_1 + 0x74) << 0x20;
  UVar4 = 0x703;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1625);
  SendMessageA(pHVar3,UVar4,(WPARAM)lVar5,(LPARAM)((ulonglong)lVar5 >> 0x20));
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return;
}


