/* Module: encn3260.dll
   Function: FUN_664d9c30
   Address: 664d9c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d9c30(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x12);
  }
  iVar2 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  FUN_664db1e0(*(int *)((int)this + 0x2c) + 1,iVar2,(double)param_1,iVar3,
               (double)*(uint *)((int)this + 0x3c),*(int *)((int)this + 0x40));
  ftol();
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}


