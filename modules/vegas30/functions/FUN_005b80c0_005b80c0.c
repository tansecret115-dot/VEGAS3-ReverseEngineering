/* Module: vegas30.exe
   Function: FUN_005b80c0
   Address: 005b80c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b80c0(int param_1,ISFMixerIn *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *unaff_retaddr;
  int local_8;
  
  iVar6 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    piVar3 = (int *)FUN_005b87b0(param_2);
    if (piVar3 != (int *)0x0) {
      iVar6 = *piVar3;
    }
    lVar4 = Mixer_NumBusTypePorts(1);
    lVar5 = Mixer_NumBusTypePorts(4);
    if (((*(int *)(param_1 + 8) == iVar6) && (*(int *)(param_1 + 0x10) == lVar4)) &&
       (*(int *)(param_1 + 0x18) == lVar5)) {
      local_8 = 1;
      iVar6 = 0;
      while (iVar6 < *(int *)(param_1 + 8)) {
        uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + iVar6 * 4);
        uVar2 = *(uint *)(*(int *)(piVar3[2] + iVar6 * 4) + 0x10);
        if (((uVar2 >> 1 & 1) != (uVar1 & 1)) || ((uVar1 >> 1 & 1) != (uVar2 & 1))) {
          local_8 = 0;
        }
        iVar6 = iVar6 + 1;
        if (local_8 == 0) {
          return 0;
        }
      }
      if (local_8 != 0) {
        uVar7 = 0;
        while ((int)uVar7 < *(int *)(param_1 + 0x10)) {
          param_2 = (ISFMixerIn *)0x0;
          lVar4 = Mixer_GetDevice(&param_2,1,uVar7);
          if ((lVar4 < 0) || (param_2 == (ISFMixerIn *)0x0)) {
            local_8 = 0;
          }
          else {
            iVar6 = (**(code **)(*(int *)param_2 + 0x54))(param_2);
            if ((*(uint *)(*(int *)(param_1 + 0x14) + uVar7 * 4) & 1) == (uint)(iVar6 == 0)) {
              (**(code **)(*unaff_retaddr + 0x48))(unaff_retaddr);
            }
            (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
          }
          uVar7 = uVar7 + 1;
          if (local_8 == 0) {
            return 0;
          }
        }
        if (local_8 != 0) {
          uVar7 = 0;
          do {
            if (lVar5 <= (int)uVar7) {
              return local_8;
            }
            param_2 = (ISFMixerIn *)0x0;
            lVar4 = Mixer_GetDevice(&param_2,4,uVar7);
            if ((lVar4 < 0) || (param_2 == (ISFMixerIn *)0x0)) {
              local_8 = 0;
            }
            else {
              iVar6 = (**(code **)(*(int *)param_2 + 0x54))(param_2);
              if ((*(uint *)(*(int *)(param_1 + 0x1c) + uVar7 * 4) & 1) == (uint)(iVar6 == 0)) {
                (**(code **)(*unaff_retaddr + 0x48))(unaff_retaddr);
              }
              (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
            }
            uVar7 = uVar7 + 1;
          } while (local_8 != 0);
        }
      }
    }
  }
  return local_8;
}


