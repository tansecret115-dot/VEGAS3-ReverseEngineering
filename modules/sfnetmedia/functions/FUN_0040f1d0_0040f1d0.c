/* Module: sfnetmedia.dll
   Function: FUN_0040f1d0
   Address: 0040f1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f1d0(int param_1)

{
  SHORT SVar1;
  HWND pHVar2;
  LRESULT LVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    SVar1 = GetKeyState(0x10);
    if (SVar1 < 0) goto LAB_0040f204;
  }
  uVar6 = 0;
  uVar5 = 0x3f1;
  uVar4 = FUN_00401310();
  uVar4 = FUN_0041a170(uVar4,uVar5,uVar6);
LAB_0040f204:
  FUN_0041c3e0(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fe);
  ShowWindow(pHVar2,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1ff);
  ShowWindow(pHVar2,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x200);
  SendMessageA(pHVar2,0xf1,uVar4,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fa);
  LVar3 = SendMessageA(pHVar2,0x464,0,0x67);
  if (LVar3 != 0) {
    SendMessageA(pHVar2,0x465,0xffffffff,-0x10000);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xda0) = *(undefined4 *)(param_1 + 4);
  PostMessageA(*(HWND *)(param_1 + 4),0xf90,0,0);
  return 0;
}


