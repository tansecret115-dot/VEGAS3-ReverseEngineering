/* Module: vidpcore.dll
   Function: FUN_5de93260
   Address: 5de93260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de93260(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HWND pHVar3;
  LPARAM LVar4;
  HWND pHVar5;
  int *unaff_ESI;
  int nIDCheckButton;
  double local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined2 uStack_23c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [272];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_260 = (double)((ulonglong)local_260 & 0xffffffff00000000);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c40,&local_260);
    piVar2 = local_260._0_4_;
  }
  (**(code **)(*piVar2 + 0x34))(piVar2,param_1 + 0x4c,0x24);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x550);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x552);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x554);
  SendMessageA(pHVar3,0x703,0,param_1 + 0x5c);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x563);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x54));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x567);
  FUN_5deb6a10(pHVar5);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x58));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
  FUN_5deb6a10(pHVar5);
  if (*(int *)(param_1 + 0x6c) == 0) {
    pHVar5 = *(HWND *)(param_1 + 0x30);
    nIDCheckButton = 0x596;
  }
  else {
    pHVar5 = *(HWND *)(param_1 + 0x30);
    nIDCheckButton = 0x597;
  }
  CheckRadioButton(pHVar5,0x596,0x597,nIDCheckButton);
  uStack_254 = 1;
  uStack_118 = 1;
  local_260 = (double)*(float *)(param_1 + 0x50);
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_258 = 2;
  uStack_250 = 0xffffffff;
  uStack_24c = 0x3f800000;
  uStack_23c = 0;
  uStack_138 = 0;
  uStack_134 = 0xffffff;
  uStack_130 = 0;
  uStack_12c = 0x3f800000;
  uStack_11c = 0;
  uStack_114 = 0;
  uStack_248 = 0x3ecccccd;
  uStack_244 = 0x3ecccccd;
  uStack_240 = 0x3f800000;
  SendMessageA(pHVar3,0x804,0,(LPARAM)&stack0xfffffd98);
  SendMessageA(pHVar3,0x80f,0,0);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


