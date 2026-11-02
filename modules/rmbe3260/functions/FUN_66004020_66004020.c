/* Module: rmbe3260.dll
   Function: FUN_66004020
   Address: 66004020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66004020(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x114) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x104) + 0x134))();
    piVar1 = *(int **)(param_1 + 0x114);
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 0x34))(piVar1,6);
    }
    else {
      (**(code **)(*piVar1 + 0x34))(piVar1,5);
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x108) + 0x134))();
    (**(code **)(**(int **)(param_1 + 0x114) + 0x3c))(*(int **)(param_1 + 0x114),uVar3);
  }
  return 1;
}


