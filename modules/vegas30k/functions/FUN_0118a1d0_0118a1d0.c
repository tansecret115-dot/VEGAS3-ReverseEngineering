/* Module: vegas30k.dll
   Function: FUN_0118a1d0
   Address: 0118a1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0118a1d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 0x4fa) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x90);
    do {
      uVar2 = uVar2 + 1;
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      puVar1 = puVar1 + 2;
      param_2 = param_2 + 2;
    } while (uVar2 < *(ushort *)(param_1 + 0x4fa));
    return 0;
  }
  return 0;
}


