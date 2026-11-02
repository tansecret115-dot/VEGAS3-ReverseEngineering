/* Module: sfppack3.dll
   Function: FUN_5cc784c8
   Address: 5cc784c8
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cc784c8(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_5cc7849a(this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_5cc784ba(iVar1);
    if (iVar2 == param_1) break;
    if (iVar1 == 0) {
      iVar1 = *(int *)this;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return iVar1;
}


