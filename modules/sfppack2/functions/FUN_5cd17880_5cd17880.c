/* Module: sfppack2.dll
   Function: FUN_5cd17880
   Address: 5cd17880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd17880(uint *param_1,uint param_2,uint param_3,byte param_4)

{
  uint uVar1;
  
  if (param_1[0x30] != 0xffffffff) {
    if (param_1[0x30] == 5) {
      param_1[3] = (uint)((param_4 & 10) != 0) << 0x10 | param_1[3] & 0xfffeffff;
      FUN_5cd172f0(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_5cd17130((int)param_1,param_2,param_3);
    FUN_5cd17220((int)param_1,uVar1,0);
  }
  return;
}


