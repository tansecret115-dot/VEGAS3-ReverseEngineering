/* Module: aviplug.dll
   Function: FUN_5f960230
   Address: 5f960230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f960230(void *this,BOOL param_1)

{
  HWND hWnd;
  BYTE *pBVar1;
  WPARAM WVar2;
  int iVar3;
  uint *puVar4;
  int local_90;
  uchar local_88 [132];
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e6);
  SendMessageA(hWnd,0x14b,0,0);
  iVar3 = *(int *)(*(int *)((int)this + 0x98) + 4);
  if ((iVar3 == 0x6e76645f) || (iVar3 == 0x6e766477)) {
    pBVar1 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,0x21);
    FUN_5f988570(local_88,pBVar1);
    WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_88);
    SendMessageA(hWnd,0x14e,WVar2,0);
    *(undefined4 *)((int)this + 0xf0) = 0xe2556b28;
    *(undefined4 *)((int)this + 0xf4) = 0x403df853;
    iVar3 = FUN_5f95e5a0(29.97002997002997);
  }
  else {
    if ((iVar3 != 0x7076645f) && (iVar3 != 0x70766477)) {
      EnableWindow(hWnd,param_1);
      local_90 = 0;
      puVar4 = &DAT_5f9d9290;
      do {
        pBVar1 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,*puVar4);
        FUN_5f988570(local_88,pBVar1);
        WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_88);
        local_90 = local_90 + 1;
        SendMessageA(hWnd,0x151,WVar2,local_90);
        puVar4 = puVar4 + 4;
      } while (puVar4 < &DAT_5f9d9310);
      WVar2 = FUN_5f95e5a0(*(double *)((int)this + 0xf0));
      if (WVar2 != 0xffffffff) {
        SendMessageA(hWnd,0x14e,WVar2,0);
        return;
      }
      FUN_5f989f30(hWnd,"%.6f");
      return;
    }
    pBVar1 = (BYTE *)FUN_5f9811c0(DAT_5f9f5978,0x23);
    FUN_5f988570(local_88,pBVar1);
    WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_88);
    SendMessageA(hWnd,0x14e,WVar2,0);
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0x40390000;
    iVar3 = FUN_5f95e5a0(25.0);
  }
  SendMessageA(hWnd,0x151,WVar2,iVar3 + 1);
  EnableWindow(hWnd,0);
  return;
}


