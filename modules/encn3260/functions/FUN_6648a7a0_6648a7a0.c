/* Module: encn3260.dll
   Function: FUN_6648a7a0
   Address: 6648a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648a7a0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x182) = 0;
  if (*(int *)(param_1 + 0x186) == 0) {
    (**(code **)(**(int **)(param_1 + 0x172) + 0x10))(*(int **)(param_1 + 0x172),0x8004004c);
    return;
  }
  *(undefined4 *)(param_1 + 0x186) = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0xc))
                    (*(int **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x17a),
                     *(int *)(param_1 + 0x18a) * 1000);
  *(undefined4 *)(param_1 + 0x182) = uVar1;
  return;
}


