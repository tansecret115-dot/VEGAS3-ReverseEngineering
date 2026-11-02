/* Module: sfcdi.dll
   Function: FUN_5bf171b0
   Address: 5bf171b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf171b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
    return uVar1 >> 0xb;
  }
  uVar2 = (uVar1 * 4) / 0x930;
  if ((uVar1 * 4) % 0x930 != 0) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar2 == 0) || (uVar1 = 300, 299 < uVar2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}


