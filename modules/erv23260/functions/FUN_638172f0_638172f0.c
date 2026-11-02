/* Module: erv23260.dll
   Function: FUN_638172f0
   Address: 638172f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_638172f0(void *this,int param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = param_2 & 0xff;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar2 = (uint)(byte)(&DAT_638302b0)[uVar2];
  }
  iVar1 = *(int *)((int)this + uVar2 * 4 + 0x44);
  if (param_5 == 0) {
    iVar6 = *(int *)((int)this + 0x138);
  }
  else {
    iVar6 = *(int *)((int)this + 0x140);
  }
  if (param_1 == 0) {
    iVar4 = 0;
    iVar5 = *param_3;
    if (0 < iVar5) {
      *param_3 = *(int *)(iVar6 + (iVar1 * iVar5 >> 0x11) * 4);
      return;
    }
    if (0 < -iVar5) {
      iVar4 = -*(int *)(iVar6 + (iVar1 * -iVar5 >> 0x11) * 4);
    }
    *param_3 = iVar4;
  }
  else {
    if (param_1 == 1) {
      iVar5 = 8;
      do {
        iVar4 = *param_3;
        iVar3 = 0;
        if (iVar4 < 1) {
          if (0 < -iVar4) {
            iVar3 = -*(int *)(iVar6 + (iVar1 * -iVar4 >> 0x11) * 4);
          }
        }
        else {
          iVar3 = *(int *)(iVar6 + (iVar1 * iVar4 >> 0x11) * 4);
        }
        *param_3 = iVar3;
        param_3 = param_3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
    if (param_1 == 2) {
      iVar5 = 8;
      do {
        iVar4 = *param_3;
        iVar3 = 0;
        if (iVar4 < 1) {
          if (0 < -iVar4) {
            iVar3 = -*(int *)(iVar6 + (iVar1 * -iVar4 >> 0x11) * 4);
          }
        }
        else {
          iVar3 = *(int *)(iVar6 + (iVar1 * iVar4 >> 0x11) * 4);
        }
        *param_3 = iVar3;
        param_3 = param_3 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
  }
  return;
}


