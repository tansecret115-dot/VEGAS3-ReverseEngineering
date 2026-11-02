/* Module: sipr3260.dll
   Function: RAFlush
   Address: 632a17d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAFlush(int param_1,undefined4 param_2,undefined4 *param_3)

{
                    /* 0x17d0  4  RAFlush */
  FUN_632a1390(param_1);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}


