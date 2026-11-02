/* Module: vegas30k.dll
   Function: SFMixer_ntBoundbyLoop
   Address: 01184740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SFMixer_ntBoundbyLoop(struct _tag_looppoint &,__int64,__int64,__int64 &,int) */

long SFMixer_ntBoundbyLoop
               (_tag_looppoint *param_1,__int64 param_2,__int64 param_3,__int64 *param_4,int param_5
               )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint in_stack_00000008;
  long local_4;
  
                    /* 0x184740  268  ?SFMixer_ntBoundbyLoop@@YGJAAU_tag_looppoint@@_J1AA_JH@Z */
  local_4 = 1;
  if (*(int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  uVar7 = *(uint *)param_1;
  iVar1 = *(int *)(param_1 + 4);
  if (param_4 == (__int64 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x14) + iVar1 + (uint)CARRY4(*(uint *)(param_1 + 0x10),uVar7);
    if ((iVar2 <= (int)param_2) &&
       ((iVar2 < (int)param_2 || (*(uint *)(param_1 + 0x10) + uVar7 < in_stack_00000008)))) {
      return 1;
    }
  }
  else if (((int)param_2 <= iVar1) && (((int)param_2 < iVar1 || (in_stack_00000008 < uVar7)))) {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((iVar2 < 1) && ((iVar2 < 0 || (uVar8 == 0)))) {
    return 1;
  }
  if ((int)param_3 < iVar1) {
    return 1;
  }
  if (((int)param_3 <= iVar1) && (param_2._4_4_ < uVar7)) {
    return 1;
  }
  iVar5 = iVar1 + iVar2 + (uint)CARRY4(uVar7,uVar8);
  if (iVar5 < (int)param_3) {
    return 1;
  }
  if ((iVar5 <= (int)param_3) && (uVar7 + uVar8 < param_2._4_4_)) {
    return 1;
  }
  if (param_4 == (__int64 *)0x0) {
    uVar6 = *param_3._4_4_;
    uVar4 = (uVar7 - param_2._4_4_) + uVar8;
    uVar9 = param_3._4_4_[1];
    uVar3 = ((iVar1 - (int)param_3) - (uint)(uVar7 < param_2._4_4_)) + iVar2 +
            (uint)CARRY4(uVar7 - param_2._4_4_,uVar8);
    uVar7 = uVar3;
    uVar8 = uVar4;
    if ((((int)uVar9 <= (int)uVar3) && (uVar7 = uVar9, uVar8 = uVar6, (int)uVar3 <= (int)uVar9)) &&
       (bVar10 = uVar4 == uVar6, uVar4 <= uVar6)) goto LAB_0118484b;
  }
  else {
    uVar8 = param_2._4_4_ - uVar7;
    uVar9 = param_3._4_4_[1];
    uVar6 = *param_3._4_4_;
    uVar7 = ((int)param_3 - iVar1) - (uint)(param_2._4_4_ < uVar7);
    if (((int)uVar9 <= (int)uVar7) && (((int)uVar9 < (int)uVar7 || (uVar6 < uVar8)))) {
      uVar7 = uVar9;
      uVar8 = uVar6;
    }
  }
  bVar10 = uVar8 == uVar6;
  uVar3 = uVar7;
  uVar4 = uVar8;
LAB_0118484b:
  if ((!bVar10) || (uVar3 != uVar9)) {
    local_4 = 0;
  }
  *param_3._4_4_ = uVar4;
  param_3._4_4_[1] = uVar3;
  return local_4;
}


