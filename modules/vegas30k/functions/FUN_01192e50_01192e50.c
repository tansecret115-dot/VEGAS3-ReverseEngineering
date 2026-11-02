/* Module: vegas30k.dll
   Function: FUN_01192e50
   Address: 01192e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01192e50(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  (**(code **)(*DAT_012b09c8 + 0x120))(DAT_012b09c8);
  (**(code **)(*DAT_012b09c8 + 0x108))(DAT_012b09c8);
  if (DAT_012b0b30 != (code *)0x0) {
    uVar1 = (*DAT_012b0b30)(DAT_012b0b2c,0x8007,unaff_retaddr,DAT_012b0b34,unaff_ESI,param_1);
    return uVar1;
  }
  return 0;
}


