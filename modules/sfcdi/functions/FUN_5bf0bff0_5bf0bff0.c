/* Module: sfcdi.dll
   Function: FUN_5bf0bff0
   Address: 5bf0bff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0bff0(uint *param_1,uint param_2,uint param_3)

{
  if ((DAT_5bf631c0 & 8) != 0) {
    *param_1 = *param_1 | 2;
  }
  if ((DAT_5bf631c0 & 0x10) != 0) {
    *param_1 = *param_1 | 4;
  }
  if ((DAT_5bf631c4 != 0) && (DAT_5bf631c8 != 0)) {
    FUN_5bf0be20(param_1,param_2,param_3);
    return;
  }
  *param_1 = *param_1 & 0xfffffffe;
  FUN_5bf0bee0((byte *)param_1,param_2,param_3);
  return;
}


