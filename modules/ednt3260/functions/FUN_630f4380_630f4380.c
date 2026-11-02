/* Module: ednt3260.dll
   Function: FUN_630f4380
   Address: 630f4380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f4380(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(short *)(param_1 + 0x511b0) == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x511b2);
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)(param_1 + 0x511b0) = 1;
  }
  return;
}


