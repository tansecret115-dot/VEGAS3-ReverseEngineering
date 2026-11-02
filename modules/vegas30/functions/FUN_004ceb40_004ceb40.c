/* Module: vegas30.exe
   Function: FUN_004ceb40
   Address: 004ceb40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ceb40(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  long local_c;
  int local_8;
  float local_4;
  
  switch(param_2) {
  case 0:
    if (param_3 < -0x259) {
      fVar2 = (float10)_DAT_00610fd8;
      param_3 = -0x259;
    }
    else if (param_3 < 0x79) {
      if (param_3 == 0) {
        fVar2 = (float10)_DAT_006106d0;
      }
      else {
        if (-600 < param_3) goto LAB_004ceb84;
        fVar2 = (float10)_DAT_00610fd8;
      }
    }
    else {
      param_3 = 0x78;
LAB_004ceb84:
      fVar2 = (float10)_CIpow();
    }
    if (fVar2 == (float10)*(float *)(param_1 + 0x48)) {
      return 0;
    }
    *(float *)(param_1 + 0x48) = (float)fVar2;
    local_8 = *(undefined4 *)(param_1 + 0x18);
    local_4 = (float)param_3 * _DAT_00613a04;
    local_c = 7;
    FUN_00568d40(&local_c,0xc);
    break;
  case 1:
    local_c = param_3;
    local_8 = param_3;
    Mixer_SetOutputDeviceGain(*(ulong *)(param_1 + 0x3c),&local_c);
    return 1;
  case 2:
    if (param_3 < -100) {
      param_3 = -100;
    }
    else if (100 < param_3) {
      param_3 = 100;
    }
    if ((float)param_3 * (float)_DAT_00612af0 == *(float *)(param_1 + 0x4c)) {
      return 0;
    }
    *(float *)(param_1 + 0x4c) = (float)param_3 * (float)_DAT_00612af0;
    break;
  case 3:
    if (param_3 < -100) {
      param_3 = -100;
    }
    else if (100 < param_3) {
      param_3 = 100;
    }
    if ((float)param_3 * (float)_DAT_00612af0 == *(float *)(param_1 + 0x50)) {
      return 0;
    }
    *(float *)(param_1 + 0x50) = (float)param_3 * (float)_DAT_00612af0;
    break;
  default:
    if ((param_2 < 0x200) || (0x2ff < param_2)) {
      if (param_2 < 0x100) {
        return 0;
      }
      if (0x1ff < param_2) {
        return 0;
      }
      if (param_3 < -0x259) {
        param_3 = -0x259;
      }
      else if (0x78 < param_3) {
        param_3 = 0x78;
      }
      if (param_3 == 0) {
        fVar2 = (float10)_DAT_006106d0;
      }
      else if (param_3 < -599) {
        fVar2 = (float10)_DAT_00610fd8;
      }
      else {
        fVar2 = (float10)_CIpow();
      }
      if (fVar2 == (float10)*(float *)(param_1 + -0x6a0 + param_2 * 8)) {
        return 0;
      }
      *(float *)(param_1 + -0x6a0 + param_2 * 8) = (float)fVar2;
    }
    else {
      if (param_3 < -0x259) {
        param_3 = -0x259;
      }
      else if (0x78 < param_3) {
        param_3 = 0x78;
      }
      if (param_3 == 0) {
        fVar2 = (float10)_DAT_006106d0;
      }
      else if (param_3 < -599) {
        fVar2 = (float10)_DAT_00610fd8;
      }
      else {
        fVar2 = (float10)_CIpow();
      }
      if (fVar2 == (float10)*(float *)(param_1 + -4000 + param_2 * 8)) {
        return 0;
      }
      *(float *)(param_1 + -4000 + param_2 * 8) = (float)fVar2;
    }
    if (param_2 == 1) {
      return 1;
    }
  }
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
  }
  (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,uVar1,0,0,0xffffffff,0xffffffff);
  return 1;
}


