/* Module: rmbe3260.dll
   Function: FUN_6602f180
   Address: 6602f180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602f180(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x20);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) &&
     (*(int *)(*(int *)(param_1 + 4) + 0x18) != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x18);
    (**(code **)(*piVar3 + 0x14))
              (piVar3,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x20) + 8));
  }
  piVar3 = *(int **)(param_1 + 0xc);
  while ((piVar3 != (int *)0x0 && (0 < piVar3[4]))) {
    piVar3 = (int *)FUN_6605c4d0(piVar3);
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 8);
      (**(code **)(*piVar2 + 0xc))(piVar2,piVar3[1],piVar3[2],piVar3[3]);
    }
    else if (iVar1 == 1) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 8);
      (**(code **)(*piVar2 + 0x10))(piVar2,piVar3[1],piVar3[2],piVar3[3]);
    }
    else if (iVar1 == 2) {
      piVar2 = *(int **)(*(int *)(param_1 + 4) + 8);
      (**(code **)(*piVar2 + 0x14))(piVar2,piVar3[1],piVar3[3]);
    }
    operator_delete(piVar3);
    piVar3 = *(int **)(param_1 + 0xc);
  }
  return;
}


