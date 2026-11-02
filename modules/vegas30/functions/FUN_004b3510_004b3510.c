/* Module: vegas30.exe
   Function: FUN_004b3510
   Address: 004b3510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b3510(HWND param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0x10;
  pHVar1 = GetDlgItem(param_1,0x45d);
  UVar3 = 0x624;
  pHVar2 = GetDlgItem(param_1,0x46d);
  SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,LVar5);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x46d);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 1000;
  WVar4 = 0;
  UVar3 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x46d);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0x10;
  pHVar1 = GetDlgItem(param_1,0x45e);
  UVar3 = 0x624;
  pHVar2 = GetDlgItem(param_1,0x46e);
  SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,LVar5);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x46e);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 1000;
  WVar4 = 0;
  UVar3 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x46e);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0x28;
  pHVar1 = GetDlgItem(param_1,0x461);
  UVar3 = 0x624;
  pHVar2 = GetDlgItem(param_1,0x46f);
  SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,LVar5);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x46f);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0x7fff;
  WVar4 = 0;
  UVar3 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x46f);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0x28;
  pHVar1 = GetDlgItem(param_1,0x462);
  UVar3 = 0x624;
  pHVar2 = GetDlgItem(param_1,0x470);
  SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,LVar5);
  LVar5 = -0x10;
  WVar4 = 0;
  UVar3 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x470);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0x10;
  WVar4 = 0;
  UVar3 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x470);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  return;
}


