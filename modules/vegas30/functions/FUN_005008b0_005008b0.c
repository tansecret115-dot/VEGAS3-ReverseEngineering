/* Module: vegas30.exe
   Function: FUN_005008b0
   Address: 005008b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005008b0(HWND param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 9;
  pHVar1 = GetDlgItem(param_1,0x469);
  UVar3 = 0x624;
  pHVar2 = GetDlgItem(param_1,0x440);
  SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,LVar5);
  LVar5 = 1;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x440);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  WVar4 = 0;
  UVar3 = 0x60f;
  LVar5 = DAT_00649430;
  pHVar1 = GetDlgItem(param_1,0x440);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0xf;
  pHVar1 = GetDlgItem(param_1,0x46a);
  UVar3 = 0x624;
  pHVar2 = GetDlgItem(param_1,0x441);
  SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,LVar5);
  LVar5 = 1;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x441);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 100;
  WVar4 = 0;
  UVar3 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x441);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  return;
}


