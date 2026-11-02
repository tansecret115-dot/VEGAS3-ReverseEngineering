/* Module: rmbe3260.dll
   Function: FUN_660515a0
   Address: 660515a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_660515a0(void *this,uint param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)((int)this + 0xc);
  piVar1 = *(int **)((int)this + 0xc);
  if (*(int **)((int)this + 0xc) == (int *)0x0) {
    *param_2 = piVar3;
    return (int *)0x0;
  }
  while ((piVar2 = piVar1, param_1 < (uint)piVar2[3] || ((uint)piVar2[4] <= param_1))) {
    piVar1 = (int *)*piVar2;
    piVar3 = piVar2;
    if ((int *)*piVar2 == (int *)0x0) {
      *param_2 = piVar2;
      return (int *)0x0;
    }
  }
  *param_2 = piVar3;
  return piVar2;
}


