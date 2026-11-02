/* Module: sftrans1.dll
   Function: FUN_0046eef0
   Address: 0046eef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0046eef0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*param_2 != 0) {
    switch(*param_2) {
    case 1:
      param_2 = param_2 + 0x10;
      piVar3 = (int *)(param_1 + 0x24);
      iVar2 = 4;
      do {
        iVar2 = iVar2 + -1;
        piVar3[-1] = param_2[-2];
        *piVar3 = *param_2;
        param_2 = param_2 + -4;
        piVar3 = piVar3 + -2;
      } while (iVar2 != 0);
      return;
    case 2:
      puVar4 = (undefined4 *)(param_1 + 0x20);
      iVar2 = 4;
      do {
        uVar1 = ftol();
        *puVar4 = uVar1;
        uVar1 = ftol();
        puVar4[1] = uVar1;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + -2;
      } while (iVar2 != 0);
      return;
    case 3:
      puVar4 = (undefined4 *)(param_1 + 0x24);
      iVar2 = 4;
      do {
        uVar1 = ftol();
        puVar4[-1] = uVar1;
        uVar1 = ftol();
        *puVar4 = uVar1;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + -2;
      } while (iVar2 != 0);
    }
    return;
  }
  piVar3 = param_2 + 2;
  piVar5 = (int *)(param_1 + 8);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  return;
}


