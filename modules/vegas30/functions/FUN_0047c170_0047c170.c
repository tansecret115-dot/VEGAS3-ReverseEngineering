/* Module: vegas30.exe
   Function: FUN_0047c170
   Address: 0047c170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c170(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = param_4 < 0;
  if (bVar5) {
    param_4 = *(int *)(param_1 + 0x40);
  }
  piVar1 = *(int **)(param_1 + 0x18);
  iVar2 = 0;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((param_4 < 0) || (iVar3 + -1 < param_4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar1[2] + param_4 * 4);
  }
  if ((iVar3 == 0) || (iVar2 = FUN_0047c230(param_1,iVar3,param_2,param_3), iVar2 == 0)) {
    if (!bVar5) goto LAB_0047c21c;
    param_4 = 0;
    iVar3 = **(int **)(param_1 + 0x18);
    if (iVar3 < 1) goto LAB_0047c21c;
    do {
      if (param_4 != *(int *)(param_1 + 0x40)) {
        piVar1 = *(int **)(param_1 + 0x18);
        if (piVar1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar1;
        }
        if ((param_4 < 0) || (iVar4 + -1 < param_4)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar1[2] + param_4 * 4);
        }
        if ((iVar4 != 0) && (iVar2 = FUN_0047c230(param_1,iVar4,param_2,param_3), iVar2 != 0))
        goto LAB_0047c215;
      }
      param_4 = param_4 + 1;
    } while (param_4 < iVar3);
  }
  else {
LAB_0047c215:
    *(int *)(param_1 + 0x44) = param_4;
  }
  if (iVar2 != 0) {
    return;
  }
LAB_0047c21c:
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  return;
}


