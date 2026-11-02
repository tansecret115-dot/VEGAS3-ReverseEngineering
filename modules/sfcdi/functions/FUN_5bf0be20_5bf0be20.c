/* Module: sfcdi.dll
   Function: FUN_5bf0be20
   Address: 5bf0be20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf0be20(uint *param_1,uint param_2,uint param_3)

{
  char extraout_AH;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_3c;
  uint uStack_12;
  
  (*DAT_5bf631cc)();
  if (extraout_AH != '\x01') {
    return -0x7fffbffb;
  }
  param_1[7] = 0xffffffff;
  puVar2 = &uStack_3c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_3c._0_1_ = 0;
  uStack_3c._1_1_ = 0;
  uStack_3c._2_1_ = (undefined1)param_2;
  iVar1 = (*DAT_5bf631d0)(&uStack_3c);
  if (iVar1 != 1) {
    return -0x7fffbffb;
  }
  param_1[9] = (uStack_12 >> 8 & 0xff) << 8 | uStack_12 & 0xff;
  *param_1 = *param_1 | 1;
  iVar1 = FUN_5bf0bd90((byte *)param_1);
  if (iVar1 < 0) {
    *param_1 = *param_1 & 0xfffffffe;
    return iVar1;
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  return 0;
}


