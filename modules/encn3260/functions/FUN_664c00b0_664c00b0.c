/* Module: encn3260.dll
   Function: FUN_664c00b0
   Address: 664c00b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664c00b0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = ((int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2) + 1;
  *(int *)((int)this + 4) = iVar1;
  pvVar2 = operator_new(iVar1 * 4);
  *(void **)this = pvVar2;
  FUN_664c0250(this);
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      if (param_2 < 4) {
        if (2 < param_2) {
          iVar4 = (uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 2 + param_1),
                                          *(undefined1 *)(iVar1 + 1 + param_1)),
                                 *(undefined1 *)(iVar1 + param_1)) << 8;
          goto LAB_664c0159;
        }
        if (1 < param_2) {
          iVar4 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 1 + param_1),
                                 *(undefined1 *)(iVar1 + param_1)) << 0x10;
          goto LAB_664c0159;
        }
        if (0 < param_2) {
          iVar4 = (uint)*(byte *)(iVar1 + param_1) << 0x18;
          goto LAB_664c0159;
        }
      }
      else {
        iVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 3 + param_1),
                                           *(undefined1 *)(iVar1 + 2 + param_1)),
                                  *(undefined1 *)(iVar1 + 1 + param_1)),
                         *(undefined1 *)(iVar1 + param_1));
LAB_664c0159:
        *(int *)(*(int *)this + iVar3 * 4) = iVar4;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
      param_2 = param_2 + -4;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return this;
}


