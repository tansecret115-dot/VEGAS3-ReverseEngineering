/* Module: vidpcore.dll
   Function: FUN_5de9f020
   Address: 5de9f020
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5de9f020(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    piVar1 = (int *)(param_1 + 0x14);
    iVar3 = *piVar1;
    (**(code **)(*piVar2 + 0xc))(piVar2,piVar1);
    return iVar3 != *piVar1;
  }
  return false;
}


