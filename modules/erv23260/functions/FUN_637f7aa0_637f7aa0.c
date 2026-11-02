/* Module: erv23260.dll
   Function: FUN_637f7aa0
   Address: 637f7aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f7aa0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1a2c);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


