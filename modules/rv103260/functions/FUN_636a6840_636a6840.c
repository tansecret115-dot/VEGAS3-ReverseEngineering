/* Module: rv103260.dll
   Function: FUN_636a6840
   Address: 636a6840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636a6840(void *this,int *param_1,void *param_2,void *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0xffffffff) {
    uVar2 = 0;
    if (*(uint *)((int)this + 4) != 0) {
      piVar1 = *(int **)this;
      do {
        piVar4 = (int *)*piVar1;
        if (piVar4 != (int *)0x0) break;
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar2 < *(uint *)((int)this + 4));
    }
  }
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    uVar2 = piVar4[1] + 1;
    if (uVar2 < *(uint *)((int)this + 4)) {
      piVar1 = (int *)(*(int *)this + uVar2 * 4);
      do {
        iVar3 = *piVar1;
        if (iVar3 != 0) break;
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar2 < *(uint *)((int)this + 4));
    }
  }
  *param_1 = iVar3;
  FUN_636a6210(param_2,piVar4 + 2);
  FUN_636a6210(param_3,piVar4 + 5);
  return;
}


