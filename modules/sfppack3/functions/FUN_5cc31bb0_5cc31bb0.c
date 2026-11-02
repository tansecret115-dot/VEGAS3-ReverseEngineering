/* Module: sfppack3.dll
   Function: FUN_5cc31bb0
   Address: 5cc31bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc31bb0(HWND param_1)

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
  
  if (DAT_5cc982c4 == -1) {
    pCVar1 = FUN_5cc4e750(DAT_5cc98300,0x3ec);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x2d0,pCVar1);
    puVar4 = (uchar *)0x0;
  }
  else if (DAT_5cc982c4 < 1) {
    pCVar1 = FUN_5cc4e750(DAT_5cc98300,0x3ed);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x2d0,pCVar1);
    puVar4 = FUN_5cc4e750(DAT_5cc98300,0x3ee);
  }
  else {
    pCVar1 = FUN_5cc4e750(DAT_5cc98300,0x3ef);
    pcVar3 = SetDlgItemTextA_exref;
    SetDlgItemTextA(param_1,0x2d0,pCVar1);
    pBVar2 = FUN_5cc4e750(DAT_5cc98300,0x3f0);
    FUN_5cc60cd0(local_380,pBVar2);
    puVar4 = local_380;
  }
  (*pcVar3)(param_1,0x2d1,puVar4);
  if (DAT_5cc982c4 != 0) {
    FUN_5cc4a9d0((int)auStack_28c);
    (*pcVar3)(param_1,0x2cb,auStack_20c);
    (*pcVar3)(param_1,0x2cc,auStack_198);
    (*pcVar3)(param_1,0x2cd,auStack_124);
  }
  return;
}


