/* Module: rmbe3260.dll
   Function: FUN_6605f330
   Address: 6605f330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605f330(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x18) + param_2;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x1c)) {
    return 0;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x1c);
  return 0x80004005;
}


