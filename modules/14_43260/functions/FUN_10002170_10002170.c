/* Module: 14_43260.dll
   Function: FUN_10002170
   Address: 10002170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_10002170(void *this,short *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_18;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar4 = 10;
  piVar2 = (int *)((int)this + 0x902);
  do {
    *piVar2 = (int)*param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)((int)this + 0x926);
  param_2 = param_2 + 9;
  *param_2 = iVar4;
  if ((0xfff < iVar4) || (iVar4 < -0x1000)) {
    local_8 = 1;
  }
  param_1 = (short *)0x8;
  local_18 = 0x20;
  piVar2 = (int *)((int)this + 0x902);
  piVar6 = (int *)((int)this + 0x8da);
  do {
    piVar5 = piVar2;
    if (iVar4 == 0x1000) {
      iVar4 = 0x1001;
    }
    if (iVar4 == -0x1000) {
      iVar4 = -0x1001;
    }
    iVar4 = 0x1000 - (iVar4 * iVar4 >> 0xc);
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    piVar2 = (int *)((int)piVar5 + local_18);
    if (-1 < local_18) {
      local_c = (int)param_1 + 1;
      piVar3 = piVar6;
      do {
        iVar1 = *piVar2;
        piVar2 = piVar2 + -1;
        *piVar3 = (*(int *)((int)piVar3 + ((int)piVar5 - (int)piVar6)) - (iVar1 * *param_2 >> 0xc))
                  * (int)(0x1000000 / (longlong)iVar4) >> 0xc;
        local_c = local_c + -1;
        piVar3 = piVar3 + 1;
      } while (local_c != 0);
    }
    iVar4 = *(int *)((int)piVar6 + local_18);
    param_2 = param_2 + -1;
    *param_2 = iVar4;
    if ((0xfff < iVar4) || (iVar4 < -0x1000)) {
      local_8 = 1;
    }
    param_1 = (short *)((int)param_1 + -1);
    local_18 = local_18 + -4;
    piVar2 = piVar6;
    piVar6 = piVar5;
  } while (-1 < local_18);
  return local_8;
}


