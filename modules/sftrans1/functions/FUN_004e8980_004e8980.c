/* Module: sftrans1.dll
   Function: FUN_004e8980
   Address: 004e8980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004e8980(int *param_1)

{
  HGLOBAL pvVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  do {
    if (((-1 < iVar3) && (iVar3 < param_1[0x890])) && (*piVar2 != 0)) {
      FUN_004e81f0(iVar3);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x800);
  if ((LPCVOID)param_1[0x976] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x976]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x976]);
    GlobalFree(pvVar1);
    param_1[0x976] = 0;
  }
  return;
}


