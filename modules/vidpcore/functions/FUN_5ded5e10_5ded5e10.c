/* Module: vidpcore.dll
   Function: FUN_5ded5e10
   Address: 5ded5e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ded5e10(int *param_1,int *param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  piVar2 = param_1;
  iVar1 = param_1[10];
  if (iVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  uVar5 = param_3;
  if ((param_4 < 0) || (iVar6 = param_4, *piVar2 <= param_4)) {
    iVar6 = *piVar2;
  }
  iVar3 = FUN_5ded5d60(piVar2,param_3,&param_1);
  if (param_1 != (int *)0x0) {
    if (param_2 != (int *)0x0) {
      piVar7 = param_2;
      piVar8 = param_1;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar8 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar8 = (int *)((int)piVar8 + 1);
      }
    }
    iVar3 = FUN_5ded4b10(piVar2,iVar6,0,0xffffffff);
    if (iVar3 == 0) {
      if (param_1 != (int *)0x0) goto LAB_5ded5ea1;
    }
    else {
      FUN_5ded4780(piVar2,param_1);
      piVar2[0x13] = 0;
      param_1 = (int *)0x0;
    }
  }
  iVar6 = -1;
LAB_5ded5ea1:
  if (param_5 != (int *)0x0) {
    *param_5 = iVar6;
  }
  if (iVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 3));
  }
  return iVar3;
}


