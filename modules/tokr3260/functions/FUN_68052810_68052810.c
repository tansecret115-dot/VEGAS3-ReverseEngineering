/* Module: tokr3260.dll
   Function: FUN_68052810
   Address: 68052810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68052810(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  piVar3 = (int *)(param_3 + 0x6184);
  iVar1 = param_2 - (int)param_1;
  param_1 = (int *)0x4;
  do {
    FUN_68052860(*piVar3,piVar3[8],*piVar2,*(float **)(iVar1 + (int)piVar2));
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  return;
}


