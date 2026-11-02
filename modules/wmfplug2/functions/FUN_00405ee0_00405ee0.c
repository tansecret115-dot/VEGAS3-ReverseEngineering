/* Module: wmfplug2.dll
   Function: FUN_00405ee0
   Address: 00405ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405ee0(int param_1,uint *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((param_4 == 2) && (param_2 != (uint *)0x0)) && (7 < param_3)) {
    *param_2 = *(uint *)(param_1 + 0x48) >> 3;
    param_2[1] = 0;
    uVar1 = 0;
  }
  return uVar1;
}


