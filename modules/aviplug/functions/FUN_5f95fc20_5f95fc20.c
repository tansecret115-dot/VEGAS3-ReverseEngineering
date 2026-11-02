/* Module: aviplug.dll
   Function: FUN_5f95fc20
   Address: 5f95fc20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95fc20(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  HWND hWnd;
  BYTE *pBVar4;
  WPARAM WVar5;
  undefined **ppuVar6;
  uchar local_50 [80];
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7e1);
  SendMessageA(hWnd,0x14b,0,0);
  pBVar4 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,0x50);
  FUN_5f988570(local_50,pBVar4);
  WVar5 = SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
  SendMessageA(hWnd,0x151,WVar5,0);
  if (*(int *)(param_1 + 0xf8) == 0) {
    SendMessageA(hWnd,0x14e,WVar5,0);
  }
  pBVar4 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,0x51);
  FUN_5f988570(local_50,pBVar4);
  WVar5 = SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
  SendMessageA(hWnd,0x151,WVar5,-1);
  if (*(int *)(param_1 + 0xf8) != 0) {
    SendMessageA(hWnd,0x14e,WVar5,0);
  }
  uVar3 = *(uint *)(param_1 + 0xf8);
  SetDlgItemInt(*(HWND *)(param_1 + 0x10),0x7e2,(uint)*(ushort *)(param_1 + 0xf8),0);
  SetDlgItemInt(*(HWND *)(param_1 + 0x10),0x7e3,uVar3 >> 0x10,0);
  ppuVar6 = (undefined **)&DAT_5f9d9318;
  do {
    pBVar4 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,(uint)ppuVar6[-2]);
    FUN_5f988570(local_50,pBVar4);
    WVar5 = SendMessageA(hWnd,0x143,0,(LPARAM)local_50);
    uVar1 = *(undefined2 *)ppuVar6;
    uVar2 = *(undefined2 *)(ppuVar6 + -1);
    SendMessageA(hWnd,0x151,WVar5,CONCAT22(uVar1,uVar2));
    if (CONCAT22(uVar1,uVar2) == *(int *)(param_1 + 0xf8)) {
      SendMessageA(hWnd,0x14e,WVar5,0);
    }
    ppuVar6 = ppuVar6 + 3;
  } while (ppuVar6 < &PTR_DAT_5f9d9378);
  return;
}


