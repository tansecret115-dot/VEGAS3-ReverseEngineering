/* Module: rmme3260.dll
   Function: FUN_662506b0
   Address: 662506b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662506b0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)this == 0) {
    FUN_66250070(this);
  }
  puVar1 = *(undefined4 **)this;
  if ((1 < (int)puVar1[-3]) || ((int)puVar1[-1] < param_1)) {
    iVar2 = puVar1[-2];
    if (param_1 < iVar2) {
      param_1 = iVar2;
    }
    FUN_662501b0(this,param_1);
    puVar5 = *(undefined4 **)this;
    puVar4 = puVar1;
    for (uVar3 = iVar2 + 1U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = iVar2 + 1U & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(*(int *)this + -8) = iVar2;
    FUN_66250080(puVar1 + -3);
  }
  return *(int *)this;
}


