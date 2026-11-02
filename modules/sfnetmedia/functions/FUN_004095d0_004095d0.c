/* Module: sfnetmedia.dll
   Function: FUN_004095d0
   Address: 004095d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004095d0(int param_1)

{
  undefined4 uVar1;
  
  Ordinal_6(*(undefined4 *)(param_1 + 0x8c));
  uVar1 = Ordinal_2(param_1);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  return 0;
}


