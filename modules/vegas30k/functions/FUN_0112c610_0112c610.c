/* Module: vegas30k.dll
   Function: FUN_0112c610
   Address: 0112c610
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0112c610(int param_1,uchar *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong local_8;
  int local_4;
  
  lVar5 = 0;
  local_4 = param_3;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  iVar2 = *(int *)(*(int *)(iVar3 + 0x34c) + 8);
  if ((iVar2 != 0) &&
     ((*(int *)(param_1 + 0x40) != 0 ||
      (lVar5 = SfCdiInitFileStream(*(void **)(param_1 + 0x3c),(char *)(iVar3 + 0x224),
                                   *(__uint64 *)(iVar3 + 0x328),*(__uint64 *)(iVar3 + 0x330),
                                   *(ulong *)(*(int *)(iVar3 + 0x34c) + 0x18)), lVar5 == 0)))) {
    do {
      uVar4 = iVar2 - *(int *)(param_1 + 0x40);
      if (0x92f < uVar4) {
        uVar4 = 0x930;
      }
      lVar5 = SfCdiReadFileStream(*(void **)(param_1 + 0x3c),param_2,uVar4,&local_8);
      if ((lVar5 < 0) || (uVar4 != local_8)) {
        lVar5 = -0x7ffb1ff8;
        goto LAB_0112c719;
      }
      iVar3 = *(int *)(param_1 + 0x40) + local_8;
      param_2 = param_2 + local_8;
      param_3 = param_3 - local_8;
      *(int *)(param_1 + 0x40) = iVar3;
    } while ((param_3 != 0) && (iVar3 != iVar2));
    if (-1 < lVar5) {
      if (iVar3 == iVar2) {
        SfCdiDeinitFileStream(*(void **)(param_1 + 0x3c));
      }
      else {
        lVar5 = 1;
      }
    }
  }
LAB_0112c719:
  *param_4 = local_4 - param_3;
  return lVar5;
}


