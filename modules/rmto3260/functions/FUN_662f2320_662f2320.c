/* Module: rmto3260.dll
   Function: FUN_662f2320
   Address: 662f2320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f2320(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)((int)this + 0xc);
  piVar2 = *(int **)((int)this + 0xc);
  if (*(int **)((int)this + 0xc) == (int *)0x0) {
    return 0;
  }
  do {
    piVar3 = piVar2;
    if (piVar3 == param_1) {
      *piVar4 = *piVar3;
      iVar1 = piVar3[3];
      operator_delete(piVar3);
      return iVar1;
    }
    piVar2 = (int *)*piVar3;
    piVar4 = piVar3;
  } while ((int *)*piVar3 != (int *)0x0);
  return 0;
}


