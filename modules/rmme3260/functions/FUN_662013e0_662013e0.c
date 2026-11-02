/* Module: rmme3260.dll
   Function: FUN_662013e0
   Address: 662013e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662013e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint local_10;
  uint local_8;
  
  uVar3 = 0;
  piVar4 = (int *)0x0;
  local_8 = 0xffffffff;
  local_10 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      piVar5 = (int *)(param_1 + 0x20);
      do {
        piVar1 = (int *)*piVar5;
        if (piVar1 != (int *)0x0) {
          uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
          if (uVar2 < local_8) {
            piVar4 = (int *)*piVar5;
            local_8 = (**(code **)(*piVar4 + 0x14))(piVar4);
            local_10 = uVar3;
          }
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x60));
    }
    if (piVar4 != (int *)0x0) {
      FUN_6620da60(*(void **)(param_1 + 0x1c),piVar4);
      (**(code **)(*piVar4 + 8))(piVar4);
      *(undefined4 *)(param_1 + 0x20 + local_10 * 4) = 0;
    }
  }
  return;
}


