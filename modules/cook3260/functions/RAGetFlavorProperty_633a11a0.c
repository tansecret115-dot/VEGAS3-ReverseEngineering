/* Module: cook3260.dll
   Function: RAGetFlavorProperty
   Address: 633a11a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void RAGetFlavorProperty(undefined4 param_1,ushort param_2,undefined2 param_3,ushort *param_4)

{
                    /* 0x11a0  7  RAGetFlavorProperty */
  if ((DAT_633ac748 & 1) == 0) {
    DAT_633ac748 = DAT_633ac748 | 1;
    FUN_633a2090((undefined4 *)&DAT_633ac750);
    FUN_633a72f0((_onexit_t)&LAB_633a11f0);
  }
  FUN_633a2100(&DAT_633ac750,param_2,param_3,param_4);
  return;
}


