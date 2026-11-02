/* Module: dnet3260.dll
   Function: RASetFlavor
   Address: 63052180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RASetFlavor(void *param_1,ushort param_2)

{
  undefined4 uVar1;
  
                    /* 0x2180  12  RASetFlavor */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_63052000(param_1,param_2);
    return uVar1;
  }
  return 0x80070057;
}


