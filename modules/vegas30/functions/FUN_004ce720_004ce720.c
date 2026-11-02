/* Module: vegas30.exe
   Function: FUN_004ce720
   Address: 004ce720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ce720(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  long local_8 [2];
  
  switch(param_2) {
  case 0:
    fVar3 = (float10)*(float *)(param_1 + 0x48);
    if ((float10)_DAT_006106d0 != fVar3) {
      if ((float10)_DAT_00610fd8 == fVar3) {
        return 0xfffffda8;
      }
      log2(fVar3);
      if ((float10)_DAT_006106d0 < fVar3) {
        uVar2 = ftol();
        return uVar2;
      }
LAB_004ce7b9:
      uVar2 = ftol();
      return uVar2;
    }
    break;
  case 1:
    Mixer_GetOutputDeviceGain(*(ulong *)(param_1 + 0x3c),local_8);
    return local_8[0];
  case 2:
    uVar2 = ftol();
    return uVar2;
  case 3:
    uVar2 = ftol();
    return uVar2;
  default:
    if ((param_2 < 0x200) || (0x2ff < param_2)) {
      if (param_2 < 0x100) {
        return 0;
      }
      if (0x1ff < param_2) {
        return 0;
      }
      fVar1 = *(float *)(param_1 + -0x6a0 + param_2 * 8);
    }
    else {
      fVar1 = *(float *)(param_1 + -4000 + param_2 * 8);
    }
    fVar3 = (float10)fVar1;
    if ((float10)_DAT_006106d0 != fVar3) {
      if ((float10)_DAT_00610fd8 == fVar3) {
        return 0xfffffda8;
      }
      log2(fVar3);
      if ((float10)_DAT_006106d0 < fVar3) {
        uVar2 = ftol();
        return uVar2;
      }
      goto LAB_004ce7b9;
    }
    break;
  case 0x80:
    uVar2 = ftol();
    return uVar2;
  }
  return 0;
}


