/* Module: sfpagepeel.dll
   Function: FUN_00421b00
   Address: 00421b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421b00(uint *param_1,uint param_2,uint param_3,byte param_4)

{
  uint uVar1;
  
  if (param_1[0x30] != 0xffffffff) {
    if (param_1[0x30] == 5) {
      param_1[3] = (uint)((param_4 & 10) != 0) << 0x10 | param_1[3] & 0xfffeffff;
      FUN_00421570(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_004213b0((int)param_1,param_2,param_3);
    FUN_004214a0((int)param_1,uVar1,0);
  }
  return;
}


