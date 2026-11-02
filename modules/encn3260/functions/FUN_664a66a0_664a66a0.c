/* Module: encn3260.dll
   Function: FUN_664a66a0
   Address: 664a66a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a66a0(void *this,int *param_1)

{
  int iVar1;
  
  *param_1 = *param_1 + *(int *)((int)this + 0xcc);
  param_1[1] = param_1[1] + *(int *)((int)this + 0xd0);
  for (iVar1 = *(int *)((int)this + 0x68); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
    *param_1 = *param_1 + *(int *)(iVar1 + 0xcc);
    param_1[1] = param_1[1] + *(int *)(iVar1 + 0xd0);
  }
  return;
}


