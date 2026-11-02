/* Module: aifplug.dll
   Function: FUN_5fbd63a0
   Address: 5fbd63a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5fbd63a0(uint param_1,short *param_2)

{
  bool bVar1;
  double dVar2;
  ushort uVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  
  sVar4 = 0;
  for (dVar2 = (double)param_1; _DAT_5fbff798 <= dVar2; dVar2 = dVar2 * _DAT_5fbff770) {
    sVar4 = sVar4 + 1;
  }
  bVar1 = _DAT_5fbff790 <= dVar2;
  *param_2 = sVar4 + 0x3fff;
  uVar3 = ftol();
  param_2[1] = (ushort)bVar1 << 0xf | uVar3;
  psVar5 = param_2 + 2;
  iVar6 = 3;
  do {
    sVar4 = ftol();
    *psVar5 = sVar4;
    psVar5 = psVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


