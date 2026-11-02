/* Module: sfpagepeel.dll
   Function: FUN_0040efb0
   Address: 0040efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040efb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint local_4;
  
  if ((*(int *)(param_1 + 0xa0) != 0) && (local_4 = 0, *(int *)(param_1 + 0x7c) != 0)) {
    iVar2 = 0;
    do {
      piVar3 = (int *)(iVar2 + *(int *)(param_1 + 0xa0));
      piVar1 = (int *)piVar3[1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        piVar3[1] = 0;
      }
      piVar1 = (int *)piVar3[2];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        piVar3[2] = 0;
      }
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 0x18;
    } while (local_4 < *(uint *)(param_1 + 0x7c));
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}


