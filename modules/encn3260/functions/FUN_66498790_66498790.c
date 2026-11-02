/* Module: encn3260.dll
   Function: FUN_66498790
   Address: 66498790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66498790(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x58);
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1), iVar2 == 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x5c);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1), iVar2 != 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,0,*(undefined4 *)(param_1 + 0x48),0,0);
  }
  return 0;
}


