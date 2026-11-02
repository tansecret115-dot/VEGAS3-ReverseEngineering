/* Module: wmfdist2.exe
   Function: FUN_010071a7
   Address: 010071a7
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010071a7(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    param_3 = param_3 ^ uVar2;
  }
  uVar2 = param_2 & 3;
  uVar1 = 0;
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      if (uVar2 != 3) goto LAB_01007208;
      uVar1 = (uint)(byte)*param_1 << 0x10;
      param_1 = (uint *)((int)param_1 + 1);
    }
    uVar1 = uVar1 | (uint)(byte)*param_1 << 8;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar1 = uVar1 | (byte)*param_1;
LAB_01007208:
  return uVar1 ^ param_3;
}


