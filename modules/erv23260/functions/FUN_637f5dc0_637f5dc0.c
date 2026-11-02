/* Module: erv23260.dll
   Function: FUN_637f5dc0
   Address: 637f5dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5dc0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x98);
  iVar3 = (param_2 >> 1) + iVar1;
  if (iVar3 < 0) {
    param_2 = iVar1 * -2;
  }
  else if (*(int *)((int)this + 0x14) + -0x10 < iVar3) {
    param_2 = (*(int *)((int)this + 0x14) - iVar1) * 2 + -0x20;
  }
  iVar1 = *(int *)((int)this + 0x94);
  iVar3 = (param_3 >> 1) + iVar1;
  if (iVar3 < 0) {
    *param_1 = param_2;
    param_1[1] = iVar1 * -2;
    return;
  }
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 + -0x10 < iVar3) {
    *param_1 = param_2;
    param_1[1] = (iVar2 - iVar1) * 2 + -0x20;
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


