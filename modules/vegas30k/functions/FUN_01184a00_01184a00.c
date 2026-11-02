/* Module: vegas30k.dll
   Function: FUN_01184a00
   Address: 01184a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall
FUN_01184a00(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  longlong lVar10;
  int *local_20;
  int local_1c;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_3;
  local_20 = (int *)0x0;
  local_10 = 0;
  local_c = 0x3ff00000;
  local_8 = 0;
  local_4 = 0x3ff00000;
  local_1c = param_1;
  if ((*(int *)(param_1 + 0x56c) < *(int *)(param_1 + 0x8a4)) ||
     ((*(int *)(param_1 + 0x56c) <= *(int *)(param_1 + 0x8a4) &&
      (*(uint *)(param_1 + 0x568) <= *(uint *)(param_1 + 0x8a0))))) {
    _SfAudio_FillSilence_12(param_1 + 0x4f8,param_2,param_3);
    return CONCAT44(param_4,param_3);
  }
  if (param_5 == -1) {
    lVar10 = FUN_011851d0(param_3,param_4,0);
  }
  else {
    lVar10 = FUN_01184870(param_3,param_4,param_5,&local_20);
  }
  if (lVar10 == -3) {
    return 0xfffffffffffffffd;
  }
  if (param_5 == -1) {
    piVar2 = *(int **)(param_1 + 0x608);
    iVar6 = param_1;
    iVar4 = local_1c;
    while (local_1c = iVar6, piVar2 != (int *)0x0) {
      iVar5 = *(int *)(*piVar2 + 0x648);
      iVar6 = local_1c;
      if (piVar2[9] == 0) {
        piVar2 = (int *)piVar2[0x5b];
      }
      else if ((*(byte *)(piVar2 + 0xe) & 4) == 0) {
        piVar2 = (int *)piVar2[0x5b];
      }
      else {
        iVar6 = 0;
        param_3 = 0;
        local_20 = piVar2;
        local_1c = iVar4;
        if ((-1 < param_4) && ((0 < param_4 || (uVar1 != 0)))) {
          while( true ) {
            local_14 = piVar2[0xd];
            uVar7 = piVar2[0xc];
            if ((local_14 < 0) || ((local_14 < 1 && (uVar7 == 0)))) break;
            if (piVar2[0xb] == 0) {
              piVar8 = &local_10;
              if (iVar5 == 0) {
                piVar8 = piVar2 + 0x1a;
              }
              if ((param_4 <= local_14) && ((param_4 < local_14 || (uVar1 < uVar7)))) {
                local_14 = param_4;
                uVar7 = uVar1;
              }
              _SfAudio_MixChannels_28
                        (local_1c + 0x4f8,param_2,piVar2 + 1,piVar2[9],uVar7,piVar2[6],piVar8);
              piVar2 = local_20;
            }
            iVar4 = piVar2[0xd];
            uVar7 = piVar2[0xc];
            if ((param_4 <= iVar4) && ((param_4 < iVar4 || (uVar1 < uVar7)))) {
              uVar7 = uVar1;
              iVar4 = param_4;
            }
            bVar9 = CARRY4(param_3,uVar7);
            param_3 = param_3 + uVar7;
            iVar6 = iVar6 + iVar4 + (uint)bVar9;
            if ((param_4 <= iVar6) && ((param_4 < iVar6 || (uVar1 <= param_3)))) break;
          }
        }
        piVar2[0xf] = piVar2[0xf] & 0xefffffff;
        piVar2 = (int *)local_20[0x5b];
        iVar6 = local_1c;
        iVar4 = local_1c;
      }
    }
  }
  else {
    uVar7 = 0;
    iVar6 = 0;
    iVar4 = *(int *)(*local_20 + 0x648);
    if ((-1 < param_4) && ((piVar2 = local_20, 0 < param_4 || (param_3 != 0)))) {
      while( true ) {
        local_14 = piVar2[0xd];
        uVar3 = piVar2[0xc];
        if ((local_14 < 0) || ((local_14 < 1 && (uVar3 == 0)))) break;
        if (piVar2[0xb] == 0) {
          piVar8 = &local_10;
          if (iVar4 == 0) {
            piVar8 = piVar2 + 0x1a;
          }
          if ((param_4 <= local_14) && ((param_4 < local_14 || (param_3 < uVar3)))) {
            local_14 = param_4;
            uVar3 = param_3;
          }
          _SfAudio_MixChannels_28
                    (local_1c + 0x4f8,param_2,piVar2 + 1,piVar2[9],uVar3,piVar2[6],piVar8);
          piVar2 = local_20;
        }
        iVar5 = piVar2[0xd];
        uVar3 = piVar2[0xc];
        if ((param_4 <= iVar5) && ((param_4 < iVar5 || (param_3 < uVar3)))) {
          uVar3 = param_3;
          iVar5 = param_4;
        }
        bVar9 = CARRY4(uVar7,uVar3);
        uVar7 = uVar7 + uVar3;
        iVar6 = iVar6 + iVar5 + (uint)bVar9;
        if ((param_4 <= iVar6) && ((param_4 < iVar6 || (param_3 <= uVar7)))) break;
      }
    }
  }
  uVar7 = *(uint *)(local_1c + 0x8a0);
  *(uint *)(local_1c + 0x8a0) = uVar7 + uVar1;
  *(uint *)(local_1c + 0x8a4) = *(int *)(local_1c + 0x8a4) + param_4 + (uint)CARRY4(uVar7,uVar1);
  return CONCAT44(param_4,uVar1);
}


