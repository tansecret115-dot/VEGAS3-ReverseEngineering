/* Module: g2plug.dll
   Function: FUN_5f81efd0
   Address: 5f81efd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f81efd0(undefined4 *param_1,int param_2,int param_3,int param_4,uint *param_5,uint param_6,
                uint param_7)

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
  iVar1 = FUN_5f81ee40(local_428,param_2,param_3,param_4,param_5,param_6,&local_42c);
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
    if (piVar3 != (int *)0x0) goto LAB_5f81f0b7;
    GlobalFree(pvVar2);
  }
  else {
    pvVar2 = GlobalAlloc(uFlags,uVar5 + local_42c);
    piVar3 = GlobalLock(pvVar2);
  }
  if (piVar3 == (int *)0x0) {
    return -0x7ff8fff2;
  }
LAB_5f81f0b7:
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


