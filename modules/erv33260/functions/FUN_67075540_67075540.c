/* Module: erv33260.dll
   Function: FUN_67075540
   Address: 67075540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_67075540(uint param_1)

{
  return (uint)(byte)(&DAT_6709d9d8)[param_1 >> 0x18] +
         (uint)(byte)(&DAT_6709dab8)[param_1 & 0xff] +
         (uint)(byte)(&DAT_6709da48)[param_1 >> 8 & 0xff] +
         (uint)(byte)(&DAT_6709da48)[param_1 >> 0x10 & 0xff];
}


