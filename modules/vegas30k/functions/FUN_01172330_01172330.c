/* Module: vegas30k.dll
   Function: FUN_01172330
   Address: 01172330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01172330(int *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40);
  *(undefined4 **)((int)param_1 + 0x171) = puVar1;
  *puVar1 = &LAB_011723e0;
  if (*(char *)(*(int *)((int)param_1 + 0x181) + 8) == '\0') {
    puVar1[1] = &LAB_01172430;
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0x71)) {
      piVar4 = (int *)(*(int *)((int)param_1 + 0x79) + 8);
      puVar1 = puVar1 + 2;
      do {
        uVar2 = (**(code **)(param_1[1] + 8))
                          (param_1,1,(piVar4[5] * *(int *)((int)param_1 + 0x105) * 8) / *piVar4,
                           *(undefined4 *)((int)param_1 + 0x109));
        *puVar1 = uVar2;
        iVar3 = iVar3 + 1;
        puVar1 = puVar1 + 1;
        piVar4 = (int *)((int)piVar4 + 0x51);
      } while (iVar3 < *(int *)((int)param_1 + 0x71));
    }
    return;
  }
  puVar1[1] = &LAB_011725f0;
  FUN_011727c0(param_1);
  return;
}


