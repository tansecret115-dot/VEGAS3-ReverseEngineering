/* Module: sfcdi.dll
   Function: FUN_5bf0bcb0
   Address: 5bf0bcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0bcb0(UINT param_1,uint param_2,char param_3)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  
  uVar1 = 0;
  if ((DAT_5bf63128 == 0) || (param_1 != 0)) {
    uVar1 = FUN_5bf0bba0();
  }
  DAT_5bf631c4 = (uint)(DAT_5bf631c8 != 0);
  if (DAT_5bf63128 != 0) {
    FUN_5bf0b9f0(unaff_retaddr,param_1,param_2,param_3);
    uVar1 = 0;
  }
  return uVar1;
}


