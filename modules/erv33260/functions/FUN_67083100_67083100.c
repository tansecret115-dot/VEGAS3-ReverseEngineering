/* Module: erv33260.dll
   Function: FUN_67083100
   Address: 67083100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67083100(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int local_8;
  
  local_8 = 0;
  psVar5 = &DAT_6718d938;
  do {
    iVar3 = 0;
    bVar1 = (&DAT_67091278)[local_8];
    psVar4 = psVar5;
    do {
      sVar2 = (short)iVar3 * (ushort)bVar1;
      iVar3 = iVar3 + 1;
      *psVar4 = (sVar2 >> 3) + sVar2;
      psVar4 = psVar4 + 1;
    } while (iVar3 < 0x27);
    psVar5 = psVar5 + 0x27;
    local_8 = local_8 + 1;
  } while (psVar5 < &DAT_6718e2f8);
  return;
}


