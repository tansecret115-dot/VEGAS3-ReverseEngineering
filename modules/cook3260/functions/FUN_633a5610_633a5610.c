/* Module: cook3260.dll
   Function: FUN_633a5610
   Address: 633a5610
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a5610(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  FUN_633a38b0(this,*(int *)(&DAT_633a9568 + (int)piVar1 * 4),
               *(int *)(&DAT_633a9590 + (int)piVar1 * 4));
  iVar3 = *(int *)(&DAT_633a9590 + (int)piVar1 * 4);
  if (0 < (int)piVar1) {
    piVar2 = param_1 + 9;
    param_1 = piVar1;
    do {
      FUN_633a38b0(this,piVar2[-8],3);
      if (*piVar2 == -1) {
        FUN_633a38b0(this,0,1);
        iVar3 = iVar3 + 4;
      }
      else {
        FUN_633a38b0(this,*piVar2 + 7U | 0x10,5);
        iVar3 = iVar3 + 8;
      }
      piVar2 = piVar2 + 1;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return iVar3;
}


