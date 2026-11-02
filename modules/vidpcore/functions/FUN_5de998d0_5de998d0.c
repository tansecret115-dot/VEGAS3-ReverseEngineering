/* Module: vidpcore.dll
   Function: FUN_5de998d0
   Address: 5de998d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de998d0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  LPARAM LVar4;
  int *unaff_ESI;
  int *local_16c;
  undefined4 uStack_168;
  double dStack_164;
  double dStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined2 uStack_138;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_16c = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_5df17c60,&local_16c);
  }
  pfVar1 = (float *)(param_1 + 0x4c);
  (**(code **)(*local_16c + 0x34))(local_16c,pfVar1,0x3c);
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x5a4,"%1.3f",(double)*pfVar1);
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x5a5,"%1.3f",(double)*(float *)(param_1 + 0x50));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b0);
  dStack_164 = (double)*pfVar1;
  uStack_150 = 1;
  uStack_14 = 1;
  dStack_15c = (double)*(float *)(param_1 + 0x50);
  uStack_30 = 0xffffff;
  uStack_2c = 0xffffff;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_154 = 2;
  uStack_14c = 0xffffffff;
  uStack_148 = 0x3f800000;
  uStack_144 = 0x3f000000;
  uStack_140 = 0x3f000000;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_34 = 0;
  uStack_28 = 0x3f800000;
  uStack_18 = 0;
  uStack_10 = 0;
  SendMessageA(pHVar3,0x804,0,(LPARAM)&dStack_164);
  SendMessageA(pHVar3,0x80f,0,0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a8);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a9);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5aa);
  SendMessageA(pHVar3,0x610,1,*(LPARAM *)(param_1 + 0x70));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5ab);
  SendMessageA(pHVar3,0x610,1,*(LPARAM *)(param_1 + 0x74));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b4);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x5ac,"%1.2f",(double)*(float *)(param_1 + 0x54));
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x5ad,"%1.2f",(double)*(float *)(param_1 + 0x58));
  SetDlgItemInt(*(HWND *)(param_1 + 0x30),0x5ae,*(UINT *)(param_1 + 0x70),1);
  SetDlgItemInt(*(HWND *)(param_1 + 0x30),0x5af,*(UINT *)(param_1 + 0x74),1);
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x5b5,"%1.3f",(double)*(float *)(param_1 + 0x84));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a6);
  SendMessageA(pHVar3,0x14e,*(WPARAM *)(param_1 + 0x78),0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b3);
  SendMessageA(pHVar3,0x14e,(uint)(*(int *)(param_1 + 0x80) == 0),0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b6);
  local_16c = *(int **)(param_1 + 0x68);
  uStack_168 = *(undefined4 *)(param_1 + 0x6c);
  SendMessageA(pHVar3,0x703,0,(LPARAM)&stack0xfffffe8c);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


