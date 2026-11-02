/* Module: cook3260.dll
   Function: FUN_633a39b0
   Address: 633a39b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_633a39b0(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x47a4) + 1;
  *(int *)((int)this + 0x47a4) = iVar1;
  if (*(int *)((int)this + 0x47a8) < iVar1) {
    return 0;
  }
  *param_1 = (uint)(**(int **)((int)this + 0x479c) <<
                   ((byte)*(undefined4 *)((int)this + 0x47a0) & 0x1f)) >> 0x1f;
  uVar2 = *(int *)((int)this + 0x47a0) + 1;
  *(int *)((int)this + 0x479c) = *(int *)((int)this + 0x479c) + ((int)uVar2 >> 5) * 4;
  *(uint *)((int)this + 0x47a0) = uVar2 & 0x1f;
  return 1;
}


