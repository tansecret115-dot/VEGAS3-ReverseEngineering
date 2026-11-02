/* Module: vegas30.exe
   Function: FUN_005410b0
   Address: 005410b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005410b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  bVar2 = false;
  iVar5 = 0;
  local_8 = 0;
  FUN_005b83b0(param_1,1);
  if (param_2 == 0) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    iVar6 = 0;
    iVar4 = *piVar3;
    local_4 = iVar4;
    if (0 < iVar4) {
      do {
        iVar1 = *(int *)(piVar3[2] + iVar6 * 4);
        if (*(int *)(iVar1 + 4) == 3) {
          iVar5 = FUN_0053ff80(param_1,iVar1,&local_8,param_3 != 0);
          bVar2 = true;
          iVar4 = local_4;
        }
      } while ((-1 < iVar5) && (iVar6 = iVar6 + 1, iVar6 < iVar4));
      if (bVar2) goto LAB_0054115a;
    }
    piVar3 = *(int **)(param_1 + 0x228);
    iVar5 = *piVar3;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) break;
      iVar4 = FUN_005401c0(param_1,*(undefined4 *)(piVar3[2] + iVar5 * 4),iVar5);
    } while (-1 < iVar4);
  }
  else if ((*(int *)(param_2 + 4) == 3) &&
          (iVar5 = FUN_0053ff80(param_1,param_2,&local_8,0), iVar5 < 0)) goto LAB_00541172;
LAB_0054115a:
  if ((param_3 == 0) || (iVar5 = FUN_00540f30(param_1), -1 < iVar5)) {
    iVar5 = 0;
  }
LAB_00541172:
  FUN_005b84d0(param_1,1);
  if (local_8 != 0) {
    DAT_0064767c = DAT_0064767c | 0x10;
  }
  return iVar5;
}


