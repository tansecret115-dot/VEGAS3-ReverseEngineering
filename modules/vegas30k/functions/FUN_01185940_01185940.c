/* Module: vegas30k.dll
   Function: FUN_01185940
   Address: 01185940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01185940(int param_1,int *param_2,uint param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_EDI;
  uint uVar7;
  bool bVar8;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_20 = *(uint *)(param_1 + 0x840) - *(uint *)(param_1 + 0x858);
  local_1c = (*(int *)(param_1 + 0x844) - *(int *)(param_1 + 0x85c)) -
             (uint)(*(uint *)(param_1 + 0x840) < *(uint *)(param_1 + 0x858));
  local_10 = param_3;
  local_c = param_4;
  if (((int)param_4 <= (int)local_1c) && (((int)param_4 < (int)local_1c || (param_3 < local_20)))) {
    local_20 = param_3;
    local_1c = param_4;
  }
  uVar7 = *(uint *)(param_1 + 0x568);
  iVar3 = *(int *)(param_1 + 0x56c);
  *param_5 = local_20;
  param_5[1] = local_1c;
  if (*(int *)(param_1 + 0x5ac) != 0) {
    local_10 = *(uint *)(param_1 + 0x5a0);
    local_c = *(uint *)(param_1 + 0x5a4);
    uVar7 = *(uint *)(param_1 + 0x590) + local_10;
    iVar3 = *(int *)(param_1 + 0x594) + local_c + (uint)CARRY4(*(uint *)(param_1 + 0x590),local_10);
    if (((int)local_c <= (int)param_4) &&
       (((int)local_c < (int)param_4 || (*(uint *)(param_1 + 0x5a0) < param_3)))) {
      *param_5 = local_20;
      param_5[1] = local_1c;
      local_18 = *(uint *)(param_1 + 0x840);
      param_3 = *(uint *)(param_1 + 0x850) + local_20;
      local_14 = *(int *)(param_1 + 0x844);
      iVar6 = *(int *)(param_1 + 0x854) + local_1c +
              (uint)CARRY4(*(uint *)(param_1 + 0x850),local_20);
      if ((local_14 <= iVar6) && ((local_14 < iVar6 || (local_18 < param_3)))) {
        param_3 = local_18 - *(uint *)(param_1 + 0x850);
        param_4 = (local_14 - *(int *)(param_1 + 0x854)) -
                  (uint)(local_18 < *(uint *)(param_1 + 0x850));
        *param_5 = param_3;
        param_5[1] = param_4;
      }
    }
  }
  if (*(__int64 **)(param_1 + 0x48) == (__int64 *)0x0) {
    iVar6 = *(int *)(param_1 + 0x8a4);
    uVar5 = *(uint *)(param_1 + 0x8a0);
    if ((iVar6 <= iVar3) && ((iVar6 < iVar3 || (uVar5 < uVar7)))) {
      uVar4 = (iVar3 - iVar6) - (uint)(uVar7 < uVar5);
      if (((int)uVar4 <= (int)local_1c) &&
         (((int)uVar4 < (int)local_1c || (uVar7 - uVar5 <= local_20)))) {
        local_20 = uVar7 - uVar5;
        local_1c = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 0x844);
    uVar7 = *(uint *)(param_1 + 0x840);
    iVar6 = *(int *)(param_1 + 0x854) + local_1c + (uint)CARRY4(*(uint *)(param_1 + 0x850),local_20)
    ;
    if ((iVar3 <= iVar6) && ((iVar3 < iVar6 || (uVar7 < *(uint *)(param_1 + 0x850) + local_20)))) {
      local_20 = uVar7 - *(uint *)(param_1 + 0x850);
      local_1c = (iVar3 - *(int *)(param_1 + 0x854)) - (uint)(uVar7 < *(uint *)(param_1 + 0x850));
    }
    if (*(int *)(param_1 + 0x5cc) == 0) {
      SFMixer_AdjustforLoop
                ((_tag_looppoint *)(param_1 + 0x588),
                 CONCAT44((undefined4 *)(param_1 + 0x8a0),*(undefined4 *)(param_1 + 0x534)),
                 (__int64 *)0x0,unaff_EDI);
      SFMixer_BoundbyLoop((_tag_looppoint *)(param_1 + 0x588),
                          CONCAT44(*(undefined4 *)(param_1 + 0x8a0),*(undefined4 *)(param_1 + 0x534)
                                  ),CONCAT44(&local_20,*(undefined4 *)(param_1 + 0x8a4)),
                          *(__int64 **)(param_1 + 0x48),unaff_EDI);
    }
    if ((*(int *)(param_1 + 0x6a4) != 0) && ((*(uint *)(param_1 + 0x20) & 0x200) != 0)) {
      uVar7 = *(uint *)(param_1 + 0x720);
      uVar5 = *(uint *)(param_1 + 0x724);
      if (*(int *)(param_1 + 0x74c) != 0) {
        uVar7 = *(uint *)(param_1 + 0x740) + *(uint *)(param_1 + 0x730);
        uVar5 = *(int *)(param_1 + 0x744) + *(int *)(param_1 + 0x734) +
                (uint)CARRY4(*(uint *)(param_1 + 0x740),*(uint *)(param_1 + 0x730));
      }
      param_3 = local_20;
      param_4 = local_1c;
      if (((int)uVar5 <= (int)local_1c) &&
         (((int)uVar5 < (int)local_1c || (param_3 = local_20, param_4 = local_1c, uVar7 <= local_20)
          ))) {
        param_3 = uVar7;
        param_4 = uVar5;
      }
      uVar4 = *(uint *)(param_1 + 0x700);
      iVar3 = *(int *)(param_1 + 0x704);
      if ((iVar3 <= (int)uVar5) && ((iVar3 < (int)uVar5 || (uVar4 < uVar7)))) {
        uVar5 = (uVar5 - iVar3) - (uint)(uVar7 < uVar4);
        if (((int)uVar5 <= (int)param_4) &&
           (((int)uVar5 < (int)param_4 || (uVar7 - uVar4 <= param_3)))) {
          param_3 = uVar7 - uVar4;
          param_4 = uVar5;
        }
      }
      local_18 = *(uint *)(param_1 + 0x840);
      local_8 = *(uint *)(param_1 + 0x850) + param_3;
      iVar3 = *(int *)(param_1 + 0x844);
      iVar6 = *(int *)(param_1 + 0x854) + param_4 + (uint)CARRY4(*(uint *)(param_1 + 0x850),param_3)
      ;
      if ((iVar3 <= iVar6) && ((iVar3 < iVar6 || (local_18 < local_8)))) {
        param_3 = local_18 - *(uint *)(param_1 + 0x850);
        param_4 = (iVar3 - *(int *)(param_1 + 0x854)) -
                  (uint)(local_18 < *(uint *)(param_1 + 0x850));
      }
      uVar7 = param_3;
      local_4 = param_4;
      if (((int)local_1c <= (int)param_4) &&
         (((int)local_1c < (int)param_4 || (local_20 < param_3)))) {
        uVar7 = local_20;
        local_4 = local_1c;
      }
      *param_5 = uVar7;
      param_5[1] = local_4;
      if (*(int *)(param_1 + 0x76c) == 0) {
        SFMixer_AdjustforLoop
                  ((_tag_looppoint *)(param_1 + 0x728),
                   CONCAT44((undefined4 *)(param_1 + 0x700),*(undefined4 *)(param_1 + 0x6f4)),
                   *(__int64 **)(param_1 + 0x48),unaff_EDI);
        SFMixer_BoundbyLoop((_tag_looppoint *)(param_1 + 0x728),
                            CONCAT44(*(undefined4 *)(param_1 + 0x700),
                                     *(undefined4 *)(param_1 + 0x6f4)),
                            CONCAT44(&param_3,*(undefined4 *)(param_1 + 0x704)),
                            *(__int64 **)(param_1 + 0x48),unaff_EDI);
      }
      if (((int)param_4 <= (int)local_1c) &&
         (((int)param_4 < (int)local_1c || (param_3 <= local_20)))) {
        local_20 = param_3;
        local_1c = param_4;
      }
    }
    if (((int)local_1c <= (int)local_c) && (((int)local_1c < (int)local_c || (local_20 < local_10)))
       ) {
      *param_5 = local_20;
      param_5[1] = local_1c;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x8a4);
    uVar5 = *(uint *)(param_1 + 0x8a0);
    piVar1 = (int *)(param_1 + 0x8a0);
    if ((-1 < (int)uVar7) &&
       ((((0 < (int)uVar7 || (uVar5 != 0)) && ((int)uVar7 <= (int)local_1c)) &&
        (((int)uVar7 < (int)local_1c || (uVar5 <= local_20)))))) {
      local_20 = uVar5;
      local_1c = uVar7;
    }
    if (*(int *)(param_1 + 0x5cc) == 0) {
      SFMixer_AdjustforLoop
                ((_tag_looppoint *)(param_1 + 0x588),
                 CONCAT44(piVar1,*(undefined4 *)(param_1 + 0x534)),*(__int64 **)(param_1 + 0x48),
                 unaff_EDI);
      SFMixer_BoundbyLoop((_tag_looppoint *)(param_1 + 0x588),
                          CONCAT44(*piVar1,*(undefined4 *)(param_1 + 0x534)),
                          CONCAT44(&local_20,*(undefined4 *)(param_1 + 0x8a4)),
                          *(__int64 **)(param_1 + 0x48),unaff_EDI);
      if (((*(int *)(param_1 + 0x5ac) != 0) &&
          (*piVar1 == *(uint *)(param_1 + 0x5a0) + *(uint *)(param_1 + 0x590))) &&
         (*(int *)(param_1 + 0x8a4) ==
          *(int *)(param_1 + 0x5a4) + *(int *)(param_1 + 0x594) +
          (uint)CARRY4(*(uint *)(param_1 + 0x5a0),*(uint *)(param_1 + 0x590)))) {
        *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) | 0x10000000;
      }
    }
    uVar7 = (uint)(*(uint *)(param_1 + 0x850) < local_20);
    uVar5 = *(uint *)(param_1 + 0x854) - local_1c;
    bVar8 = (int)(uVar5 - uVar7) < 0;
    uVar4 = local_20;
    uVar2 = local_1c;
    if ((uVar5 == uVar7 || bVar8) &&
       (uVar4 = *(uint *)(param_1 + 0x850), uVar2 = *(uint *)(param_1 + 0x854), !bVar8)) {
      uVar4 = local_20;
      uVar2 = local_1c;
    }
    local_1c = uVar2;
    local_20 = uVar4;
    if ((*(int *)(param_1 + 0x6a4) != 0) && ((*(uint *)(param_1 + 0x20) & 0x200) != 0)) {
      uVar7 = *(uint *)(param_1 + 0x704);
      uVar5 = *(uint *)(param_1 + 0x700);
      param_3 = local_20;
      param_4 = local_1c;
      if (((-1 < (int)uVar7) &&
          (((0 < (int)uVar7 || (param_3 = local_20, param_4 = local_1c, uVar5 != 0)) &&
           (param_3 = local_20, param_4 = local_1c, (int)uVar7 <= (int)local_1c)))) &&
         (((int)uVar7 < (int)local_1c || (param_3 = local_20, param_4 = local_1c, uVar5 <= local_20)
          ))) {
        param_3 = uVar5;
        param_4 = uVar7;
      }
      if (*(int *)(param_1 + 0x76c) == 0) {
        SFMixer_BoundbyLoop((_tag_looppoint *)(param_1 + 0x728),
                            CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x6f4)),
                            CONCAT44(&param_3,uVar7),*(__int64 **)(param_1 + 0x48),unaff_EDI);
      }
      if (((int)param_4 <= (int)local_1c) &&
         (((int)param_4 < (int)local_1c || (param_3 <= local_20)))) {
        local_20 = param_3;
        local_1c = param_4;
      }
    }
    *param_5 = local_20;
    param_5[1] = local_1c;
    uVar7 = *(uint *)(param_1 + 0x850);
    *(uint *)(param_1 + 0x850) = uVar7 - local_20;
    *(uint *)(param_1 + 0x854) = (*(int *)(param_1 + 0x854) - local_1c) - (uint)(uVar7 < local_20);
  }
  iVar3 = *(int *)(param_1 + 0x83c);
  *param_2 = iVar3;
  *param_2 = (uint)*(ushort *)(param_1 + 0x504) * *(int *)(param_1 + 0x850) + iVar3;
  return;
}


