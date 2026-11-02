/* Module: cook3260.dll
   Function: FUN_633a3930
   Address: 633a3930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a3930(void *this,int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x47a4) + param_1;
  *(int *)((int)this + 0x47a4) = iVar3;
  if (*(int *)((int)this + 0x47a8) < iVar3) {
    return 0;
  }
  uVar2 = **(int **)((int)this + 0x479c) << ((byte)*(int *)((int)this + 0x47a0) & 0x1f);
  iVar3 = *(int *)((int)this + 0x47a0) + param_1;
  *(int *)((int)this + 0x47a0) = iVar3;
  if (0x1f < iVar3) {
    puVar1 = (uint *)(*(int **)((int)this + 0x479c) + 1);
    iVar3 = iVar3 + -0x20;
    *(uint **)((int)this + 0x479c) = puVar1;
    *(int *)((int)this + 0x47a0) = iVar3;
    if (iVar3 != 0) {
      uVar2 = uVar2 | *puVar1 >> ((char)param_1 - (char)iVar3 & 0x1fU);
    }
  }
  *param_2 = uVar2 >> (0x20U - (char)param_1 & 0x1f);
  return param_1;
}


