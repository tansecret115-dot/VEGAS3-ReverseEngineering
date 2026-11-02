/* Module: rmbe3260.dll
   Function: FUN_66050500
   Address: 66050500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66050500(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_660515a0((void *)((int)this + 0x10),(uint)param_1,&param_1);
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[5], piVar2[5] = iVar1 + -1, iVar1 + -1 == 0)) {
    *param_1 = *piVar2;
    operator_delete((void *)piVar2[3]);
    operator_delete(piVar2);
  }
  return;
}


