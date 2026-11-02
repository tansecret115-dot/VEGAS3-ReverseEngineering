/* Module: cook3260.dll
   Function: FUN_633a4830
   Address: 633a4830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x633a48d4) */

int __thiscall FUN_633a4830(void *this,int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  if (*param_1 < -6) {
    *param_1 = -6;
  }
  if (0x39 < *param_1) {
    *param_1 = 0x39;
  }
  iVar6 = *(int *)((int)this + 0x20) + -2;
  if (-1 < iVar6) {
    piVar4 = param_1 + iVar6;
    iVar6 = *(int *)((int)this + 0x20) + -1;
    do {
      if (*piVar4 < piVar4[1] + -0xb) {
        *piVar4 = piVar4[1] + -0xb;
      }
      piVar4 = piVar4 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*param_1 + 6 < 0) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if (0x3f < *param_1 + 6) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  iVar6 = *param_1;
  *(undefined4 *)((int)this + 0x1c4) = 6;
  param_1 = (int *)0x6;
  iVar7 = 1;
  *(int *)((int)this + 0x2c) = iVar6 + 6;
  if (1 < *(int *)((int)this + 0x20)) {
    piVar4 = (int *)((int)this + 0x1c8);
    do {
      piVar3 = piVar2 + 1;
      iVar6 = *piVar3 - *piVar2;
      if (iVar6 < -0xc) {
        iVar6 = -0xc;
        *piVar3 = *piVar2 + -0xc;
      }
      if (0xb < iVar6) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      if (iVar7 < *(int *)((int)this + 0x18) * 2) {
        iVar5 = iVar7 >> 1;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
      }
      else {
        iVar5 = iVar7 - *(int *)((int)this + 0x18);
      }
      if (*(int *)((int)this + 0xc) <= iVar5) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      iVar6 = (iVar6 + iVar5 * 0x18) * 4;
      piVar4[-0x66] = *(int *)(iVar6 + 0x633afa00);
      iVar6 = *(int *)(&DAT_633ac770 + iVar6);
      *piVar4 = iVar6;
      param_1 = (int *)((int)param_1 + iVar6);
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
      piVar2 = piVar3;
    } while (iVar7 < *(int *)((int)this + 0x20));
  }
  return (int)param_1;
}


