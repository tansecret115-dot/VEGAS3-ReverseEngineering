/* Module: rmto3260.dll
   Function: FUN_662c1600
   Address: 662c1600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c1600(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        piVar3 = (int *)FUN_662ed930(&local_8);
        local_c = *piVar3;
        if (local_c != 0) {
          FUN_662d08d0(&local_c);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(**(int **)(param_1 + 100) + 8))();
    if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 100))(1);
    }
  }
  FUN_662d08d0((undefined4 *)(param_1 + 0x2c));
  FUN_662d08d0((undefined4 *)(param_1 + 0x30));
  FUN_662d08d0((undefined4 *)(param_1 + 0x34));
  FUN_662d08d0((undefined4 *)(param_1 + 0x38));
  FUN_662d08d0((undefined4 *)(param_1 + 0x24));
  FUN_662d08d0((undefined4 *)(param_1 + 0x28));
  return;
}


