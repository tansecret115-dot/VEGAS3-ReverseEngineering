/* Module: qt4plug.dll
   Function: FUN_5f521510
   Address: 5f521510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f521510(int param_1)

{
  HWND pHVar1;
  LPARAM lParam;
  WPARAM WVar2;
  LPSTR lParam_00;
  int iVar3;
  undefined8 *puVar4;
  LPARAM *pLVar5;
  uchar auStack_20 [32];
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3e9);
  FUN_5f580a00();
  iVar3 = 0;
  if (0 < *DAT_5f5a3ed4) {
    do {
      lParam = FUN_5f57fcb0();
      WVar2 = SendMessageA(pHVar1,0x143,0,lParam);
      SendMessageA(pHVar1,0x151,WVar2,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *DAT_5f5a3ed4);
  }
  SendMessageA(pHVar1,0x14e,0,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x437);
  iVar3 = 0;
  puVar4 = &DAT_5f5a2ae8;
  do {
    FUN_5f52c900(auStack_20,"%.3f");
    WVar2 = SendMessageA(pHVar1,0x143,0,(LPARAM)auStack_20);
    SendMessageA(pHVar1,0x151,WVar2,iVar3);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)puVar4 < 0x5f5a2b10);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x436);
  pLVar5 = &DAT_5f596ba4;
  do {
    lParam_00 = FUN_5f527a90(DAT_5f5a4158,pLVar5[-1]);
    WVar2 = SendMessageA(pHVar1,0x143,0,(LPARAM)lParam_00);
    SendMessageA(pHVar1,0x151,WVar2,*pLVar5);
    pLVar5 = pLVar5 + 2;
  } while ((int)pLVar5 < 0x5f596bbc);
  return 1;
}


