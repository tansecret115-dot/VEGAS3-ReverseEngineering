/* Module: 28_83260.dll
   Function: FUN_100062e0
   Address: 100062e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_100062e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xb1c);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xc2000000;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x16c0);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xc2000000;
    puVar2 = puVar2 + 1;
  }
  return;
}


