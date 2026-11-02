/* Module: vfplugs.dll
   Function: FUN_00466030
   Address: 00466030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466030(int param_1)

{
  ushort uVar1;
  
  uVar1 = ftol();
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0xb8) + (uint)uVar1 * 2);
  }
  *(ushort *)(param_1 + 0x40) = uVar1;
  *(ushort *)(param_1 + 0x3e) = uVar1;
  *(ushort *)(param_1 + 0x3c) = uVar1;
  return;
}


