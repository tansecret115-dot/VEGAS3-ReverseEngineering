/* Module: rmme3260.dll
   Function: FUN_66201e40
   Address: 66201e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66201e40(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_66268160();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_66268160();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


