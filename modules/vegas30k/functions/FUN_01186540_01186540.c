/* Module: vegas30k.dll
   Function: FUN_01186540
   Address: 01186540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01186635) */
/* WARNING: Removing unreachable block (ram,0x01186627) */
/* WARNING: Removing unreachable block (ram,0x0118668c) */

longlong __thiscall
FUN_01186540(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int unaff_EDI;
  longlong lVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x6a4) == 0) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 0x720);
  iVar5 = *(int *)(param_1 + 0x724);
  if ((*(int *)(param_1 + 0x74c) != 0) && (*(int *)(param_1 + 0x76c) == 0)) {
    uVar7 = *(uint *)(param_1 + 0x740) + *(uint *)(param_1 + 0x730);
    iVar5 = *(int *)(param_1 + 0x744) + *(int *)(param_1 + 0x734) +
            (uint)CARRY4(*(uint *)(param_1 + 0x740),*(uint *)(param_1 + 0x730));
  }
  iVar3 = *(int *)(param_1 + 0x704);
  puVar1 = (uint *)(param_1 + 0x700);
  if (((iVar5 < iVar3) ||
      (((iVar5 <= iVar3 && (uVar7 <= *(uint *)(param_1 + 0x700))) || (*(int *)(param_1 + 0x48) != 0)
       ))) && ((iVar3 < 0 ||
               (((iVar3 < 1 && (*(uint *)(param_1 + 0x700) == 0)) || (*(int *)(param_1 + 0x48) == 0)
                ))))) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_01184d10(param_3,param_4,param_5);
    if (((*(int *)(param_1 + 0x48) == 0) && (*(int *)(*(int *)(param_1 + 0x2c) + 0x808) != 0)) &&
       (lVar9 = FUN_01185190(param_2,*puVar1,*(undefined4 *)(param_1 + 0x704),param_3,param_4,0),
       lVar8 < lVar9)) {
      lVar8 = lVar9;
    }
    iVar5 = (int)((ulonglong)lVar8 >> 0x20);
    uVar7 = (uint)lVar8;
    if (0 < lVar8) {
      _SfAudio_MixChannels_28
                (param_1 + 0x4f8,param_2,param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x6e8),uVar7,0,
                 param_1 + 0x6d0);
    }
    if ((param_5 & 0x20000000) != 0) {
      plVar2 = (longlong *)(param_1 + 0x888);
      if ((-1 < *(int *)(param_1 + 0x88c)) &&
         (((0 < *(int *)(param_1 + 0x88c) || (*(int *)plVar2 != 0)) &&
          (*(int *)(param_1 + 0x890) == 0)))) {
        lVar9 = lVar8;
        if (*plVar2 < lVar8) {
          lVar9 = *plVar2;
        }
        *(longlong *)(param_1 + 0x888) = lVar9;
        SfAudio_DoFlushFade(param_2,*(void **)(param_1 + 0x880),(tWAVEFORMATEX *)(param_1 + 0x4f8),
                            *(long *)(param_1 + 0x888));
        *(undefined4 *)(param_1 + 0x888) = 0;
        *(undefined4 *)(param_1 + 0x88c) = 0;
      }
    }
    uVar4 = *puVar1;
    if (*(__int64 **)(param_1 + 0x48) == (__int64 *)0x0) {
      *puVar1 = uVar4 + uVar7;
      iVar5 = *(int *)(param_1 + 0x704) + iVar5 + (uint)CARRY4(uVar4,uVar7);
    }
    else {
      *puVar1 = uVar4 - uVar7;
      iVar5 = (*(int *)(param_1 + 0x704) - iVar5) - (uint)(uVar4 < uVar7);
    }
    *(int *)(param_1 + 0x704) = iVar5;
    *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) & 0xefffffff;
    if ((*(int *)(param_1 + 0x76c) == 0) &&
       (lVar6 = SFMixer_AdjustforLoop
                          ((_tag_looppoint *)(param_1 + 0x728),
                           CONCAT44(puVar1,*(undefined4 *)(param_1 + 0x6f4)),
                           *(__int64 **)(param_1 + 0x48),unaff_EDI), lVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_1 + 0x730);
      *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_1 + 0x734);
      *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) | 0x10000000;
      *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + 1;
      *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 1;
      return lVar8;
    }
  }
  return lVar8;
}


