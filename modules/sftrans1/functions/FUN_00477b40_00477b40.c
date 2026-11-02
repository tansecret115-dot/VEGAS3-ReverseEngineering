/* Module: sftrans1.dll
   Function: FUN_00477b40
   Address: 00477b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477b40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00478240();
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 10;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x6c) = 0xbfe80000;
  return;
}


