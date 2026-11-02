/* Module: qt4plug.dll
   Function: FUN_5f514bf0
   Address: 5f514bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f514bf0(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  LPARAM lParam;
  UINT UVar3;
  WPARAM WVar4;
  int iVar5;
  uchar *puVar6;
  LPRECT ptVar7;
  undefined1 local_11c [16];
  uchar local_10c [264];
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (piVar1 != (int *)0x0) {
    iVar5 = piVar1[2];
    WVar4 = 1;
    UVar3 = 0x610;
    pHVar2 = GetDlgItem(param_1,0x409);
    SendMessageA(pHVar2,UVar3,WVar4,iVar5);
    iVar5 = piVar1[3];
    WVar4 = 1;
    UVar3 = 0x610;
    pHVar2 = GetDlgItem(param_1,0x408);
    SendMessageA(pHVar2,UVar3,WVar4,iVar5);
    lParam = ftol();
    WVar4 = 1;
    UVar3 = 0x610;
    pHVar2 = GetDlgItem(param_1,0x40a);
    SendMessageA(pHVar2,UVar3,WVar4,lParam);
    FUN_5f52c900(local_10c,"%d");
    puVar6 = local_10c;
    pHVar2 = GetDlgItem(param_1,0x412);
    FUN_5f52e2c0(pHVar2,puVar6);
    FUN_5f52c900(local_10c,"%d");
    puVar6 = local_10c;
    pHVar2 = GetDlgItem(param_1,0x413);
    FUN_5f52e2c0(pHVar2,puVar6);
    FUN_5f52c900(local_10c,"%.3f");
    puVar6 = local_10c;
    pHVar2 = GetDlgItem(param_1,0x418);
    FUN_5f52e2c0(pHVar2,puVar6);
    if (piVar1[7] != 0) {
      FUN_5f52c900(local_10c,"%.3f");
      puVar6 = local_10c;
      pHVar2 = GetDlgItem(param_1,0x410);
      FUN_5f52e2c0(pHVar2,puVar6);
      FUN_5f52c900(local_10c,"%.3f");
      puVar6 = local_10c;
      pHVar2 = GetDlgItem(param_1,0x414);
      FUN_5f52e2c0(pHVar2,puVar6);
      FUN_5f52c900(local_10c,"%.3f");
      puVar6 = local_10c;
      pHVar2 = GetDlgItem(param_1,0x415);
      FUN_5f52e2c0(pHVar2,puVar6);
    }
    if (piVar1[0xb] != 0) {
      FUN_5f52c900(local_10c,"%.3f");
      puVar6 = local_10c;
      pHVar2 = GetDlgItem(param_1,0x411);
      FUN_5f52e2c0(pHVar2,puVar6);
      FUN_5f52c900(local_10c,"%.3f");
      puVar6 = local_10c;
      pHVar2 = GetDlgItem(param_1,0x416);
      FUN_5f52e2c0(pHVar2,puVar6);
      FUN_5f52c900(local_10c,"%.3f");
      puVar6 = local_10c;
      pHVar2 = GetDlgItem(param_1,0x417);
      FUN_5f52e2c0(pHVar2,puVar6);
    }
    ptVar7 = (LPRECT)local_11c;
    pHVar2 = GetDlgItem(param_1,0x404);
    GetWindowRect(pHVar2,ptVar7);
    ScreenToClient(param_1,(LPPOINT)local_11c);
    ScreenToClient(param_1,(LPPOINT)(local_11c + 8));
    FUN_5f514780(param_1,(int)(piVar1 + 4),(int *)local_11c,*(uint *)(*piVar1 + 8),
                 *(int *)(*piVar1 + 0xc),piVar1[3]);
    ptVar7 = (LPRECT)local_11c;
    pHVar2 = GetDlgItem(param_1,0x405);
    GetWindowRect(pHVar2,ptVar7);
    ScreenToClient(param_1,(LPPOINT)local_11c);
    ScreenToClient(param_1,(LPPOINT)(local_11c + 8));
    FUN_5f514780(param_1,(int)(piVar1 + 8),(int *)local_11c,*(uint *)(*piVar1 + 8),
                 *(int *)(*piVar1 + 0xc),piVar1[3]);
    ptVar7 = (LPRECT)local_11c;
    pHVar2 = GetDlgItem(param_1,0x406);
    GetWindowRect(pHVar2,ptVar7);
    ScreenToClient(param_1,(LPPOINT)local_11c);
    ScreenToClient(param_1,(LPPOINT)(local_11c + 8));
    FUN_5f514780(param_1,(int)(piVar1 + 0x10),(int *)local_11c,*(uint *)(*piVar1 + 8),
                 *(int *)(*piVar1 + 0xc),piVar1[3]);
    ptVar7 = (LPRECT)local_11c;
    pHVar2 = GetDlgItem(param_1,0x407);
    GetWindowRect(pHVar2,ptVar7);
    ScreenToClient(param_1,(LPPOINT)local_11c);
    ScreenToClient(param_1,(LPPOINT)(local_11c + 8));
    FUN_5f514780(param_1,(int)(piVar1 + 0x14),(int *)local_11c,*(uint *)(*piVar1 + 8),
                 *(int *)(*piVar1 + 0xc),piVar1[3]);
  }
  return;
}


