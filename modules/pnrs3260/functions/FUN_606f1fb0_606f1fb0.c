/* Module: pnrs3260.dll
   Function: FUN_606f1fb0
   Address: 606f1fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_606f1fb0(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_606f1dd0(this,param_2);
  puVar2 = (undefined4 *)FUN_606f2010(this,iVar1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    return;
  }
  iVar3 = FUN_606f2040(param_2,param_1);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(*(int *)((int)this + 8) + iVar1 * 4);
  *(int *)(*(int *)((int)this + 8) + iVar1 * 4) = iVar3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


