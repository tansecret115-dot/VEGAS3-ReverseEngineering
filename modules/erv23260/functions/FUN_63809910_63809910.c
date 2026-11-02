/* Module: erv23260.dll
   Function: FUN_63809910
   Address: 63809910
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_63809910(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0xc) == 0) {
    *param_1 = 0;
    return (uint)param_1 & 0xffffff00;
  }
  *param_1 = **(int **)(*(int *)((int)this + 4) + 4);
  *param_2 = *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0xc);
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)((int)this + 4) = iVar1;
  FUN_637f2010(*(void **)(iVar1 + 8));
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  uVar2 = FUN_63809620(*(void **)this,*param_1,(byte)*(undefined4 *)((int)this + 0x10));
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


