/* Module: vegas30.exe
   Function: FUN_005ad9e0
   Address: 005ad9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005ad9e0(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((param_4 != 1) || (param_5 != 1)) && (param_6 == 0)) {
    piVar4 = (int *)FUN_005a5bd0(param_3,1,param_9);
    local_20 = 0;
    local_1c = 0;
    local_18 = (param_2[2] - *param_2) * 0x4000;
    local_14 = (param_2[3] - param_2[1]) * 0x4000;
    if (param_5 == 1) {
      bVar11 = *(int *)(param_7 + 0xc) == 1;
    }
    else if (param_5 == 2) {
      bVar11 = *(int *)(param_7 + 0xc) == *(int *)(param_8 + 0xc);
    }
    else if (param_5 == 3) {
      bVar11 = *(int *)(param_7 + 0xc) != *(int *)(param_8 + 0xc);
    }
    else {
      bVar11 = true;
    }
    _SfDibCopyInterlace_40
              (*piVar4,piVar4[0x10b],&local_20,piVar4[0x10c],*param_1,param_1[0x10b],&local_20,
               param_1[0x10c],bVar11,0x1000003);
    piVar4[0x10d] = (param_1[0x10d] ^ piVar4[0x10d]) & 2U ^ piVar4[0x10d];
    (*(code *)param_1[0x114])(param_1,param_1[0x115],param_1[0x116]);
    return piVar4;
  }
  piVar4 = (int *)FUN_005a5de0(param_3,param_1,0,param_9);
  iVar5 = _SfGetPixelType_4(*piVar4);
  piVar6 = (int *)FUN_005a5bd0(param_3,1,param_9);
  local_14 = *(undefined4 *)(*piVar4 + 8);
  local_18 = *(undefined4 *)(*piVar4 + 4);
  local_20 = 0;
  local_1c = 0;
  local_4 = *(undefined4 *)(*piVar6 + 8);
  local_8 = *(undefined4 *)(*piVar6 + 4);
  local_10 = 0;
  local_c = 0;
  param_8 = piVar4[0x10c];
  iVar2 = *piVar4;
  param_9 = param_8;
  if (param_8 == 0) {
    uVar7 = (uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f;
    param_9 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  param_1 = (undefined4 *)piVar4[0x10b];
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_005b0fb0(iVar2);
  }
  if (param_8 == 0) {
    uVar7 = (uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f;
    param_8 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  iVar10 = piVar6[0x10c];
  piVar3 = (int *)*piVar6;
  if (iVar10 == 0) {
    uVar7 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar10 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  piVar8 = (int *)piVar6[0x10b];
  if (piVar8 == (int *)0x0) {
    if (piVar3[4] == 0) {
      if (((piVar3[8] == 0) && (uVar1 = *(ushort *)((int)piVar3 + 0xe), uVar1 != 0)) && (uVar1 < 9))
      {
        piVar8 = (int *)((int)piVar3 + *piVar3 + (1 << ((byte)uVar1 & 0x1f)) * 4);
        goto LAB_005adb69;
      }
    }
    else if (piVar3[4] == 3) {
      piVar8 = piVar3 + 0xd;
      goto LAB_005adb69;
    }
    piVar8 = (int *)((int)piVar3 + *piVar3 + piVar3[8] * 4);
  }
LAB_005adb69:
  iVar9 = piVar6[0x10c];
  if (iVar9 == 0) {
    uVar7 = (uint)*(ushort *)((int)piVar3 + 0xe) * piVar3[1] + 0x1f;
    iVar9 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  _SfDibFieldBlend_36((int *)((piVar3[2] + -1) * iVar9 + (int)piVar8),&local_10,-iVar10,param_2,
                      (*(int *)(iVar2 + 8) + -1) * param_8 + (int)param_1,&local_20,-param_9,param_2
                      ,(-(uint)(iVar5 != 0x20) & 0xfffffff4) + 0x10);
  piVar6[0x10d] = (piVar4[0x10d] ^ piVar6[0x10d]) & 2U ^ piVar6[0x10d];
  (*(code *)piVar4[0x114])(piVar4,piVar4[0x115],piVar4[0x116]);
  return piVar6;
}


