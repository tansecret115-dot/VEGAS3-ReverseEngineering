/* Module: sfppack1.dll
   Function: FUN_5cdb1e70
   Address: 5cdb1e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb1e70(HWND param_1,uint param_2,ushort param_3,int param_4)

{
  BYTE *pBVar1;
  LPCSTR pCVar2;
  HWND pHVar3;
  int iVar4;
  uchar local_104 [260];
  
  if (param_2 < 0x112) {
    if (param_2 == 0x111) {
      if ((param_3 != 0) && (param_3 < 3)) {
        EndDialog(param_1,(uint)(param_3 == 1));
        return 1;
      }
    }
    else if (param_2 == 0x4e) {
      if ((*(int *)(param_4 + 8) == -0x69) && (*(int *)(param_4 + 4) == 8)) {
        FUN_5cded420(param_1,(char *)0x68);
        return 1;
      }
    }
    else if (param_2 == 0x110) {
      FUN_5cdedff0(param_1,(HWND)0x0,(int *)0x0,0x8001);
      FUN_5cdeb340(local_104,&DAT_5ce1f410);
      SetDlgItemTextA(param_1,0x2c8,(LPCSTR)local_104);
      pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x3f2);
      FUN_5cdeb340(local_104,pBVar1);
      SetDlgItemTextA(param_1,0x2c7,(LPCSTR)local_104);
      SetDlgItemTextA(param_1,0x2c9,"Copyright (C) 1997-2001 Sonic Foundry, Inc.");
      if (DAT_5ce237e8 == 0) {
        pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x3f4);
        FUN_5cdeb340(local_104,pBVar1);
        SetWindowTextA(param_1,(LPCSTR)local_104);
        pCVar2 = FUN_5cddcf00(DAT_5ce23828,0x3f5);
        SetDlgItemTextA(param_1,0x2ca,pCVar2);
        pCVar2 = FUN_5cddcf00(DAT_5ce23828,0x3f3);
        SetDlgItemTextA(param_1,0x2ce,pCVar2);
        iVar4 = 0;
        pHVar3 = GetDlgItem(param_1,0x2cb);
        ShowWindow(pHVar3,iVar4);
        iVar4 = 0;
        pHVar3 = GetDlgItem(param_1,0x2cc);
        ShowWindow(pHVar3,iVar4);
        iVar4 = 0;
        pHVar3 = GetDlgItem(param_1,0x2cd);
        ShowWindow(pHVar3,iVar4);
        iVar4 = 8;
        pHVar3 = GetDlgItem(param_1,8);
        ShowWindow(pHVar3,iVar4);
        FUN_5cdb1d20(param_1);
        return 1;
      }
      iVar4 = 0;
      pHVar3 = GetDlgItem(param_1,8);
      ShowWindow(pHVar3,iVar4);
      pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x3f9);
      FUN_5cdeb340(local_104,pBVar1);
      SetWindowTextA(param_1,(LPCSTR)local_104);
      pBVar1 = FUN_5cddcf00(DAT_5ce23828,0x3fa);
      FUN_5cdeb340(local_104,pBVar1);
      SetDlgItemTextA(param_1,0x2ca,(LPCSTR)local_104);
      pCVar2 = FUN_5cddcf00(DAT_5ce23828,0x3fb);
      SetDlgItemTextA(param_1,0x2ce,pCVar2);
      FUN_5cdb1d20(param_1);
      return 1;
    }
  }
  else if (param_2 == 0x614) {
    FUN_5cded420(param_1,(char *)0x68);
    return 1;
  }
  return 0;
}


