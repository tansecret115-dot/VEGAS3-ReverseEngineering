/* Module: vegas30.exe
   Function: FUN_004c37d0
   Address: 004c37d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c37d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  long local_8 [2];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x5d0) + 8);
  iVar3 = *(int *)(*(int *)(param_2 + 0x69c) + 0x54);
  _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x61f,0,0);
  switch(iVar2) {
  case 0:
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60e,0,0xfffffda8);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60f,0,0x78);
    fVar4 = (float10)*(float *)(param_2 + 0x48);
    if ((float10)_DAT_006106d0 == fVar4) {
LAB_004c3a44:
      local_8[0] = 0;
      break;
    }
    if ((float10)_DAT_00610fd8 == fVar4) {
LAB_004c3a0f:
      local_8[0] = -600;
      break;
    }
    log2(fVar4);
    if ((float10)_DAT_006106d0 < fVar4) {
      local_8[0] = ftol();
      break;
    }
    goto LAB_004c3894;
  case 1:
    Mixer_GetOutputDeviceGain(*(ulong *)(param_2 + 0x3c),local_8);
    break;
  case 2:
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60e,0,0xffffff9c);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60f,0,100);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x61f,0,1);
    local_8[0] = ftol();
    break;
  case 3:
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60e,0,0xffffff9c);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60f,0,100);
    _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x61f,0,1);
    local_8[0] = ftol();
    break;
  default:
    if ((iVar2 < 0x200) || (0x2ff < iVar2)) {
      if ((iVar2 < 0x100) || (0x1ff < iVar2)) goto LAB_004c3a44;
      _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60e,0,0xfffffda8);
      _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60f,0,0x78);
      fVar1 = *(float *)(param_2 + -0x6a0 + iVar2 * 8);
    }
    else {
      _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60e,0,0xfffffda8);
      _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x60f,0,0x78);
      fVar1 = *(float *)(param_2 + -4000 + iVar2 * 8);
    }
    fVar4 = (float10)fVar1;
    if ((float10)_DAT_006106d0 == fVar4) goto LAB_004c3a44;
    if ((float10)_DAT_00610fd8 == fVar4) goto LAB_004c3a0f;
    log2(fVar4);
    if ((float10)_DAT_006106d0 < fVar4) {
      local_8[0] = ftol();
      break;
    }
LAB_004c3894:
    local_8[0] = ftol();
  }
  _TrackbarInst_Message_16(*(undefined4 *)(iVar3 + 0x24c),0x610,1,local_8[0]);
  return;
}


