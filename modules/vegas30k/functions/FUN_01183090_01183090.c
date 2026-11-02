/* Module: vegas30k.dll
   Function: FUN_01183090
   Address: 01183090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01183090(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if (DAT_012b09c8 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_012b09c8 + 0x18))(DAT_012b09c8,param_1);
    return uVar1;
  }
  return 0x8000ffff;
}


