/* Module: qt4plug.dll
   Function: FUN_5f522e70
   Address: 5f522e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f522e70(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  HWND hWnd;
  BYTE *pBVar4;
  WPARAM WVar5;
  undefined2 *puVar6;
  uchar local_50 [80];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7e1);
  SendMessageA(hWnd,0x14b,0,0);
  pBVar4 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1cb);
  FUN_5f52c900(local_50,pBVar4);
  WVar5 = SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
  SendMessageA(hWnd,0x151,WVar5,0);
  if (*(int *)(param_1 + 0x58) == 0) {
    SendMessageA(hWnd,0x14e,WVar5,0);
  }
  pBVar4 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1ca);
  FUN_5f52c900(local_50,pBVar4);
  WVar5 = SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
  SendMessageA(hWnd,0x151,WVar5,-1);
  if (*(int *)(param_1 + 0x58) != 0) {
    SendMessageA(hWnd,0x14e,WVar5,0);
  }
  uVar3 = *(uint *)(param_1 + 0x58);
  SetDlgItemInt(*(HWND *)(param_1 + 0x10),0x7e2,(uint)*(ushort *)(param_1 + 0x58),0);
  SetDlgItemInt(*(HWND *)(param_1 + 0x10),0x7e3,uVar3 >> 0x10,0);
  puVar6 = &DAT_5f596c60;
  do {
    pBVar4 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,*(uint *)(puVar6 + -4));
    FUN_5f52c900(local_50,pBVar4);
    WVar5 = SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
    uVar1 = *puVar6;
    uVar2 = puVar6[-2];
    SendMessageA(hWnd,0x151,WVar5,CONCAT22(uVar1,uVar2));
    if (CONCAT22(uVar1,uVar2) == *(int *)(param_1 + 0x58)) {
      SendMessageA(hWnd,0x14e,WVar5,0);
    }
    puVar6 = puVar6 + 6;
  } while ((int)puVar6 < 0x5f596cc0);
  return;
}


