/* Module: vegas30k.dll
   Function: SFMixer_BoundbyLoop
   Address: 011844b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SFMixer_BoundbyLoop(struct _tag_looppoint &,__int64,__int64,__int64 &,int) */

long SFMixer_BoundbyLoop(_tag_looppoint *param_1,__int64 param_2,__int64 param_3,__int64 *param_4,
                        int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint in_stack_00000008;
  long local_4;
  
                    /* 0x1844b0  266  ?SFMixer_BoundbyLoop@@YGJAAU_tag_looppoint@@_J1AA_JH@Z */
  local_4 = 1;
  if (*(int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  uVar8 = *(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_4 == (__int64 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x1c) + iVar1 + (uint)CARRY4(*(uint *)(param_1 + 0x18),uVar8);
    if ((iVar2 <= (int)param_2) &&
       ((iVar2 < (int)param_2 || (*(uint *)(param_1 + 0x18) + uVar8 < in_stack_00000008)))) {
      return 1;
    }
  }
  else if (((int)param_2 <= iVar1) && (((int)param_2 < iVar1 || (in_stack_00000008 < uVar8)))) {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar6 = *(uint *)(param_1 + 0x18);
  if ((iVar2 < 1) && ((iVar2 < 0 || (uVar6 == 0)))) {
    return 1;
  }
  if ((int)param_3 < iVar1) {
    return 1;
  }
  if (((int)param_3 <= iVar1) && (param_2._4_4_ < uVar8)) {
    return 1;
  }
  uVar4 = uVar8 + uVar6;
  iVar2 = iVar1 + iVar2 + (uint)CARRY4(uVar8,uVar6);
  if (iVar2 < (int)param_3) {
    return 1;
  }
  if ((iVar2 <= (int)param_3) && (uVar4 < param_2._4_4_)) {
    return 1;
  }
  if (param_4 == (__int64 *)0x0) {
    uVar5 = uVar4 - param_2._4_4_;
    uVar3 = (iVar2 - (int)param_3) - (uint)(uVar4 < param_2._4_4_);
    uVar8 = param_3._4_4_[1];
    uVar6 = *param_3._4_4_;
    uVar4 = uVar5;
    uVar7 = uVar3;
    if ((((int)uVar8 <= (int)uVar3) && (uVar4 = uVar6, uVar7 = uVar8, (int)uVar3 <= (int)uVar8)) &&
       (bVar9 = uVar5 == uVar6, uVar5 <= uVar6)) goto LAB_011845ba;
  }
  else {
    uVar4 = param_2._4_4_ - uVar8;
    uVar7 = ((int)param_3 - iVar1) - (uint)(param_2._4_4_ < uVar8);
    uVar8 = param_3._4_4_[1];
    uVar6 = *param_3._4_4_;
    if (((int)uVar8 <= (int)uVar7) && (((int)uVar8 < (int)uVar7 || (uVar6 < uVar4)))) {
      uVar4 = uVar6;
      uVar7 = uVar8;
    }
  }
  bVar9 = uVar4 == uVar6;
  uVar5 = uVar4;
  uVar3 = uVar7;
LAB_011845ba:
  if ((!bVar9) || (uVar3 != uVar8)) {
    local_4 = 0;
  }
  *param_3._4_4_ = uVar5;
  param_3._4_4_[1] = uVar3;
  return local_4;
}


