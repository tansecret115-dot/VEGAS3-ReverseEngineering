/* Module: rmto3260.dll
   Function: FUN_662ed6b0
   Address: 662ed6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662ed6b0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = (*(int *)((int)this + 4) - param_1) - param_2;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(*(int *)this + (param_2 + param_1) * 4);
    puVar3 = (undefined4 *)(*(int *)this + param_1 * 4);
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - param_2;
  return;
}


