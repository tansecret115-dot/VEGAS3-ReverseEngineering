/* Module: vegas30.exe
   Function: FUN_005fac00
   Address: 005fac00
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fac00(ulong param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = Transport_Init(FUN_005fbce0,0x65e528,param_1,param_2 | 0x200,DAT_00647200);
  if (-1 < lVar1) {
    Transport_SetAppGUIThreadID(DAT_00647208);
    param_2 = 0;
    if (DAT_0064b4f0 != 0) {
      param_2 = 120000;
    }
    Transport_SetMetric(0x80,&param_2);
    Transport_SetMetric(0x100,&DAT_0064a548);
    Mixer_SetMetronomeMute((uint)(DAT_00649ce4 == 0));
    lVar1 = Mixer_SetMixerPrefs(FUN_005fd570,0);
    if ((-1 < lVar1) && (lVar1 = FUN_005facc0(), -1 < lVar1)) {
      FUN_005fcc60();
      FUN_004f92d0(&DAT_006476a0);
    }
  }
  return lVar1;
}


