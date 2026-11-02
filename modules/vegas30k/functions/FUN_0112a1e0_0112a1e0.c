/* Module: vegas30k.dll
   Function: FUN_0112a1e0
   Address: 0112a1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112a1e0(int param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  int local_4;
  
  iVar4 = param_1;
  iVar7 = 0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar1;
  }
  if ((iVar2 < 0) || (iVar6 + -1 < iVar2)) {
    param_1 = 0;
  }
  else {
    param_1 = piVar1[1] * iVar2 + piVar1[2];
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x350);
  uVar5 = (*(int *)(param_1 + 4) - (uint)((*(uint *)(iVar4 + 0x40) & 0x7ff) != 0)) -
          (*(uint *)(iVar4 + 0x40) >> 0xb);
  uVar3 = (int)param_3 / 0x930;
  param_3 = uVar5;
  if (uVar3 <= uVar5) {
    param_3 = uVar3;
  }
  if (param_3 != 0) {
    _Dst = (void *)(param_2 + 0x18);
    iVar7 = param_3 * 0x930;
    do {
      local_4 = param_2;
      memmove((void *)((int)_Dst + -8),(void *)(param_1 + 0xc),8);
      memmove(_Dst,(void *)(*(int *)(iVar4 + 0x40) + 8 + iVar2),0x800);
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 0x800;
      _Dst = (void *)((int)_Dst + 0x930);
      param_3 = param_3 - 1;
      param_2 = local_4 + 0x930;
    } while (param_3 != 0);
  }
  if (*(uint *)(param_1 + 4) <=
      (uint)((*(uint *)(iVar4 + 0x40) & 0x7ff) != 0) + (*(uint *)(iVar4 + 0x40) >> 0xb)) {
    *(undefined1 *)(local_4 + 0x16) = 0x88;
    *(undefined1 *)(local_4 + 0x12) = 0x88;
    *param_4 = iVar7;
    return 0;
  }
  *param_4 = iVar7;
  return 1;
}


