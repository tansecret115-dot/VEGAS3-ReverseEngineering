/* Module: rmto3260.dll
   Function: FUN_662daa30
   Address: 662daa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662daa30(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    iVar1 = FUN_662d87a0(*(void **)((int)this + 0xc),param_1);
  }
  if (-1 < iVar1) {
    *param_1 = *param_1 + *(int *)(*(int *)((int)this + 0x10) + 0x3e);
  }
  return;
}


