/* Module: encn3260.dll
   Function: FUN_664bb1d0
   Address: 664bb1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664bb1d0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = *(undefined4 **)this;
  if (param_1 <= (int)puVar1[-1]) {
    return puVar1[-1];
  }
  uVar2 = puVar1[-2];
  FUN_664bb380(this,param_1);
  puVar4 = puVar1;
  puVar5 = *(undefined4 **)this;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_664bb250(puVar1 + -3);
  *(uint *)(*(int *)this + -8) = uVar2;
  return param_1;
}


