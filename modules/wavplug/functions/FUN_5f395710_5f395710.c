/* Module: wavplug.dll
   Function: FUN_5f395710
   Address: 5f395710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f395710(void *this,int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  HGLOBAL pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  iVar8 = param_4;
  piVar3 = param_3;
  piVar7 = *(int **)((int)this + 0x88);
  iVar9 = 0;
  if (piVar7 == (int *)0x0) {
    iVar8 = -0x7ff8ffa9;
  }
  else {
    iVar1 = *piVar7;
    if (0x1d < iVar1) {
      return 0;
    }
    local_8 = 0;
    piVar4 = param_3;
    if (0 < iVar1) {
      piVar4 = (int *)piVar7[2];
      do {
        piVar7 = (int *)*piVar4;
        if (piVar7 != (int *)0x0) {
          if (((int *)*piVar7 == param_1) && (piVar7[1] == param_2)) {
            return 0;
          }
          iVar5 = piVar7[3];
          piVar2 = (int *)piVar7[2];
          if ((param_4 < iVar5) || ((param_4 <= iVar5 && (param_3 < piVar2)))) {
            iVar9 = (piVar7[3] - param_4) - (uint)((int *)piVar7[2] < param_3);
            if (iVar9 <= *(int *)((int)this + 0xa4)) {
              if (iVar9 < *(int *)((int)this + 0xa4)) {
                return 0;
              }
              if ((uint)(piVar7[2] - (int)param_3) < *(uint *)((int)this + 0xa0)) {
                return 0;
              }
            }
            break;
          }
          local_8 = iVar9 + 1;
          iVar5 = (param_4 - iVar5) - (uint)(param_3 < piVar2);
          if (iVar5 < *(int *)((int)this + 0xa4)) {
            return 0;
          }
          if ((iVar5 <= *(int *)((int)this + 0xa4)) &&
             ((uint)((int)param_3 - (int)piVar2) < *(uint *)((int)this + 0xa0))) {
            return 0;
          }
        }
        iVar9 = iVar9 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar9 < iVar1);
    }
    param_3 = piVar4;
    pvVar6 = GlobalAlloc(0x42,0x10);
    piVar7 = GlobalLock(pvVar6);
    if (piVar7 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    *piVar7 = (int)param_1;
    piVar7[2] = (int)piVar3;
    piVar7[1] = param_2;
    piVar7[3] = iVar8;
    param_1 = piVar7;
    iVar8 = FUN_5f3a1560(*(int **)((int)this + 0x88),local_8,(int *)&param_1,1);
    if (iVar8 < 0) {
      pvVar6 = GlobalHandle(piVar7);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(piVar7);
      GlobalFree(pvVar6);
      return iVar8;
    }
  }
  return iVar8;
}


