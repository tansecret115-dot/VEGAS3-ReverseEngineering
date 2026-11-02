/* Module: cook3260.dll
   Function: FUN_633a5970
   Address: 633a5970
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_633a5970(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = param_1;
  iVar2 = 0;
  param_1 = (undefined4 *)0x1;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (0 < param_4) {
    piVar3 = param_2;
    param_2 = (int *)(param_3 - (int)param_2);
    do {
      FUN_633a59d0((int)puVar1,(int *)&param_1,*piVar3,*(int *)((int)param_2 + (int)piVar3),iVar2);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < param_4);
  }
  return (int)param_1;
}


