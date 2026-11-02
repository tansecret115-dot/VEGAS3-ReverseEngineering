/* Module: rmme3260.dll
   Function: FUN_66265350
   Address: 66265350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66265350(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 & 0xffff) * (param_1 & 0xffff);
  uVar2 = (param_2 & 0xffff) * (param_1 >> 0x10) + (uVar1 >> 0x10);
  uVar1 = uVar1 & 0xffff;
  param_3[1] = uVar2 >> 0x10;
  uVar2 = (param_2 >> 0x10) * (param_1 & 0xffff) + (uVar2 & 0xffff);
  *param_3 = uVar1;
  *param_3 = uVar1 + uVar2 * 0x10000;
  param_3[1] = param_3[1] + (param_2 >> 0x10) * (param_1 >> 0x10) + (uVar2 >> 0x10);
  return;
}


