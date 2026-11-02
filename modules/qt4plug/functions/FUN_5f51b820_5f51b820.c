/* Module: qt4plug.dll
   Function: FUN_5f51b820
   Address: 5f51b820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f51b820(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = param_1;
  iVar2 = -0x7ffb1ff6;
  *param_1 = 0;
  if (*(int *)((int)this + 0x34c) == 0) {
    (**(code **)(*(int *)this + 0x3c))(this,&param_1);
    iVar2 = FUN_5f51b1c0(this);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x120)) {
    piVar5 = *(int **)((int)this + 0x34c);
    while (*piVar5 != 1) {
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xc;
      if (*(int *)((int)this + 0x120) <= iVar4) {
        return iVar2;
      }
    }
    uVar3 = ftol();
    *puVar1 = uVar3;
    iVar2 = 0;
  }
  return iVar2;
}


