/* Module: enlv3260.dll
   Function: FUN_661d3370
   Address: 661d3370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_661d3370(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar4 = param_1 % *(uint *)((int)this + 4);
    piVar2 = *(int **)(iVar1 + uVar4 * 4);
    piVar5 = (int *)(iVar1 + uVar4 * 4);
    if (piVar2 != (int *)0x0) {
      do {
        piVar3 = piVar2;
        if (piVar3[2] == param_1) {
          *piVar5 = *piVar3;
          FUN_661d3270(this,piVar3);
          return 1;
        }
        piVar2 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
      return 0;
    }
  }
  return 0;
}


