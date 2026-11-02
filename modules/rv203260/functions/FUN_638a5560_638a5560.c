/* Module: rv203260.dll
   Function: FUN_638a5560
   Address: 638a5560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a5560(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xe4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_638af190(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 0;
}


