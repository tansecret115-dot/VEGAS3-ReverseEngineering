/* Module: erv33260.dll
   Function: FUN_67075410
   Address: 67075410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_67075410(short *param_1,uint *param_2)

{
  short *psVar1;
  uint uVar2;
  
  uVar2 = 0;
  psVar1 = param_1;
  while ((*psVar1 < 0x217 && (-0x217 < *psVar1))) {
    uVar2 = uVar2 + 1;
    psVar1 = psVar1 + 1;
    if (0xf < uVar2) {
      *param_2 = ((uint)(byte)(&DAT_6709c4d8)[*param_1] + (uint)(byte)(&DAT_6709d0d8)[param_1[1]] +
                  (uint)(byte)(&DAT_6709cad8)[param_1[5]] + (uint)(byte)(&DAT_6709d6d8)[param_1[4]])
                 * 0x1000000 |
                 (uint)(byte)(&DAT_6709c4d8)[param_1[10]] +
                 (uint)(byte)(&DAT_6709d0d8)[param_1[0xb]] +
                 (uint)(byte)(&DAT_6709d6d8)[param_1[0xe]] +
                 (uint)(byte)(&DAT_6709cad8)[param_1[0xf]] |
                 ((uint)(byte)(&DAT_6709c4d8)[param_1[8]] + (uint)(byte)(&DAT_6709d6d8)[param_1[9]]
                  + (uint)(byte)(&DAT_6709cad8)[param_1[0xd]] +
                 (uint)(byte)(&DAT_6709d0d8)[param_1[0xc]]) * 0x100 |
                 ((uint)(byte)(&DAT_6709c4d8)[param_1[2]] + (uint)(byte)(&DAT_6709d0d8)[param_1[3]]
                  + (uint)(byte)(&DAT_6709d6d8)[param_1[6]] +
                 (uint)(byte)(&DAT_6709cad8)[param_1[7]]) * 0x10000;
      return 0;
    }
  }
  return 1;
}


