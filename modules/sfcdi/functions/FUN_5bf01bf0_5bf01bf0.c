/* Module: sfcdi.dll
   Function: FUN_5bf01bf0
   Address: 5bf01bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf01bf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) ||
     (uVar1 = 0x8004e0c5, (char)((uint)*(undefined4 *)(param_1 + 0x168) >> 0x18) == '\0')) {
    uVar1 = param_2;
  }
  return uVar1;
}


