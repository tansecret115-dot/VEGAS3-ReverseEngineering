/* Module: sfmarket2.dll
   Function: FUN_0047d050
   Address: 0047d050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d050(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)((int)param_1 + 0x71)) {
    piVar3 = (int *)(*(int *)((int)param_1 + 0x79) + 0x10);
    do {
      cVar2 = FUN_0047d140(param_1,*piVar3);
      iVar4 = iVar4 + CONCAT31(extraout_var,cVar2);
      iVar5 = iVar5 + 1;
      piVar3 = (int *)((int)piVar3 + 0x51);
    } while (iVar5 < *(int *)((int)param_1 + 0x71));
  }
  if (((*(char *)((int)param_1 + 0xe6) == '\0') && ((char)param_1[0x41] == '\0')) &&
     (*(int *)((int)param_1 + 0x6d) == 8)) {
    iVar5 = *(int *)((int)param_1 + 0x71);
    bVar1 = true;
    if (0 < iVar5) {
      piVar3 = (int *)(*(int *)((int)param_1 + 0x79) + 0x18);
      do {
        if ((1 < piVar3[-1]) || (1 < *piVar3)) {
          bVar1 = false;
        }
        piVar3 = (int *)((int)piVar3 + 0x51);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((iVar4 != 0) && (bVar1)) {
      bVar1 = false;
      *(undefined4 *)(*param_1 + 0x14) = 0x4a;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  else {
    bVar1 = false;
  }
  if (*(char *)((int)param_1 + 0xe6) != '\0') {
    FUN_0047d210(param_1,0xc9);
    return;
  }
  if ((char)param_1[0x41] != '\0') {
    FUN_0047d210(param_1,0xc2);
    return;
  }
  if (bVar1) {
    FUN_0047d210(param_1,0xc0);
    return;
  }
  FUN_0047d210(param_1,0xc1);
  return;
}


