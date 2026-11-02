/* Module: sfxpfx1.dll
   Function: FUN_5c9424f0
   Address: 5c9424f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c9424f0(HWND param_1)

{
  LPCSTR pCVar1;
  BYTE *pBVar2;
  code *pcVar3;
  uchar *puVar4;
  uchar local_380 [244];
  undefined1 auStack_28c [128];
  undefined1 auStack_20c [116];
  undefined1 auStack_198 [116];
  undefined1 auStack_124 [292];
  
  if (DAT_5c998764 == -1) {
    pCVar1 = FUN_5c956850(DAT_5c9987a0,0x3ec);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x1fe,pCVar1);
    puVar4 = (uchar *)0x0;
  }
  else if (DAT_5c998764 < 1) {
    pCVar1 = FUN_5c956850(DAT_5c9987a0,0x3ed);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x1fe,pCVar1);
    puVar4 = FUN_5c956850(DAT_5c9987a0,0x3ee);
  }
  else {
    pCVar1 = FUN_5c956850(DAT_5c9987a0,0x3ef);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x1fe,pCVar1);
    pBVar2 = FUN_5c956850(DAT_5c9987a0,0x3f0);
    FUN_5c964c90(local_380,pBVar2);
    puVar4 = local_380;
  }
  (*pcVar3)(param_1,0x1ff,puVar4);
  if (DAT_5c998764 != 0) {
    FUN_5c952ad0((int)auStack_28c);
    (*pcVar3)(param_1,0x1f9,auStack_20c);
    (*pcVar3)(param_1,0x1fa,auStack_198);
    (*pcVar3)(param_1,0x1fb,auStack_124);
  }
  return;
}


