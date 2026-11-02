/* Module: vegas30.exe
   Function: FUN_005e5290
   Address: 005e5290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005e5290(int param_1)

{
  HWND pHVar1;
  LPARAM LVar2;
  UINT UVar3;
  WPARAM WVar4;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(HWND *)(param_1 + 0x10) != (HWND)0x0)) {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x434);
    LVar2 = _SfGetString_8(DAT_00647204,0x5638);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x5617);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x5618);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x5619);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x563e);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x563f);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x5640);
    SendMessageA(pHVar1,0x143,0,LVar2);
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x43c);
    LVar2 = _SfGetString_8(DAT_00647204,0x563a);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x563b);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x563c);
    SendMessageA(pHVar1,0x143,0,LVar2);
    LVar2 = _SfGetString_8(DAT_00647204,0x563d);
    SendMessageA(pHVar1,0x143,0,LVar2);
    WVar4 = 0;
    UVar3 = 0x60e;
    LVar2 = DAT_0065b494;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x503);
    SendMessageA(pHVar1,UVar3,WVar4,LVar2);
    WVar4 = 0;
    UVar3 = 0x60f;
    LVar2 = DAT_0065b490;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x503);
    SendMessageA(pHVar1,UVar3,WVar4,LVar2);
    return 1;
  }
  return 0;
}


