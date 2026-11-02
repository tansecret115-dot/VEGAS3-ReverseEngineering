/* Module: vegas30k.dll
   Function: SfKernel_ForceTransMixerRefs
   Address: 01001630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfKernel_ForceTransMixerRefs(void) */

void SfKernel_ForceTransMixerRefs(void)

{
  IStream in_stack_fffffcb4;
  undefined4 in_stack_fffffcb8;
  
                    /* 0x1630  403  ?SfKernel_ForceTransMixerRefs@@YGXXZ */
  Transport_Init((_func_long_ISFTransport_ptr_uint_ulong_ptr_ulong___int64_ptr_long *)0x0,0,0,0,
                 (HSFMETRIC__ *)0x0);
  Transport_Cleanup();
  Transport_SetClientContext
            ((_func_long_ISFTransport_ptr_uint_ulong_ptr_ulong___int64_ptr_long *)0x0,0);
  Transport_QueryInternalInterface((_GUID *)&DAT_011dab90,(void **)0x0);
  Transport_GetPos();
  Transport_GetPosEx(0);
  Transport_GetRecPos();
  Transport_GetLength();
  Transport_SetLength(0);
  Transport_GetPreviewPos();
  Transport_GetStatus();
  Transport_IsAnyOpen();
  Transport_IsAnyPlaying();
  Transport_IsPlaying();
  Transport_IsStopped();
  Transport_IsRecording();
  Transport_IsRecMonitoring();
  Transport_IsPreviewPlaying();
  Transport_IsPreviewStopped();
  Transport_Suspend();
  Transport_Resume(0);
  Transport_StartRecMonitor();
  Transport_StopRecMonitor();
  Transport_Start(0,0,0,0,0,0,(double)CONCAT44(in_stack_fffffcb8,in_stack_fffffcb4.lpVtbl));
  Transport_Stop(0,CONCAT44(in_stack_fffffcb4.lpVtbl,0xffffffff));
  Transport_Seek(0,-1,0xffffffff,(_tag_looppoint *)in_stack_fffffcb4.lpVtbl);
  Transport_GetRate();
  Transport_SetRate(1.0,0);
  Transport_StartRec(0,0,0,0,0,0,(int)in_stack_fffffcb4.lpVtbl);
  Transport_StopRec(0,1);
  Transport_StartPreview
            (0,0,(_tag_looppoint *)0x0,(double)CONCAT44(in_stack_fffffcb4.lpVtbl,0x3ff00000));
  Transport_StopPreview(0,1);
  Transport_SeekPreview(0,0,-1,-1,0);
  Transport_SetPrefs();
  Transport_GetPrefs();
  Transport_SetMetric(0,(void *)0x0);
  Transport_GetMetric(0,(void *)0x0);
  Transport_SetCurrentPos(0);
  Transport_SetTempo(0);
  Transport_SetOffset(0);
  Transport_EnumMIDIIn((IEnumMIDIIn **)0x0);
  Transport_EnumMIDIOut((IEnumMIDIOut **)0x0);
  Transport_CanEnableExternalSync(0);
  Transport_EnableExternalSync(0,0);
  Transport_CanGenerateSync(0);
  Transport_GenerateSync(0,0);
  Transport_GetSMPTE_MTC(0,(ulong *)0x0,(int *)0x0,(__int64 *)0x0);
  Transport_ResumeListenForSync();
  Mixer_SetConfiguration((_tmixerprops *)0x0);
  Mixer_UpdateConfiguration((_tmixerprops *)0x0,0,0);
  Mixer_SaveMixer((void *)0x0,(IStream *)0x0);
  Mixer_LoadMixer((void *)0x0,(IStream *)0x0);
  Mixer_SetFXSendCfg((_tfxsend *)0x0,0,0);
  Mixer_SaveMixerCfg((void **)0x0,(ulong *)0x0);
  Mixer_LoadMixerCfg((void *)0x0,0,0);
  Mixer_BusPersist((IStream *)0x0,0,(ISFMixerIn *)0x0);
  Mixer_BusCreate((IStream *)0x0,0,(ISFMixerIn *)0x0);
  Mixer_BusFXGraphPersist((IStream *)0x0,0,(ISFMixerIn *)0x0);
  Mixer_BusFXGraphCreate((IStream *)0x0,0,(ISFMixerIn *)0x0);
  Mixer_BusFXPersist((IStream *)0x0,0,(ISFGraphFilter *)0x0);
  Mixer_BusFXCreate((IStream *)0x0,0,(ISFGraphFilter *)0x0);
  Mixer_FXBusContainerPersist((IStream *)0x0,0,0);
  Mixer_FXBusContainerCreate((IStream *)0x0,0,0);
  Mixer_StartRender((tWAVEFORMATEX *)0x0,0,0,(ulong)in_stack_fffffcb4.lpVtbl);
  Mixer_StopRender(0);
  Mixer_IsRenderingPrepared();
  Mixer_IsRendering();
  _tmixerprops::Persist((IStream *)&stack0xfffffcb4,0);
  _tmixerprops::Create((IStream *)0x0,0,(_tmixerprops *)0x0);
  _SfAudio_CreateTransport_4(0);
  return;
}


