/* Module: vegas30.exe
   Function: FUN_004d28e0
   Address: 004d28e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d28e0(int param_1,int param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  float10 fVar7;
  long local_8 [2];
  
  lVar6 = param_3;
  iVar4 = param_2;
  iVar3 = param_1;
  puVar1 = *(uint **)(*(int *)(param_2 + 0x69c) + 0x54);
  iVar2 = *(int *)(param_1 + 0x5d0);
  if (puVar1[0x93] == 0) {
    puVar1[0x93] = (uint)(puVar1 + 0x94);
    if (*(int *)(iVar2 + 8) != 2) {
      *(undefined4 *)(iVar2 + 8) = 2;
    }
    puVar1[0x92] = 2;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    _TrackbarInst_Init_28
              (puVar1[0x93],0x688,puVar1 + 0x3d,*(undefined4 *)(param_1 + 4),param_3,&LAB_004d2b60,
               param_1);
    FUN_004c37d0(iVar3,iVar4);
  }
  else {
    _TrackbarInst_SetId_8(puVar1[0x93],param_3);
  }
  if (puVar1[0x46] == 0) {
    puVar1[0x46] = (uint)(puVar1 + 0x47);
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    _FaderInst_Init_28(puVar1[0x46],0x1280,puVar1 + 0x35,*(undefined4 *)(iVar3 + 4),lVar6,
                       &LAB_004ceea0,iVar3);
    _FaderInst_Message_16(puVar1[0x46],0x60e,0,0xfffffda8);
    _FaderInst_Message_16(puVar1[0x46],0x60f,0,0x78);
    _FaderInst_Message_16(puVar1[0x46],0x611,0,0);
    fVar7 = (float10)*(float *)(iVar4 + 0x48);
    if ((float10)_DAT_006106d0 == fVar7) {
      uVar5 = 0;
    }
    else if ((float10)_DAT_00610fd8 == fVar7) {
      uVar5 = 0xfffffda8;
    }
    else {
      log2(fVar7);
      uVar5 = ftol();
    }
    _FaderInst_Message_16(puVar1[0x46],0x610,1,uVar5);
    if ((*(byte *)(iVar4 + 0x10) & 0x80) != 0) {
      Mixer_GetOutputDeviceRange(*(ulong *)(iVar4 + 0x3c),&param_1,&param_3);
      lVar6 = Mixer_GetOutputDeviceGain(*(ulong *)(iVar4 + 0x3c),local_8);
      if (lVar6 < 0) {
        *puVar1 = *puVar1 & 0xffffbfff | 0x8000;
        _FaderInst_SetScrollProc_12(puVar1[0x46],&DAT_004cf0c0,iVar3);
        return;
      }
      if ((puVar1 != (uint *)0x0) && (puVar1[0x46] != 0)) {
        *puVar1 = *puVar1 & 0xffff3fff;
        _FaderInst_SetScrollProc_12(puVar1[0x46],&LAB_004cefb0,iVar3);
        _FaderInst_Message_16(puVar1[0x46],0x60e,0,param_3);
        _FaderInst_Message_16(puVar1[0x46],0x60f,0,param_1);
        _FaderInst_Message_16(puVar1[0x46],0x610,1,local_8[0]);
        return;
      }
    }
  }
  else {
    _FaderInst_SetId_8(puVar1[0x46],lVar6);
  }
  return;
}


