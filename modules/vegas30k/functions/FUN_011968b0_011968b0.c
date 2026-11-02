/* Module: vegas30k.dll
   Function: FUN_011968b0
   Address: 011968b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall
FUN_011968b0(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  int local_30;
  int local_2c;
  uint local_20;
  int local_1c;
  int local_10 [4];
  
  piVar8 = *(int **)(param_1 + 0x608);
  local_20 = param_5;
  local_1c = param_6;
  local_10[0] = 0;
  local_10[1] = 0x3ff00000;
  local_10[2] = 0;
  local_10[3] = 0x3ff00000;
  if (piVar8 == (int *)0x0) {
    return CONCAT44(param_6,param_5);
  }
  do {
    iVar1 = *(int *)(*piVar8 + 0x648);
    local_30 = param_2;
    local_2c = piVar8[9];
    if (local_2c == 0) {
      piVar8 = (int *)piVar8[0x5b];
    }
    else if ((*(byte *)(piVar8 + 0xe) & 4) == 0) {
      piVar8 = (int *)piVar8[0x5b];
    }
    else {
      iVar6 = 0;
      param_5 = 0;
      if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
        while( true ) {
          uVar7 = piVar8[0xc] - param_5;
          iVar2 = (piVar8[0xd] - iVar6) - (uint)((uint)piVar8[0xc] < param_5);
          iVar4 = (param_4 - iVar6) - (uint)(param_3 < param_5);
          uVar5 = uVar7;
          if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (param_3 - param_5 < uVar7)))) {
            uVar5 = param_3 - param_5;
          }
          if ((iVar2 < 0) || ((iVar2 < 1 && (uVar7 == 0)))) break;
          if (piVar8[0xb] == 0) {
            piVar3 = local_10;
            if (iVar1 == 0) {
              piVar3 = piVar8 + 0x1a;
            }
            _SfAudio_MixChannels_28
                      (param_1 + 0x4f8,local_30,piVar8 + 1,local_2c,uVar5,piVar8[6],piVar3);
          }
          iVar2 = *(ushort *)(param_1 + 0x504) * uVar5;
          local_30 = local_30 + iVar2;
          local_2c = local_2c + iVar2;
          bVar9 = CARRY4(param_5,uVar5);
          param_5 = param_5 + uVar5;
          iVar6 = iVar6 + (uint)bVar9;
          if ((param_4 <= iVar6) && ((param_4 < iVar6 || (param_3 <= param_5)))) break;
        }
        if (param_5 != 0 || iVar6 != 0) {
          local_20 = param_5;
          local_1c = iVar6;
        }
      }
      piVar8 = (int *)piVar8[0x5b];
      param_6 = local_1c;
      param_5 = local_20;
    }
    if (piVar8 == (int *)0x0) {
      return CONCAT44(param_6,param_5);
    }
  } while( true );
}


