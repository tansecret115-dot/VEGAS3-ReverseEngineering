/* Module: rmbe3260.dll
   Function: FUN_660572a0
   Address: 660572a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_660572a0(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = param_1[1];
  uVar3 = uVar1 % *(uint *)((int)this + 0xc);
  piVar4 = *(int **)(*(int *)((int)this + 0x18) + uVar3 * 4);
  piVar2 = (int *)(*(int *)((int)this + 0x18) + uVar3 * 4);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  do {
    if (param_1 == piVar4) {
      *piVar2 = piVar4[3];
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      if (piVar4 != (int *)0x0) {
        operator_delete(piVar4);
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      return uVar1;
    }
    piVar2 = piVar4 + 3;
    piVar4 = (int *)piVar4[3];
  } while (piVar4 != (int *)0x0);
  return 0;
}


