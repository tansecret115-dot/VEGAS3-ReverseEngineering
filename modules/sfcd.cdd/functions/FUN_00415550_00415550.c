/* Module: sfcd.cdd
   Function: FUN_00415550
   Address: 00415550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415550(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)param_1 = 0xaa;
  *(undefined2 *)((int)param_1 + 3) = 0x1a5e;
  FUN_0041f970((undefined1 *)((int)param_1 + 3),1);
  return 0;
}


