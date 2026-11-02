/* Module: ednt3260.dll
   Function: FUN_630f89c0
   Address: 630f89c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f89c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(short *)(param_1 + 0x51212) == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x51214);
    for (iVar1 = 0x3c00; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)(param_1 + 0x51212) = 1;
  }
  return;
}


