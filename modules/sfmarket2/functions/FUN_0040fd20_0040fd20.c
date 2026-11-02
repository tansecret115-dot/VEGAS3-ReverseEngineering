/* Module: sfmarket2.dll
   Function: FUN_0040fd20
   Address: 0040fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040fd20(void *this,undefined4 *param_1,int ***param_2)

{
  int ***pppiVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_18;
  int ***pppiStack_14;
  int local_10;
  void *local_c;
  undefined4 *puStack_8;
  LPCRITICAL_SECTION local_4;
  
  local_4 = (LPCRITICAL_SECTION)((int)this + 4);
  local_c = this;
  EnterCriticalSection(local_4);
  pppiVar1 = param_2;
  if (param_1 == (undefined4 *)0x0) {
    piVar3 = (int *)((int)this + 0x24);
  }
  else {
    piVar3 = (int *)((int)this + 0x20);
  }
  iVar4 = -0x7fffbffb;
  if (*piVar3 != 0) goto LAB_0040ffa9;
  local_18 = 0;
  local_10 = 0;
  iVar4 = (*(code *)(*param_2)[3])(param_2,&local_10,4,&local_18);
  if (iVar4 < 0) goto LAB_0040ffa9;
  if (local_18 != 4) {
    iVar4 = -0x7ffb1fc7;
    goto LAB_0040ffa9;
  }
  if (local_10 != 2) {
    iVar4 = -0x7ffb1f50;
    goto LAB_0040ffa9;
  }
  if (param_1 == (undefined4 *)0x0) {
    param_2 = (int ***)0x0;
    pppiStack_14 = (int ***)0x0;
    iVar4 = (*(code *)(*pppiVar1)[3])(pppiVar1,&pppiStack_14,4,&param_2);
    if (-1 < iVar4) {
      if (param_2 == (int ***)0x4) {
        if (pppiStack_14 == (int ***)0x4) {
          param_2 = (int ***)0x0;
          iVar4 = (*(code *)(*pppiVar1)[3])(pppiVar1,&puStack_8,4,&param_2);
          if (-1 < iVar4) {
            if (pppiStack_14 != param_2) goto LAB_0040fe17;
            *(undefined4 **)((int)local_c + 0x28) = puStack_8;
          }
        }
        else {
          iVar4 = -0x7ffb1f50;
        }
      }
      else {
LAB_0040fe17:
        iVar4 = -0x7ffb1fc8;
      }
    }
    if (iVar4 < 0) goto LAB_0040ffa9;
    param_2 = (int ***)0x0;
    pppiStack_14 = (int ***)0x0;
    iVar4 = (*(code *)(*pppiVar1)[3])(pppiVar1,&pppiStack_14,4,&param_2);
    if (-1 < iVar4) {
      if (param_2 == (int ***)0x4) {
        if (pppiStack_14 == (int ***)0x4) {
          param_2 = (int ***)0x0;
          iVar4 = (*(code *)(*pppiVar1)[3])(pppiVar1,&puStack_8,4,&param_2);
          if (-1 < iVar4) {
            if (pppiStack_14 != param_2) goto LAB_0040fe90;
            *(undefined4 **)((int)local_c + 0x2c) = puStack_8;
          }
        }
        else {
          iVar4 = -0x7ffb1f50;
        }
      }
      else {
LAB_0040fe90:
        iVar4 = -0x7ffb1fc8;
      }
    }
  }
  if ((-1 < iVar4) && (iVar4 = FUN_00428b40(piVar3,4,-1,-1,0x40000000), -1 < iVar4)) {
    param_2 = (int ***)0x0;
    local_18 = 0;
    iVar4 = (*(code *)(*pppiVar1)[3])(pppiVar1,&param_2,4,&local_18);
    if (-1 < iVar4) {
      if (local_18 == 4) {
        local_c = (void *)0x0;
        if (0 < (int)param_2) {
          bVar6 = param_1 == (undefined4 *)0x0;
          do {
            param_1 = (undefined4 *)0x0;
            iVar4 = FUN_0040ec60(pppiVar1,(int ***)(uint)bVar6,&param_1);
            if (iVar4 < 0) goto LAB_0040ff62;
            puStack_8 = param_1;
            iVar4 = FUN_00427510((int *)*piVar3,-1,(int *)&puStack_8,1);
            if (iVar4 < 0) {
              FUN_0040f560(param_1);
              goto LAB_0040ff62;
            }
            local_c = (void *)((int)local_c + 1);
          } while ((int)local_c < (int)param_2);
        }
        if (-1 < iVar4) goto LAB_0040ffa9;
      }
      else {
        iVar4 = -0x7ffb1fc7;
      }
    }
LAB_0040ff62:
    piVar2 = (int *)*piVar3;
    iVar5 = 0;
    if (0 < *piVar2) {
      do {
        FUN_0040f560(*(undefined4 **)(piVar2[2] + iVar5 * 4));
        piVar2 = (int *)*piVar3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *piVar2);
    }
    FUN_00428a70((int *)*piVar3);
    *piVar3 = 0;
  }
LAB_0040ffa9:
  LeaveCriticalSection(local_4);
  return iVar4;
}


