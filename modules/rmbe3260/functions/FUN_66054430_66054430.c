/* Module: rmbe3260.dll
   Function: FUN_66054430
   Address: 66054430
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66054430(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    puVar4 = *(undefined4 **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  piVar1 = (int *)*puVar4;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*piVar1 + 0x5c))();
  if (iVar3 != 0) {
    return 0;
  }
  piVar2 = (int *)puVar4[4];
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*(int *)this + 8))(piVar2,puVar4,piVar1);
  if (piVar1[8] != 0) {
    (**(code **)(*piVar1 + 0x50))(piVar2,puVar4,param_1);
    return param_1;
  }
  iVar3 = FUN_660544e0(this,piVar2,puVar4,piVar1,param_1);
  return iVar3;
}


