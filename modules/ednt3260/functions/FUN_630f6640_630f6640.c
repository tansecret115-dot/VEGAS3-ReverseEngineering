/* Module: ednt3260.dll
   Function: FUN_630f6640
   Address: 630f6640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630f6640(int param_1)

{
  short sVar1;
  double dVar2;
  double dVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = (short *)(param_1 + 0xed5c);
  iVar5 = 6;
  do {
    sVar1 = *psVar4;
    dVar2 = _DAT_63102988;
    dVar3 = _DAT_63102990;
    if (*(double *)(param_1 + 0x60) <= (double)(int)sVar1 * _DAT_63102970) {
      dVar2 = _DAT_63102978;
      dVar3 = _DAT_63102980;
    }
    psVar4 = psVar4 + 1;
    iVar5 = iVar5 + -1;
    *(double *)(param_1 + 0x60) =
         *(double *)(param_1 + 0x60) * dVar2 - (double)(int)sVar1 * _DAT_63102970 * dVar3;
  } while (iVar5 != 0);
  return;
}


