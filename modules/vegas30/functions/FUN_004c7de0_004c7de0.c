/* Module: vegas30.exe
   Function: FUN_004c7de0
   Address: 004c7de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_004c7de0(int param_1,ulong param_2,ISFMixerOut *param_3)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  float10 fVar7;
  long alStack_5c [2];
  undefined1 local_54 [20];
  char acStack_40 [64];
  
  iVar3 = Transport_IsRecording();
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = Transport_IsPlaying();
  uVar2 = param_2;
  if (iVar3 != 0) {
    return 0;
  }
  FUN_005cb070(param_2,-(param_3 != (ISFMixerOut *)0x0) & 0x80,0x80);
  puVar1 = *(uint **)(*(int *)(uVar2 + 0x69c) + 0x54);
  if ((*(byte *)(uVar2 + 0x10) & 0x80) == 0) {
    iVar3 = Mixer_StopRecMonitor(*(ulong *)(uVar2 + 0x3c));
    if (-1 < iVar3) {
      iVar3 = FUN_0058bbd0(uVar2);
    }
    if ((puVar1 != (uint *)0x0) && (puVar1[0x46] != 0)) {
      _FaderInst_SetScrollProc_12(puVar1[0x46],&LAB_004ceea0,param_1);
      _FaderInst_Message_16(puVar1[0x46],0x60e,0,0xfffffda8);
      _FaderInst_Message_16(puVar1[0x46],0x60f,0,0x78);
      fVar7 = (float10)*(float *)(uVar2 + 0x48);
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
    }
    if (iVar3 < 0) {
      _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,0xc,iVar3,0,0);
      iVar3 = 1;
    }
  }
  else {
    iVar3 = FUN_005fb6a0(*(ulong *)(uVar2 + 0x3c));
    if (iVar3 == -0x7ffb2000) {
      lVar4 = Mixer_NumBusTypePorts(0x100);
      param_2 = 0xffffffff;
      (**(code **)(*DAT_0064b144 + 0x6c))(DAT_0064b144,local_54,1);
      if ((lVar4 != 0) && (uVar6 = 0, 0 < lVar4)) {
        do {
          Mixer_GetDeviceName(acStack_40,0x40,0x100,uVar6);
          param_3 = (ISFMixerOut *)0x0;
          Mixer_GetOutDevice(&param_3,0x100,uVar6);
          if ((param_3 != (ISFMixerOut *)0x0) &&
             (iVar3 = (**(code **)(*(int *)param_3 + 0x44))(param_3,local_54,0), -1 < iVar3)) {
            param_2 = uVar6;
            (**(code **)(*(int *)param_3 + 8))(param_3);
            if (uVar6 == 0) goto LAB_004c7fed;
            break;
          }
          (**(code **)(*(int *)param_3 + 8))(param_3);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < lVar4);
      }
      *(ulong *)(uVar2 + 0x3c) = param_2;
      iVar3 = Mixer_StartRecMonitor(param_2);
    }
    if (iVar3 < 0) {
LAB_004c7fed:
      FUN_005cb070(uVar2,0,0x80);
      return 1;
    }
    iVar3 = FUN_0058b9e0(uVar2);
    if (-1 < iVar3) {
      Mixer_GetOutputDeviceRange(*(ulong *)(uVar2 + 0x3c),(long *)&param_2,(long *)&param_3);
      iVar3 = Mixer_GetOutputDeviceGain(*(ulong *)(uVar2 + 0x3c),alStack_5c);
      if (iVar3 < 0) {
        *puVar1 = *puVar1 & 0xffffbfff | 0x8000;
        _FaderInst_SetScrollProc_12(puVar1[0x46],&DAT_004cf0c0,param_1);
        return 0;
      }
      if ((puVar1 != (uint *)0x0) && (puVar1[0x46] != 0)) {
        *puVar1 = *puVar1 & 0xffff3fff;
        _FaderInst_SetScrollProc_12(puVar1[0x46],&LAB_004cefb0,param_1);
        _FaderInst_Message_16(puVar1[0x46],0x60e,0,param_3);
        _FaderInst_Message_16(puVar1[0x46],0x60f,0,param_2);
        _FaderInst_Message_16(puVar1[0x46],0x610,1,alStack_5c[0]);
        return iVar3;
      }
    }
  }
  return iVar3;
}


