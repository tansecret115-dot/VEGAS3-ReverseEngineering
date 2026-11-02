/* Module: vegas30k.dll
   Function: SfControls_Terminate
   Address: 010549f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 SfControls_Terminate(HINSTANCE__ *param_1)

{
                    /* 0x549f0  788  SfControls_Terminate */
  _FaderTerminate_8(param_1,"SfKrn_Fader_Class");
  _TrackbarTerminate_8(param_1,"SfKrn_Trackbar_Class");
  _SpinnerTerminate_8(param_1,"SfKrn_Spinner_Class");
  _PanTerminate_8(param_1,"SfKrn_Pan_Class");
  _EnvelopeTerminate_8(param_1,"SfKrn_Envelope_Class");
  _TabControlTerminate_8(param_1,"SfKrn_TabControl_Class");
  _MeterTerminate_8(param_1,"SfKrn_Meter_Class");
  DoneBarTerminate(param_1,"SfKrn_DoneBar_Class");
  _StaticTerminate_8(param_1,"SfKrn_Static_Class");
  _PlexiglasTerminate_8(param_1,"SfKrn_Plexiglas_Class");
  _SpreadTerminate_8(param_1,"SfKrn_Spread_Class");
  SfColorPickTerminate(param_1,"SfKrn_ColorPick_Class");
  _SfWheel_Terminate_4(param_1);
  return 1;
}


