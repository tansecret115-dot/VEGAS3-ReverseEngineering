/* Module: vegas30.exe
   Function: FUN_0055f7d0
   Address: 0055f7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055f7d0(HWND param_1,undefined4 param_2)

{
  HWND pHVar1;
  code *pcVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  switch(param_2) {
  case 0x548:
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x547);
    pcVar2 = SendMessageA_exref;
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    break;
  case 0x549:
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x547);
    pcVar2 = SendMessageA_exref;
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x548);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    goto LAB_0055f9ce;
  case 0x54a:
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x547);
    pcVar2 = SendMessageA_exref;
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x548);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x549);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    goto LAB_0055f9e2;
  default:
    LVar5 = 0;
    WVar4 = 1;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x547);
    pcVar2 = SendMessageA_exref;
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    break;
  case 0x54c:
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x547);
    pcVar2 = SendMessageA_exref;
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x548);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x549);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x54a);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    goto LAB_0055f9f6;
  case 0x54d:
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x547);
    pcVar2 = SendMessageA_exref;
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x548);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x549);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x54a);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x54c);
    SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    goto LAB_0055fa0a;
  }
  pHVar1 = GetDlgItem(param_1,0x548);
  (*pcVar2)(pHVar1);
LAB_0055f9ce:
  pHVar1 = GetDlgItem(param_1,0x549);
  (*pcVar2)(pHVar1);
LAB_0055f9e2:
  pHVar1 = GetDlgItem(param_1,0x54a);
  (*pcVar2)(pHVar1);
LAB_0055f9f6:
  pHVar1 = GetDlgItem(param_1,0x54c);
  (*pcVar2)(pHVar1);
LAB_0055fa0a:
  pHVar1 = GetDlgItem(param_1,0x54d);
  (*pcVar2)(pHVar1);
  return;
}


