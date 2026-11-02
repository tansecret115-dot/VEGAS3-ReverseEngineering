/* Module: sfmarket2.dll
   Function: FUN_004041a0
   Address: 004041a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004041a0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int local_4;
  
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  piVar1 = (int *)((int)this + 0x1be4);
  if ((*(int *)((int)this + 0x1be4) == 0) &&
     (local_4 = FUN_00428b40(piVar1,4,-1,-1,0x40000002), local_4 < 0)) {
    return local_4;
  }
  iVar2 = FUN_00427dc0((int *)*piVar1,param_1,(undefined4 *)0x0,-1,&LAB_004043d0);
  if (iVar2 < 0) {
    iVar2 = FUN_00428010((int *)*piVar1,param_1,0,(undefined4 *)0xffffffff,&LAB_00404400);
    if ((param_1[0x8f] == 0) || (param_1[0x90] == 0)) {
      param_1[0x8f] = 0;
      param_1[0x90] = 0;
    }
    else {
      pvVar3 = calloc(1,param_1[0x8f] * 4);
      if (pvVar3 == (void *)0x0) {
        return -0x7ff8fff2;
      }
      iVar5 = 0;
      if (0 < param_1[0x8f]) {
        do {
          iVar5 = iVar5 + 1;
          *(undefined4 *)((int)pvVar3 + iVar5 * 4 + -4) =
               *(undefined4 *)(param_1[0x90] + -4 + iVar5 * 4);
        } while (iVar5 < param_1[0x8f]);
      }
      param_1[0x90] = (int)pvVar3;
    }
    FUN_00428810((int *)*piVar1,param_1,0x398,iVar2,(int *)0x0);
    return local_4;
  }
  iVar2 = *(int *)(*(int *)(*piVar1 + 8) + iVar2 * 4);
  if ((*(int *)(iVar2 + 0x23c) != 0) && (param_1[0x8f] != *(int *)(iVar2 + 0x23c))) {
    if (*(void **)(iVar2 + 0x240) != (void *)0x0) {
      free(*(void **)(iVar2 + 0x240));
      *(undefined4 *)(iVar2 + 0x240) = 0;
      *(undefined4 *)(iVar2 + 0x23c) = 0;
    }
    if (param_1[0x8f] != 0) {
      pvVar3 = calloc(1,param_1[0x8f] << 2);
      *(void **)(iVar2 + 0x240) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return -0x7ff8fff2;
      }
    }
    uVar4 = 0;
    *(int *)(iVar2 + 0x23c) = param_1[0x8f];
    if (param_1[0x8f] != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar2 + 0x240) + uVar4 * 4) =
             *(undefined4 *)(param_1[0x90] + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[0x8f]);
    }
  }
  *(int *)(iVar2 + 0x20c) = param_1[0x83];
  *(int *)(iVar2 + 0x210) = param_1[0x84];
  if (param_1 + 1 != (int *)0x0) {
    _mbscpy((uchar *)(iVar2 + 4),(uchar *)(param_1 + 1));
  }
  if (param_1 + 0x88 != (int *)0x0) {
    _mbscpy((uchar *)(iVar2 + 0x220),(uchar *)(param_1 + 0x88));
  }
  if (param_1 + 0x91 != (int *)0x0) {
    _mbscpy((uchar *)(iVar2 + 0x244),(uchar *)(param_1 + 0x91));
  }
  if ((uchar *)((int)param_1 + 0x25d) != (uchar *)0x0) {
    _mbscpy((uchar *)(iVar2 + 0x25d),(uchar *)((int)param_1 + 0x25d));
  }
  return local_4;
}


