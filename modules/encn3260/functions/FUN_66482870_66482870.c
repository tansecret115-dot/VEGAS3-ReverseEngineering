/* Module: encn3260.dll
   Function: FUN_66482870
   Address: 66482870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66482870(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))(*(int **)(param_1 + 0x1c));
  if (iVar1 != 0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c));
  uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  (**(code **)(*piVar2 + 8))(piVar2);
  return uVar3;
}


