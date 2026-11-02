/* Module: sftrans1.dll
   Function: FUN_004de580
   Address: 004de580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004de580(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  UINT uFlags;
  HGLOBAL pvVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_42c;
  int local_428 [4];
  int local_418;
  int local_408;
  
  *param_1 = 0;
  iVar1 = FUN_004de3f0(local_428,param_2,param_3,param_4,param_5,param_6,&local_42c);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_418 == 3) {
    local_408 = 0xc;
  }
  else {
    local_408 = local_408 * 4;
  }
  uVar5 = local_408 + local_428[0];
  uFlags = 2;
  if ((param_7 & 1) != 0) {
    uFlags = 0x42;
  }
  if ((int)param_7 < 0) {
    pvVar2 = GlobalAlloc(uFlags,uVar5 + local_42c);
    if (pvVar2 == (HGLOBAL)0x0) {
      return -0x7ff8fff2;
    }
    piVar3 = GlobalLock(pvVar2);
    if (piVar3 != (int *)0x0) goto LAB_004de667;
    GlobalFree(pvVar2);
  }
  else {
    pvVar2 = GlobalAlloc(uFlags,uVar5 + local_42c);
    piVar3 = GlobalLock(pvVar2);
  }
  if (piVar3 == (int *)0x0) {
    return -0x7ff8fff2;
  }
LAB_004de667:
  piVar6 = local_428;
  piVar7 = piVar3;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  *param_1 = piVar3;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  return 0;
}


