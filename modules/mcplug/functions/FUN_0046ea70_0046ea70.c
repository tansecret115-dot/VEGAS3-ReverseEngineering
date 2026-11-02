/* Module: mcplug.dll
   Function: FUN_0046ea70
   Address: 0046ea70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_0046ea70(short param_1)

{
  short *psVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar1 = &DAT_00487818;
  do {
    if (*psVar1 == param_1) {
      puVar2 = *(undefined **)(iVar3 * 8 + 0x48781c);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = &DAT_004ad428;
      }
      return puVar2;
    }
    psVar1 = psVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)psVar1 < 0x487908);
  return &DAT_004ad428;
}


