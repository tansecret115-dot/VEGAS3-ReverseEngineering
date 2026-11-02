/* Module: rmme3260.dll
   Function: FUN_6623a790
   Address: 6623a790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623a790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (((byte)*(undefined4 *)(iVar1 + 0x487) & 0x20) == 0x20) {
    if (*(int *)(iVar1 + 0x47f) == 0) {
      *(undefined4 *)(iVar1 + 0x47f) = 1;
      (**(code **)(*(int *)(param_1 + 4) + 0x40))(param_1 + 4);
    }
    if (*(int *)(*(int *)(param_1 + 0xcd) + 0xc) != 0) {
      (**(code **)(**(int **)(param_1 + 0xd1) + 0x14))
                (*(int **)(param_1 + 0xd1),*(undefined4 *)(*(int *)(param_1 + 0xcd) + 8));
    }
    *(undefined4 *)(*(int *)(param_1 + 0xcd) + 0xc) = 1;
    uVar2 = (**(code **)(**(int **)(param_1 + 0xd1) + 0xc))
                      (*(int **)(param_1 + 0xd1),*(undefined4 *)(param_1 + 0xcd),200);
    *(undefined4 *)(*(int *)(param_1 + 0xcd) + 8) = uVar2;
  }
  return;
}


