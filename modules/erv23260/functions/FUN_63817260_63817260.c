/* Module: erv23260.dll
   Function: FUN_63817260
   Address: 63817260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63817260(void *this,uint param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_5 != 0) && (param_4 != 0)) {
    param_1 = (uint)(byte)(&DAT_638302b0)[param_1];
  }
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x44);
  if (param_5 == 0) {
    iVar5 = *(int *)((int)this + 0x138);
  }
  else {
    iVar5 = *(int *)((int)this + 0x140);
  }
  iVar4 = param_2 - (int)param_3;
  param_1 = 0x3f;
  do {
    param_3 = param_3 + 1;
    iVar2 = *(int *)(iVar4 + (int)param_3);
    iVar3 = 0;
    if (iVar2 < 1) {
      if (0 < -iVar2) {
        iVar3 = -*(int *)(iVar5 + (iVar1 * -iVar2 >> 0x11) * 4);
      }
    }
    else {
      iVar3 = *(int *)(iVar5 + (iVar1 * iVar2 >> 0x11) * 4);
    }
    *param_3 = iVar3;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return;
}


