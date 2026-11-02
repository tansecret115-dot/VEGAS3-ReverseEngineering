/* Module: stl2plg.dll
   Function: FUN_00405fb0
   Address: 00405fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405fb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(param_1 + 0xc);
  puVar2 = (undefined4 *)(-(uint)(*(int *)(param_1 + 4) != 0) & (uint)(param_1 + 4));
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00419830(puVar2,(undefined4 *)(-(uint)(*(int *)(param_1 + 8) != 0) & (uint)(param_1 + 8)),
                 (undefined4 *)(-(uint)(*piVar1 != 0) & (uint)piVar1));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *piVar1 = 0;
  return;
}


