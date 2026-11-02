/* Module: encn3260.dll
   Function: FUN_664c2260
   Address: 664c2260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c2260(int param_1,int param_2)

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


