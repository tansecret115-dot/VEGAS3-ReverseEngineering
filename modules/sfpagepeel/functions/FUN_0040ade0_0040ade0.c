/* Module: sfpagepeel.dll
   Function: FUN_0040ade0
   Address: 0040ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040ade0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (*param_1 != 0) {
    switch(*param_1) {
    case 1:
      piVar1 = param_1 + 0x10;
      piVar4 = (int *)((int)this + 0x24);
      iVar3 = 4;
      do {
        iVar3 = iVar3 + -1;
        piVar4[-1] = piVar1[-2];
        *piVar4 = *piVar1;
        piVar1 = piVar1 + -4;
        piVar4 = piVar4 + -2;
      } while (iVar3 != 0);
      return;
    case 2:
      puVar5 = (undefined4 *)((int)this + 0x20);
      iVar3 = 4;
      do {
        uVar2 = ftol();
        *puVar5 = uVar2;
        uVar2 = ftol();
        puVar5[1] = uVar2;
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + -2;
      } while (iVar3 != 0);
      return;
    case 3:
      puVar5 = (undefined4 *)((int)this + 0x24);
      iVar3 = 4;
      do {
        uVar2 = ftol();
        puVar5[-1] = uVar2;
        uVar2 = ftol();
        *puVar5 = uVar2;
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + -2;
      } while (iVar3 != 0);
    }
    return;
  }
  piVar1 = param_1 + 2;
  piVar4 = (int *)((int)this + 8);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  return;
}


