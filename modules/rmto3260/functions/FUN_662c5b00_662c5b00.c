/* Module: rmto3260.dll
   Function: FUN_662c5b00
   Address: 662c5b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c5b00(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x46);
  if (iVar1 != 0) {
    local_8 = *(int *)(iVar1 + 4);
    if ((short)*(uint *)(iVar1 + 0x10) != 0) {
      uVar3 = *(uint *)(iVar1 + 0x10) & 0xffff;
      do {
        piVar2 = (int *)FUN_662ed930(&local_8);
        local_c = *piVar2;
        if (local_c != 0) {
          FUN_662d08d0(&local_c);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x46) + 8))();
    if (*(undefined4 **)(param_1 + 0x46) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x46))(1);
    }
  }
  FUN_662d08d0((undefined4 *)(param_1 + 0x20));
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


