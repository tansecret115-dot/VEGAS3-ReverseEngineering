/* Module: erv23260.dll
   Function: FUN_6381d000
   Address: 6381d000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6381d000(void *this,int *param_1)

{
  int iVar1;
  
  for (iVar1 = (-(uint)(*(int *)((int)this + 0x334) != 0) & 6) + 6; iVar1 != 0; iVar1 = iVar1 + -1)
  {
    *(undefined4 *)*param_1 = 0;
    *param_1 = *param_1 + 4;
  }
  return;
}


