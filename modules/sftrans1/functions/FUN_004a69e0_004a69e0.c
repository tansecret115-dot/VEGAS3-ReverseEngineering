/* Module: sftrans1.dll
   Function: FUN_004a69e0
   Address: 004a69e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_004a69e0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  byte bVar3;
  HWND pHVar4;
  int iVar5;
  LPARAM lParam;
  UINT UVar6;
  int unaff_EBP;
  int *local_180 [2];
  CHAR aCStack_178 [12];
  HWND pHStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_180[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,local_180);
  }
  (**(code **)(*local_180[0] + 0xc))(local_180[0],param_1 + 0x68);
  GetDlgItem(*(HWND *)(param_1 + 0x30),0x6d9);
  pHStack_16c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6db);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6dc);
  uStack_168 = *(undefined4 *)(param_1 + 0x78);
  uStack_154 = 1;
  uStack_18 = 1;
  uStack_164 = *(undefined4 *)(param_1 + 0x7c);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_160 = *(undefined4 *)(param_1 + 0x80);
  uStack_15c = *(undefined4 *)(param_1 + 0x84);
  uStack_13c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_14 = 0;
  uStack_158 = 2;
  uStack_150 = 0xffffffff;
  uStack_14c = 0x3f800000;
  uStack_148 = 0x3f000000;
  uStack_144 = 0x3f000000;
  uStack_140 = 0;
  uStack_34 = 0xffffff;
  uStack_2c = 0x3f800000;
  SendMessageA(pHVar4,0x804,0,(LPARAM)&uStack_168);
  SendMessageA(pHVar4,0x80f,0,0);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd0);
  FUN_004d6250(&stack0xfffffe7c,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),3,0)
  ;
  SendMessageA(pHVar4,0xd,6,(LPARAM)aCStack_178);
  iVar5 = lstrcmpA(aCStack_178,&stack0xfffffe7c);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)&stack0xfffffe7c);
  }
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xd1);
  FUN_004d6250(&stack0xfffffe7c,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),3,0)
  ;
  SendMessageA(pHVar4,0xd,6,(LPARAM)aCStack_178);
  iVar5 = lstrcmpA(aCStack_178,&stack0xfffffe7c);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)&stack0xfffffe7c);
  }
  lParam = ftol();
  SendMessageA(pHStack_16c,0x610,1,lParam);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xcf);
  FUN_004d6250(&stack0xfffffe7c,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),4,0)
  ;
  SendMessageA(pHVar4,0xd,6,(LPARAM)aCStack_178);
  iVar5 = lstrcmpA(aCStack_178,&stack0xfffffe7c);
  if (iVar5 != 0) {
    SendMessageA(pHVar4,0xc,0,(LPARAM)&stack0xfffffe7c);
  }
  UVar6 = IsDlgButtonChecked(*(HWND *)(param_1 + 0x30),0xc9);
  if ((UVar6 == 1) && (bVar2 = true, *(int *)(param_1 + 0x68) == 1)) {
LAB_004a6c67:
    CheckDlgButton(*(HWND *)(param_1 + 0x30),0xc9,(uint)!bVar2);
  }
  else {
    UVar6 = IsDlgButtonChecked(*(HWND *)(param_1 + 0x30),0xc9);
    if ((UVar6 == 0) && (bVar2 = false, *(int *)(param_1 + 0x68) == 0)) goto LAB_004a6c67;
  }
  UVar6 = IsDlgButtonChecked(*(HWND *)(param_1 + 0x30),0xcb);
  if ((UVar6 != 1) || (bVar3 = 0, *(int *)(param_1 + 0x68) != 0)) {
    UVar6 = IsDlgButtonChecked(*(HWND *)(param_1 + 0x30),0xcb);
    if ((UVar6 != 0) || (bVar3 = 1, *(int *)(param_1 + 0x68) != 1)) goto LAB_004a6cbb;
  }
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0xcb,(uint)bVar3);
LAB_004a6cbb:
  if (&stack0x00000000 != &DAT_00000004) {
    (**(code **)(unaff_EBP + 8))(&stack0xfffffffc);
  }
  return;
}


