/* Module: sfppack2.dll
   Function: FUN_5ccddff0
   Address: 5ccddff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccddff0(int param_1)

{
  HWND pHVar1;
  undefined *puVar2;
  WPARAM WVar3;
  LPARAM *pLVar4;
  
  pLVar4 = &DAT_5cd60e94;
  do {
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),pLVar4[-1]);
    if (pHVar1 != (HWND)0x0) {
      SendMessageA(pHVar1,0x60e,0,*pLVar4);
      SendMessageA(pHVar1,0x60f,0,pLVar4[1]);
      SendMessageA(pHVar1,0x611,0,pLVar4[2]);
    }
    pLVar4 = pLVar4 + 4;
  } while ((int)pLVar4 < 0x5cd60ed4);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),0xfa9);
  SendMessageA(pHVar1,0x14b,0,0);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x437);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,0);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x438);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,1);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x439);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,2);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x43a);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,3);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x14),0xfb3);
  SendMessageA(pHVar1,0x14b,0,0);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x43b);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,0);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x43c);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,1);
  puVar2 = FUN_5cd08210(DAT_5cd67a38,0x43d);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)puVar2);
  SendMessageA(pHVar1,0x151,WVar3,2);
  FUN_5ccde1b0(*(HWND *)(param_1 + 0x14),2);
  return 1;
}


