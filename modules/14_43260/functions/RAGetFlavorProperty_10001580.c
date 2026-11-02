/* Module: 14_43260.dll
   Function: RAGetFlavorProperty
   Address: 10001580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAGetFlavorProperty(undefined4 param_1,uint param_2,uint param_3,ushort *param_4)

{
  undefined *this;
  undefined4 uVar1;
  
                    /* 0x1580  6  RAGetFlavorProperty */
  this = FUN_100016f0();
  if (this == (undefined *)0x0) {
    *param_4 = 0;
    return 0;
  }
  uVar1 = FUN_10001780(this,param_2,param_3,param_4);
  return uVar1;
}


