/* Module: vidpcore.dll
   Function: FUN_5de71ba0
   Address: 5de71ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de71ba0(int param_1)

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
    (**(code **)*puVar2)(puVar2,&DAT_5df17b20,&local_16c);
  }
  pfVar1 = (float *)(param_1 + 0x4c);
  (**(code **)(*local_16c + 0x34))(local_16c,pfVar1,0x38);
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x40a,"%1.3f",(double)*pfVar1);
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x40b,"%1.3f",(double)*(float *)(param_1 + 0x50));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x40f);
  dStack_164 = (double)*pfVar1;
  uStack_150 = 1;
  dStack_15c = (double)*(float *)(param_1 + 0x50);
  uStack_14 = 1;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_154 = 2;
  uStack_14c = 0xffffffff;
  uStack_148 = 0x3f800000;
  uStack_138 = 0;
  uStack_34 = 0;
  uStack_30 = 0xffffff;
  uStack_2c = 0;
  uStack_28 = 0x3f800000;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_144 = 0x3ecccccd;
  uStack_140 = 0x3ecccccd;
  uStack_13c = 0x3f800000;
  SendMessageA(pHVar3,0x804,0,(LPARAM)&dStack_164);
  SendMessageA(pHVar3,0x80f,0,0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x414);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x418);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x412);
  SendMessageA(pHVar3,0x610,1,*(LPARAM *)(param_1 + 0x70));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x413);
  SendMessageA(pHVar3,0x610,1,*(LPARAM *)(param_1 + 0x74));
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x40e,"%1.2f",(double)*(float *)(param_1 + 0x54));
  FUN_5deb6b40(*(undefined4 *)(param_1 + 0x30),0x409,"%1.2f",(double)*(float *)(param_1 + 0x58));
  SetDlgItemInt(*(HWND *)(param_1 + 0x30),0x40c,*(UINT *)(param_1 + 0x70),1);
  SetDlgItemInt(*(HWND *)(param_1 + 0x30),0x40d,*(UINT *)(param_1 + 0x74),1);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x416);
  SendMessageA(pHVar3,0x14e,*(WPARAM *)(param_1 + 0x78),0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x566);
  SendMessageA(pHVar3,0x14e,(uint)(*(int *)(param_1 + 0x80) == 0),0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x417);
  local_16c = *(int **)(param_1 + 0x68);
  uStack_168 = *(undefined4 *)(param_1 + 0x6c);
  SendMessageA(pHVar3,0x703,0,(LPARAM)&stack0xfffffe8c);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


