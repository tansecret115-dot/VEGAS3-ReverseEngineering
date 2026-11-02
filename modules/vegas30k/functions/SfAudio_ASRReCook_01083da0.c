/* Module: vegas30k.dll
   Function: SfAudio_ASRReCook
   Address: 01083da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfAudio_ASRReCook(struct tSFASRCOOKED *,__int64) */

void SfAudio_ASRReCook(tSFASRCOOKED *param_1,__int64 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint in_stack_00000008;
  double local_38;
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint uStack_14;
  
                    /* 0x83da0  276  ?SfAudio_ASRReCook@@YGXPAUtSFASRCOOKED@@_J@Z */
  uVar9 = *(uint *)(param_1 + 8);
  iVar7 = (int)uVar9 >> 0x1f;
  *(uint *)(param_1 + 0x18) = in_stack_00000008;
  *(int *)(param_1 + 0x1c) = (int)param_2;
  if (((int)param_2 <= iVar7) && (((int)param_2 < iVar7 || (in_stack_00000008 < uVar9)))) {
    local_28 = *(undefined4 *)(param_1 + 0x28);
    uStack_24 = *(undefined4 *)(param_1 + 0x2c);
    local_20 = *(undefined4 *)(param_1 + 0x20);
    uStack_1c = *(undefined4 *)(param_1 + 0x24);
    uVar6 = *(uint *)param_1;
LAB_01083e60:
    dVar4 = (double)CONCAT44((int)param_2,in_stack_00000008);
    dVar2 = (double)(int)uVar9;
    uStack_14 = 0;
    lVar5 = 0x3ff00000;
    local_38 = ((double)CONCAT44(uStack_1c,local_20) - (double)CONCAT44(uStack_24,local_28)) / dVar2
    ;
    dVar3 = (double)CONCAT44(uStack_24,local_28);
    if ((int)uVar6 < 0) {
      dVar4 = dVar2 - dVar4;
      dVar3 = (double)CONCAT44(uStack_1c,local_20);
      local_38 = -local_38;
      lVar5 = 0xbff00000;
    }
    local_30 = (double)(lVar5 << 0x20);
    if (1 < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
      local_30 = local_30 + dVar4;
      dVar4 = dVar4 * dVar4;
      uStack_14 = 0x40000000;
      local_30 = local_30 * local_30 - dVar4;
      local_38 = local_38 / dVar2;
    }
    *(uint *)(param_1 + 0x38) = uVar9 - in_stack_00000008;
    *(double *)(param_1 + 0x40) = local_38 * dVar4 + dVar3;
    *(uint *)(param_1 + 0x3c) =
         (((int)uVar9 >> 0x1f) - (int)param_2) - (uint)(uVar9 < in_stack_00000008);
    *(double *)(param_1 + 0x48) = local_38 * local_30;
    *(double *)(param_1 + 0x50) = local_38 * (double)((ulonglong)uStack_14 << 0x20);
    return;
  }
  uVar10 = in_stack_00000008 - uVar9;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar7 = ((int)param_2 - iVar7) - (uint)(in_stack_00000008 < uVar9);
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((iVar1 < iVar7) || ((iVar1 <= iVar7 && (uVar6 <= uVar10)))) {
    uVar9 = *(uint *)(param_1 + 0xc);
    in_stack_00000008 = uVar10 - uVar6;
    param_2._0_4_ = (iVar7 - iVar1) - (uint)(uVar10 < uVar6);
    if (((int)param_2 <= (int)uVar9 >> 0x1f) &&
       (((int)param_2 < (int)uVar9 >> 0x1f || (in_stack_00000008 < uVar9)))) {
      local_28 = *(undefined4 *)(param_1 + 0x20);
      uStack_24 = *(undefined4 *)(param_1 + 0x24);
      local_20 = *(undefined4 *)(param_1 + 0x30);
      uStack_1c = *(undefined4 *)(param_1 + 0x34);
      uVar6 = *(uint *)(param_1 + 4);
      goto LAB_01083e60;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    *(uint *)(param_1 + 0x38) = uVar6 - uVar10;
    uVar8 = *(undefined4 *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x3c) = (iVar1 - iVar7) - (uint)(uVar6 < uVar10);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


