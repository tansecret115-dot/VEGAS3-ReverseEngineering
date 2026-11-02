/* Module: rmbe3260.dll
   Function: FUN_660117e0
   Address: 660117e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660117e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  piVar2 = param_1;
  iVar5 = 0;
  param_1[0x2a] = 0;
  if (param_1[10] != 0) {
    iVar4 = param_1[0x25];
    param_1 = (int *)0x0;
    if ((ushort)iVar4 != 0) {
      do {
        local_8 = 0;
        piVar1 = *(int **)(piVar2[0x24] + ((uint)param_1 & 0xffff) * 4);
        iVar5 = (**(code **)(*piVar1 + 0x24))(piVar1);
        if (iVar5 < 0) goto LAB_6601186a;
        iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1,&local_8);
        if ((-1 < iVar3) && ((uint)piVar2[0x2a] < local_8)) {
          piVar2[0x2a] = local_8;
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((ushort)param_1 < (ushort)iVar4);
    }
    if (-1 < iVar5) {
      iVar5 = (**(code **)(*piVar2 + 0x74))(piVar2);
    }
  }
LAB_6601186a:
  param_1 = (int *)0x0;
  if (0 < piVar2[0x16]) {
    do {
      iVar4 = *(int *)(piVar2[0x15] + (int)param_1 * 4);
      piVar1 = *(int **)(iVar4 + 0x40);
      if (piVar1 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,*(undefined4 *)(iVar4 + 4));
        piVar1 = *(int **)(iVar4 + 0x40);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar4 + 0x40) = 0;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar2[0x16]);
  }
  iVar4 = FUN_66014de0(piVar2);
  if (-1 < iVar5) {
    iVar5 = iVar4;
  }
  return iVar5;
}


