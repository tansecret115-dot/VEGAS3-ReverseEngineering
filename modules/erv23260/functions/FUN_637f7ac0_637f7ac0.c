/* Module: erv23260.dll
   Function: FUN_637f7ac0
   Address: 637f7ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f7ac0(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 * 0x10 + 7;
  if (*(uint *)((int)this + 0x34) < uVar5) {
    if (*(void **)((int)this + 0x1aec) != (void *)0x0) {
      FUN_637f1080(*(void **)((int)this + 0x1aec));
    }
    puVar2 = FUN_637f1030(uVar5,0);
    *(undefined4 **)((int)this + 0x1aec) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 2;
    }
    *(uint *)((int)this + 0x34) = uVar5;
  }
  uVar4 = *(int *)((int)this + 0x1aec) + 7U & 0xfffffff8;
  uVar5 = 0;
  piVar3 = (int *)((int)this + 0x1a30);
  do {
    piVar3[-1] = (uVar5 - 7 & 0xf) * param_1 + uVar4;
    *piVar3 = (uVar5 - 4 & 0xf) * param_1 + uVar4;
    uVar1 = uVar5 - 1;
    uVar5 = uVar5 + 1;
    piVar3[1] = (uVar1 & 0xf) * param_1 + uVar4;
    piVar3 = piVar3 + 3;
  } while (uVar5 < 0x10);
  return 0;
}


