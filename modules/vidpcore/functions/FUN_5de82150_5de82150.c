/* Module: vidpcore.dll
   Function: FUN_5de82150
   Address: 5de82150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de82150(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  double local_10;
  double local_8;
  
  piVar5 = param_1;
  uVar8 = 0;
  param_1 = (int *)0x0;
  iVar2 = *piVar5;
  if (piVar5[1] == 0) {
    return 1;
  }
  dVar3 = (double)param_2;
  dVar4 = (double)param_3;
  do {
    pvVar1 = (void *)(iVar2 + uVar8 * 4);
    local_10 = ((double)(uint)piVar5[2] + (double)uVar8) / dVar3;
    local_8 = (double)(uint)piVar5[3] / dVar4;
    uVar6 = FUN_5de81ad0(&DAT_5df28588,4,&local_10,0xff101010,&param_1,&param_3);
    if (param_3 == 0) {
      SfSetMemoryDWords(pvVar1,uVar6,1);
    }
    else {
      iVar7 = ftol();
      SfSetMemoryDWords(pvVar1,uVar6,iVar7 + 1);
      uVar8 = uVar8 + iVar7;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < (uint)piVar5[1]);
  return 1;
}


