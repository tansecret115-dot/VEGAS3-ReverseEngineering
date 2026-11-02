/* Module: erv33260.dll
   Function: FUN_67075310
   Address: 67075310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_67075310(short *param_1,uint *param_2)

{
  *param_2 = ((uint)(byte)(&DAT_6709c4d8)[*param_1] + (uint)(byte)(&DAT_6709cad8)[param_1[5]] +
              (uint)(byte)(&DAT_6709d6d8)[param_1[4]] + (uint)(byte)(&DAT_6709d0d8)[param_1[1]]) *
             0x1000000 |
             (uint)(byte)(&DAT_6709d6d8)[param_1[0xe]] + (uint)(byte)(&DAT_6709cad8)[param_1[0xf]] +
             (uint)(byte)(&DAT_6709d0d8)[param_1[0xb]] + (uint)(byte)(&DAT_6709c4d8)[param_1[10]] |
             ((uint)(byte)(&DAT_6709cad8)[param_1[0xd]] + (uint)(byte)(&DAT_6709d0d8)[param_1[0xc]]
              + (uint)(byte)(&DAT_6709d6d8)[param_1[9]] + (uint)(byte)(&DAT_6709c4d8)[param_1[8]]) *
             0x100 | ((uint)(byte)(&DAT_6709d6d8)[param_1[6]] +
                      (uint)(byte)(&DAT_6709cad8)[param_1[7]] +
                      (uint)(byte)(&DAT_6709d0d8)[param_1[3]] +
                     (uint)(byte)(&DAT_6709c4d8)[param_1[2]]) * 0x10000;
  return 0;
}


