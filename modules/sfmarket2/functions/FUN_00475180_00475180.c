/* Module: sfmarket2.dll
   Function: FUN_00475180
   Address: 00475180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475180(int param_1)

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


