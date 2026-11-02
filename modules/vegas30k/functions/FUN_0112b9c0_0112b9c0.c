/* Module: vegas30k.dll
   Function: FUN_0112b9c0
   Address: 0112b9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112b9c0(int param_1,void *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  void *_Dst_00;
  
  iVar3 = param_1;
  iVar6 = 0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if ((iVar2 < 0) || (iVar5 + -1 < iVar2)) {
    param_1 = 0;
  }
  else {
    param_1 = piVar1[1] * iVar2 + piVar1[2];
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x350);
  uVar4 = (*(int *)(param_1 + 4) - (uint)((*(uint *)(iVar3 + 0x40) & 0x7ff) != 0)) -
          (*(uint *)(iVar3 + 0x40) >> 0xb);
  if ((uint)(param_3 / 0x91c) <= uVar4) {
    uVar4 = param_3 / 0x91c;
  }
  _Dst_00 = param_2;
  if (uVar4 != 0) {
    _Dst = (void *)((int)param_2 + 8);
    iVar6 = uVar4 * 0x91c;
    param_2 = (void *)uVar4;
    do {
      memmove(_Dst_00,(void *)(param_1 + 0xc),8);
      memmove(_Dst,(void *)(*(int *)(iVar3 + 0x40) + 8 + iVar2),0x800);
      _Dst_00 = (void *)((int)_Dst_00 + 0x91c);
      _Dst = (void *)((int)_Dst + 0x91c);
      param_2 = (void *)((int)param_2 - 1);
      *(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x40) + 0x800;
    } while (param_2 != (void *)0x0);
  }
  if (*(uint *)(param_1 + 4) <=
      (uint)((*(uint *)(iVar3 + 0x40) & 0x7ff) != 0) + (*(uint *)(iVar3 + 0x40) >> 0xb)) {
    *(undefined1 *)((int)_Dst_00 + -0x916) = 0x88;
    *(undefined1 *)((int)_Dst_00 + -0x91a) = 0x88;
    *param_4 = iVar6;
    return 0;
  }
  *param_4 = iVar6;
  return 1;
}


