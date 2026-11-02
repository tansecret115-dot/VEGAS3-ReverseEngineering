/* Module: rmme3260.dll
   Function: FUN_662321c0
   Address: 662321c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662321c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x89);
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1), iVar2 == 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x8d);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1), iVar2 != 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x85);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,0,*(undefined4 *)(param_1 + 0x10),0,0);
  }
  return 0;
}


