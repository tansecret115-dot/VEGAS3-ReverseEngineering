/* Module: vegas30k.dll
   Function: FUN_0101f490
   Address: 0101f490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0101f490(HWND param_1,undefined4 param_2,uint param_3,int param_4)

{
  SHORT SVar1;
  LONG LVar2;
  int iVar3;
  HWND pHVar4;
  uint uVar5;
  UINT Msg;
  int iVar6;
  LPARAM lParam;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  switch(param_2) {
  case 0x4e:
    iVar6 = *(int *)(param_4 + 8);
    if (iVar6 == -0xcb) {
      *(undefined4 *)(LVar2 + 0x44) = 0;
    }
    else {
      if (iVar6 == -0xca) {
        SetWindowLongA(param_1,0,0);
        return 1;
      }
      if (iVar6 == -200) {
        *(undefined4 *)(LVar2 + 0x54) = *(undefined4 *)(LVar2 + 0x18);
        return 0;
      }
    }
    break;
  case 0x110:
    iVar3 = FUN_0101db90(param_1,param_4);
    *(undefined4 *)(iVar3 + 0x4c) = 1;
    SVar1 = GetAsyncKeyState(0x10);
    uVar5 = (uint)(SVar1 < 0);
    iVar6 = iVar3;
    pHVar4 = GetDlgItem(param_1,0x4a0);
    FUN_0101f280(pHVar4,iVar6,uVar5);
    FUN_0101daf0(param_1);
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    return 0;
  case 0x111:
    if ((param_3 >> 0x10 == 0x300) && (*(int *)(LVar2 + 0x4c) == 0)) {
      lParam = 0;
      Msg = 0x468;
      pHVar4 = GetParent(param_1);
      SendMessageA(pHVar4,Msg,(WPARAM)param_1,lParam);
      *(undefined4 *)(LVar2 + 0x44) = 1;
      return 0;
    }
  }
  return 0;
}


