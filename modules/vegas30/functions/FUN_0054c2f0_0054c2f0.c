/* Module: vegas30.exe
   Function: FUN_0054c2f0
   Address: 0054c2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0054c2f0(int param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x550) != 0) {
    puVar2 = (ushort *)(*(int *)(param_1 + 0x54c) + 8);
    uVar1 = 0;
    while (param_2 != *puVar2) {
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 8;
      if (*(uint *)(param_1 + 0x550) <= uVar1) {
        return 0;
      }
    }
  }
  return uVar1;
}


