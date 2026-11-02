/* Module: vegas30.exe
   Function: FUN_0055fa40
   Address: 0055fa40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055fa40(HWND param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x547);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 != 0) {
    return 0x547;
  }
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x548);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 != 0) {
    return 0x548;
  }
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x549);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 != 0) {
    return 0x549;
  }
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x54c);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 != 0) {
    return 0x54c;
  }
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x54d);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  return (-(uint)(LVar2 != 0) & 3) + 0x54a;
}


