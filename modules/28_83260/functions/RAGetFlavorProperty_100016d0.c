/* Module: 28_83260.dll
   Function: RAGetFlavorProperty
   Address: 100016d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAGetFlavorProperty(undefined4 param_1,uint param_2,uint param_3,ushort *param_4)

{
  undefined *this;
  undefined4 uVar1;
  
                    /* 0x16d0  6  RAGetFlavorProperty */
  this = FUN_10001840();
  if (this == (undefined *)0x0) {
    *param_4 = 0;
    return 0;
  }
  uVar1 = FUN_100018d0(this,param_2,param_3,param_4);
  return uVar1;
}


