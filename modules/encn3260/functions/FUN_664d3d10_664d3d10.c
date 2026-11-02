/* Module: encn3260.dll
   Function: FUN_664d3d10
   Address: 664d3d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d3d10(void *this,int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = (**(code **)(*param_3 + 0x28))();
  if (iVar3 == 1) {
    (**(code **)(*piVar1 + 0x4c))(&param_3);
    iVar3 = FUN_664d5150(this,param_3);
    if (iVar3 == -0x7fffbffb) {
      return 0;
    }
  }
  iVar3 = param_4;
  puVar2 = *(uint **)((int)this + 8);
  if ((param_4 - 1U <= *puVar2) && (piVar1 = (int *)(puVar2[4] + (param_4 - 1U) * 4), *piVar1 != 0))
  {
    *piVar1 = 0;
    puVar2[2] = puVar2[2] - 1;
  }
  (**(code **)(*param_1 + 8))(param_2);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  return iVar3;
}


