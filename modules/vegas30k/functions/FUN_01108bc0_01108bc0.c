/* Module: vegas30k.dll
   Function: FUN_01108bc0
   Address: 01108bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01108bc0(int param_1)

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


