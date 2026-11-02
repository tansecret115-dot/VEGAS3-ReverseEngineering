/* Module: vegas30k.dll
   Function: FUN_011b4120
   Address: 011b4120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b4120(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x4e001;
  }
  piVar1 = *(int **)(param_1 + 0xc70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),0);
  iVar3 = FUN_011b53c0(*(undefined4 *)(param_1 + 0x9c0));
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(param_1 + 0x9cc) = 0;
  }
  return uVar2;
}


