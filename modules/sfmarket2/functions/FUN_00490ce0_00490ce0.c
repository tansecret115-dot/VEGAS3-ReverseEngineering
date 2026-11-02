/* Module: sfmarket2.dll
   Function: FUN_00490ce0
   Address: 00490ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00490ce0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = *(int *)((int)param_1 + 0xe1);
  if (iVar4 == 0) {
    if (4 < *(int *)((int)param_1 + 0x71)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x71);
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = 0;
    *(int *)((int)param_1 + 0x111) = *(int *)((int)param_1 + 0x71);
    if (0 < *(int *)((int)param_1 + 0x71)) {
      iVar1 = 0;
      piVar2 = (int *)((int)param_1 + 0x115);
      do {
        iVar4 = iVar4 + 1;
        *piVar2 = *(int *)((int)param_1 + 0x79) + iVar1;
        iVar1 = iVar1 + 0x51;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)((int)param_1 + 0x71));
    }
    *(undefined4 *)((int)param_1 + 0x159) = 0;
    *(undefined4 *)((int)param_1 + 0x161) = 0;
    *(undefined4 *)((int)param_1 + 0x165) = 0;
    *(undefined4 *)((int)param_1 + 0x15d) = 0x3f;
    return;
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x169) + 0x1a);
  *(undefined4 *)((int)param_1 + 0x111) = *(undefined4 *)(iVar4 + iVar1 * 0x24);
  piVar2 = (int *)(iVar4 + iVar1 * 0x24);
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + iVar1 * 0x24)) {
    piVar5 = (int *)((int)param_1 + 0x115);
    piVar6 = piVar2;
    do {
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + 1;
      *piVar5 = *piVar6 * 0x51 + *(int *)((int)param_1 + 0x79);
      piVar5 = piVar5 + 1;
    } while (iVar3 < *piVar2);
  }
  *(int *)((int)param_1 + 0x159) = piVar2[5];
  *(int *)((int)param_1 + 0x15d) = piVar2[6];
  *(int *)((int)param_1 + 0x161) = piVar2[7];
  *(int *)((int)param_1 + 0x165) = piVar2[8];
  return;
}


