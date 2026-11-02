/* Module: erv33260.dll
   Function: FUN_67082ed0
   Address: 67082ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67082ed0(void *this,int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  bVar2 = ~*(byte *)(*(int *)((int)this + 0x8c) + 5 + param_1 * 0xc);
  local_5 = bVar2 & 1;
  bVar2 = bVar2 >> 2;
  iVar6 = *(int *)(param_1 * 0x10 + 8 + *(int *)((int)this + 0x90));
  param_1._3_1_ = bVar2 & 1;
  local_10 = 0;
  do {
    cVar4 = -1;
    if ((3 < local_10) || ((bVar2 & 1) == 0)) {
      cVar4 = *(char *)((iVar6 - *(int *)((int)this + 0xa8)) + *(int *)((int)this + 0x84));
    }
    cVar5 = -1;
    uVar3 = local_10 & 2;
    if ((uVar3 != 0) || (local_5 == 0)) {
      cVar5 = *(char *)(iVar6 + -1 + *(int *)((int)this + 0x84));
    }
    iVar1 = *(int *)((int)this + 0x84);
    local_14 = (uint)(byte)(&DAT_67090b8b)
                           [(int)*(char *)(iVar6 + iVar1) + ((int)cVar5 + cVar4 * 10) * 9];
    cVar4 = -1;
    if ((3 < local_10) || (param_1._3_1_ == 0)) {
      cVar4 = *(char *)((iVar6 - *(int *)((int)this + 0xa8)) + 1 + iVar1);
    }
    local_c = iVar6;
    FUN_67081d40((uint)(byte)(&DAT_6718d7d8)
                             [local_14 +
                              (uint)(byte)(&DAT_67090b8b)
                                          [(int)*(char *)(iVar6 + 1 + iVar1) +
                                           ((int)*(char *)(iVar6 + iVar1) + cVar4 * 10) * 9] * 9],
                 &local_18,(int *)&local_1c);
    FUN_6707d750(*(void **)((int)this + 4),local_1c,local_18);
    if (uVar3 == 2) {
      iVar6 = iVar6 + -2 + *(int *)((int)this + 0xa8);
    }
    else {
      iVar6 = iVar6 + 2;
    }
    local_10 = local_10 + 2;
  } while (local_10 < 0x10);
  return;
}


