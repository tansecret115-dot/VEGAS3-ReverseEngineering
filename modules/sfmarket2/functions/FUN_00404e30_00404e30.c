/* Module: sfmarket2.dll
   Function: FUN_00404e30
   Address: 00404e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00404e30(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x1be0) != 0) {
    piVar1 = *(int **)((int)this + 0x1be4);
    iVar4 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar3 <= iVar4) ||
         (((iVar2 = *(int *)(piVar1[2] + iVar4 * 4), iVar2 != 0 &&
           (param_1 == *(int *)(iVar2 + 0x20c))) && (param_2 == *(int *)(iVar2 + 0x210))))) break;
      iVar4 = iVar4 + 1;
    }
  }
  return iVar2;
}


