/* Module: mp3rw.dll
   Function: FUN_00417110
   Address: 00417110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00417110(short param_1)

{
  short *psVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar1 = &DAT_004a5ac8;
  do {
    if (*psVar1 == param_1) {
      puVar2 = *(undefined **)(iVar3 * 8 + 0x4a5acc);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = &DAT_004a8628;
      }
      return puVar2;
    }
    psVar1 = psVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)psVar1 < 0x4a5bb8);
  return &DAT_004a8628;
}


