/* Module: vegas30.exe
   Function: FUN_004d9a30
   Address: 004d9a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d9a30(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x69c) + 0x58);
  uVar2 = *(uint *)(iVar1 + 0x84);
  if ((int)uVar2 < 0) {
    return;
  }
  if (4 < uVar2) {
    return;
  }
  if (uVar2 == 0) {
    _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60e,0,0xfffffda8);
    _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60f,0,0x78);
    fVar4 = (float10)*(float *)(param_1 + 0x48);
    if ((float10)_DAT_006106d0 == fVar4) {
      uVar3 = 0;
      goto LAB_004d9c40;
    }
LAB_004d9ab5:
    if ((float10)_DAT_00610fd8 == fVar4) {
      uVar3 = 0xfffffda8;
    }
    else {
      log2(fVar4);
      uVar3 = ftol();
    }
  }
  else {
    if (uVar2 == 1) {
      _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60e,0,0xffffff9c);
      _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60f,0,100);
      fVar4 = (float10)*(float *)(param_1 + 0x4c);
      if ((float10)_DAT_00610fd8 < fVar4) {
        log2((float10)_DAT_006106d0 - fVar4);
        uVar3 = ftol();
        goto LAB_004d9c40;
      }
    }
    else {
      if (uVar2 != 2) {
        _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60e,0,0xfffffda8);
        _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60f,0,0x78);
        fVar4 = (float10)*(float *)(param_1 + 0x40 + uVar2 * 8);
        if ((float10)_DAT_006106d0 == fVar4) {
          uVar3 = 0;
          goto LAB_004d9c40;
        }
        goto LAB_004d9ab5;
      }
      _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60e,0,0xffffff9c);
      _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x60f,0,100);
      fVar4 = (float10)*(float *)(param_1 + 0x50);
      if ((float10)_DAT_00610fd8 < fVar4) {
        log2((float10)_DAT_006106d0 - fVar4);
        uVar3 = ftol();
        goto LAB_004d9c40;
      }
    }
    uVar3 = 0;
    if (fVar4 < (float10)_DAT_00610fd8) {
      log2(((float10)_DAT_00610fe0 - fVar4) * (float10)_DAT_00610fe0);
      uVar3 = ftol();
    }
  }
LAB_004d9c40:
  _FaderInst_Message_16(*(undefined4 *)(iVar1 + 0x88),0x610,1,uVar3);
  return;
}


