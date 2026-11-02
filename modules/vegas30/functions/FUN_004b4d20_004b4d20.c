/* Module: vegas30.exe
   Function: FUN_004b4d20
   Address: 004b4d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b4d20(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0x465) {
    uVar1 = FUN_004b4c10(param_1,param_2);
    return uVar1;
  }
  if ((0x4ac < param_3) && (param_3 < 0x4af)) {
    uVar1 = FUN_004b4c70(param_1,param_2);
    return uVar1;
  }
  return 1;
}


