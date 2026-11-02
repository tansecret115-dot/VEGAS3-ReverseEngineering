/* Module: vfplugs.dll
   Function: FUN_00426b20
   Address: 00426b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426b20(uint *param_1,uint param_2,uint param_3,byte param_4)

{
  uint uVar1;
  
  if (param_1[0x30] != 0xffffffff) {
    if (param_1[0x30] == 5) {
      param_1[3] = (uint)((param_4 & 10) != 0) << 0x10 | param_1[3] & 0xfffeffff;
      FUN_00426590(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_004263d0((int)param_1,param_2,param_3);
    FUN_004264c0((int)param_1,uVar1,0);
  }
  return;
}


