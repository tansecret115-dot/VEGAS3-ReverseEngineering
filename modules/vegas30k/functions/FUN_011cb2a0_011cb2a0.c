/* Module: vegas30k.dll
   Function: FUN_011cb2a0
   Address: 011cb2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011cb2a0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1 + 600;
  if (param_2 != 0) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (((*(int *)(iVar2 + 0x1c) == param_2) &&
          (*(int *)(iVar2 + 0x18) == *(int *)(*(int *)(param_1 + 0x60) + 4))) &&
         (*(int *)(iVar2 + 0x20) == param_3)) {
        if (iVar2 != 0) {
          return;
        }
        break;
      }
    }
    puVar4 = calloc(1,0x28);
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    puVar4[7] = param_2;
    puVar4[8] = param_3;
    puVar4[1] = 0x3ff00000;
    puVar4[3] = 0;
    puVar4[5] = 0;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 4);
    puVar4[9] = 0;
    puVar4[6] = uVar1;
    iVar2 = param_1 + 600;
    for (iVar3 = *(int *)(param_1 + 0x27c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
      iVar2 = iVar3;
    }
    *(undefined4 **)(iVar2 + 0x24) = puVar4;
  }
  return;
}


