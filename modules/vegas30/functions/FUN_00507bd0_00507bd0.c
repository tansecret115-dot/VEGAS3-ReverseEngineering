/* Module: vegas30.exe
   Function: FUN_00507bd0
   Address: 00507bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00507bd0(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 == 0xffffffff) {
    return &DAT_006437d8;
  }
  if ((param_1 != 0) && (param_1 < 0xb)) {
    puVar1 = (undefined4 *)(&PTR_DAT_00643530)[param_1 * 0x11];
  }
  return puVar1;
}


