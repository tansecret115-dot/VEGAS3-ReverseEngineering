/* Module: vidcap30.exe
   Function: FUN_00575150
   Address: 00575150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00575150(short param_1)

{
  short *psVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar1 = &DAT_005ba070;
  do {
    if (*psVar1 == param_1) {
      puVar2 = *(undefined **)(iVar3 * 8 + 0x5ba074);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = &DAT_00662524;
      }
      return puVar2;
    }
    psVar1 = psVar1 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)psVar1 < 0x5ba160);
  return &DAT_00662524;
}


