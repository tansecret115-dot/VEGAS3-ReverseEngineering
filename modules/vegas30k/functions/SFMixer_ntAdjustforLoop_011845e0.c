/* Module: vegas30k.dll
   Function: SFMixer_ntAdjustforLoop
   Address: 011845e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SFMixer_ntAdjustforLoop(struct _tag_looppoint &,__int64,__int64 &,int) */

long SFMixer_ntAdjustforLoop(_tag_looppoint *param_1,__int64 param_2,__int64 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint in_stack_00000008;
  long local_c;
  
                    /* 0x1845e0  267  ?SFMixer_ntAdjustforLoop@@YGJAAU_tag_looppoint@@_JAA_JH@Z */
  local_c = 1;
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar4 = *(uint *)param_1;
    iVar5 = *(int *)(param_1 + 4);
    if (param_3 == (__int64 *)0x0) {
      iVar3 = *(int *)(param_1 + 0x14) + iVar5 + (uint)CARRY4(*(uint *)(param_1 + 0x10),uVar4);
      if ((iVar3 <= (int)param_2) &&
         ((iVar3 < (int)param_2 || (*(uint *)(param_1 + 0x10) + uVar4 < in_stack_00000008)))) {
        return 1;
      }
    }
    else if ((int)param_2 <= iVar5) {
      if ((int)param_2 < iVar5) {
        return 1;
      }
      if (in_stack_00000008 < uVar4) {
        return 1;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) < 1) && ((*(int *)(param_1 + 0x14) < 0 || (uVar1 == 0)))) {
      return 1;
    }
    in_stack_00000008 = *param_2._4_4_;
    if (param_3 == (__int64 *)0x0) {
      uVar2 = param_2._4_4_[1];
      iVar3 = iVar5 + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar4,uVar1);
      if ((int)uVar2 < iVar3) {
        return 1;
      }
      if (((int)uVar2 <= iVar3) && (in_stack_00000008 < uVar4 + uVar1)) {
        return 1;
      }
      *param_2._4_4_ = in_stack_00000008 - uVar4;
      param_2._4_4_[1] = (uVar2 - iVar5) - (uint)(in_stack_00000008 < uVar4);
      uVar6 = __allrem(*param_2._4_4_,param_2._4_4_[1],*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x14));
      *(undefined8 *)param_2._4_4_ = uVar6;
      uVar4 = *(uint *)param_1;
      iVar5 = *(int *)(param_1 + 4);
    }
    else {
      uVar2 = param_2._4_4_[1];
      if (iVar5 < (int)uVar2) {
        return 1;
      }
      if ((iVar5 <= (int)uVar2) && (uVar4 < in_stack_00000008)) {
        return 1;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      *param_2._4_4_ = (in_stack_00000008 - uVar4) - uVar1;
      param_2._4_4_[1] =
           (((uVar2 - iVar5) - (uint)(in_stack_00000008 < uVar4)) - iVar3) -
           (uint)(in_stack_00000008 - uVar4 < uVar1);
      uVar6 = __allrem(*param_2._4_4_,param_2._4_4_[1],*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x14));
      *(undefined8 *)param_2._4_4_ = uVar6;
      uVar4 = *(uint *)param_1 + *(uint *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) +
              (uint)CARRY4(*(uint *)param_1,*(uint *)(param_1 + 0x10));
    }
    uVar1 = *param_2._4_4_;
    local_c = 0;
    *param_2._4_4_ = uVar1 + uVar4;
    param_2._4_4_[1] = param_2._4_4_[1] + iVar5 + (uint)CARRY4(uVar1,uVar4);
  }
  return local_c;
}


