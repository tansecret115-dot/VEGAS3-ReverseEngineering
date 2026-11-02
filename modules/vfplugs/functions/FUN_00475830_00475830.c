/* Module: vfplugs.dll
   Function: FUN_00475830
   Address: 00475830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00475830(void *this,int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  
  iVar3 = FUN_004756a0(this,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 4;
  bVar8 = true;
  piVar4 = param_1;
  piVar6 = &DAT_00486970;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *piVar4 == *piVar6;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar3 = 4;
    bVar8 = true;
    piVar4 = param_1;
    piVar6 = &DAT_00486980;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *piVar4 == *piVar6;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar3 = 0x10;
      pcVar7 = (char *)&DAT_00490cc8;
      do {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = iVar3 + -1;
        cVar2 = *pcVar7;
        iVar5 = *param_1;
        param_1 = (int *)((int)param_1 + 1);
        pcVar7 = pcVar7 + 1;
      } while ((char)iVar5 == cVar2);
      return 0;
    }
  }
  puVar1 = (undefined4 *)((int)this + 0x46c);
  iVar3 = (**(code **)(**(int **)((int)this + 0x468) + 0x28))
                    (*(int **)((int)this + 0x468),(int)this + 0x4a0,0,0,&DAT_004866d0,puVar1,0);
  if (-1 < iVar3) {
    iVar3 = *(int *)((int)this + 0x490);
    iVar5 = iVar3 * *(int *)((int)this + 0x56c) + *(int *)((int)this + 0x488);
    if (iVar3 < *(int *)((int)this + 0x498)) {
      do {
        (**(code **)(*(int *)*puVar1 + 0x1c))((int *)*puVar1,0,iVar3);
        (**(code **)(*(int *)*puVar1 + 0x28))
                  ((int *)*puVar1,iVar5,*(int *)((int)this + 0x494) - *(int *)((int)this + 0x48c),0)
        ;
        iVar5 = iVar5 + *(int *)((int)this + 0x56c);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)this + 0x498));
    }
    return 1;
  }
  *puVar1 = 0;
  return 0;
}


