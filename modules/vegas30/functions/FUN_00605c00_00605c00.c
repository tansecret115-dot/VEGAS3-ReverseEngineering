/* Module: vegas30.exe
   Function: FUN_00605c00
   Address: 00605c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00605c00(short param_1)

{
  short *psVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar1 = &DAT_00646f98;
  do {
    if (*psVar1 == param_1) {
      puVar2 = *(undefined **)(iVar3 * 8 + 0x646f9c);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = &DAT_0065e5dc;
      }
      return puVar2;
    }
    psVar1 = psVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)psVar1 < 0x647088);
  return &DAT_0065e5dc;
}


