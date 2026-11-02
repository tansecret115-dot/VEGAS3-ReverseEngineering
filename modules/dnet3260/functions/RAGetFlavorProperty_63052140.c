/* Module: dnet3260.dll
   Function: RAGetFlavorProperty
   Address: 63052140
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAGetFlavorProperty(undefined4 param_1,uint param_2,uint param_3,ushort *param_4)

{
  undefined *this;
  int iVar1;
  
                    /* 0x2140  6  RAGetFlavorProperty */
  this = FUN_63051290();
  if (this == (undefined *)0x0) {
    *param_4 = 0;
    return 0;
  }
  iVar1 = FUN_630517a0(this,param_2,param_3,param_4);
  return iVar1;
}


