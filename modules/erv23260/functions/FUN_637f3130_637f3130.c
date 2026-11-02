/* Module: erv23260.dll
   Function: FUN_637f3130
   Address: 637f3130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f3130(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))((int)this + 0xc,param_1);
  if (iVar1 == 0) {
    piVar2 = (int *)((int)this + 0x38);
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
  }
  return;
}


