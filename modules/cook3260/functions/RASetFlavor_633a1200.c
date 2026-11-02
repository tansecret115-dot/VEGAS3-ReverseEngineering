/* Module: cook3260.dll
   Function: RASetFlavor
   Address: 633a1200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RASetFlavor(void *param_1,ushort param_2)

{
                    /* 0x1200  14  RASetFlavor */
  if (param_1 != (void *)0x0) {
    FUN_633a18c0(param_1,param_2);
  }
  return 0;
}


