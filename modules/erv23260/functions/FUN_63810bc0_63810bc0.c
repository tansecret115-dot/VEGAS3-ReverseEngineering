/* Module: erv23260.dll
   Function: FUN_63810bc0
   Address: 63810bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63810bc0(void *this,uint param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    param_1 = (uint)(byte)(&DAT_638302b0)[param_1];
  }
  iVar4 = *(int *)((int)this + param_1 * 4 + 0x44);
  if (param_6 == 0) {
    iVar3 = *(int *)((int)this + 0x138);
  }
  else {
    iVar3 = *(int *)((int)this + 0x140);
  }
  if (param_4 == 0) {
    iVar2 = (int)param_1 / 2;
  }
  else {
    iVar2 = 0;
  }
  param_1 = 0x40;
  piVar6 = param_3;
  do {
    iVar1 = *(int *)(((int)param_2 - (int)param_3) + (int)piVar6);
    iVar5 = 0;
    if (iVar1 < 1) {
      if (0 < -(iVar1 + iVar2)) {
        iVar5 = -*(int *)(iVar3 + (iVar4 * -(iVar1 + iVar2) >> 0x11) * 4);
      }
    }
    else if (0 < iVar1 - iVar2) {
      iVar5 = *(int *)(iVar3 + (iVar4 * (iVar1 - iVar2) >> 0x11) * 4);
    }
    *piVar6 = iVar5;
    piVar6 = piVar6 + 1;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  if ((param_4 != 0) && (*(int *)((int)this + 0x178) == 0)) {
    if (param_6 != 0) {
      iVar3 = (int)(*param_2 + (*param_2 >> 0x1f & 7U)) >> 3;
      iVar4 = 1;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar4 < 0x400) {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        *param_3 = iVar3;
        return;
      }
      *param_3 = 0x3ff;
      return;
    }
    iVar3 = (int)(*param_2 + (*param_2 >> 0x1f & 7U)) >> 3;
    iVar4 = 1;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    if (0xfe < iVar4) {
      *param_3 = 0xfe;
      return;
    }
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *param_3 = iVar3;
  }
  return;
}


