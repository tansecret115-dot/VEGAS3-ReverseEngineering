/* Module: mp3plug.dll
   Function: FUN_5f725740
   Address: 5f725740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5f725740(short param_1)

{
  short *psVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar1 = &DAT_5f74d0a0;
  do {
    if (*psVar1 == param_1) {
      puVar2 = *(undefined **)(iVar3 * 8 + 0x5f74d0a4);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = &DAT_5f75ab78;
      }
      return puVar2;
    }
    psVar1 = psVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)psVar1 < 0x5f74d190);
  return &DAT_5f75ab78;
}


