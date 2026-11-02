/* Module: vidcap30.exe
   Function: SfControls_Initialize
   Address: 00499c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 SfControls_Initialize(HINSTANCE__ *param_1)

{
                    /* 0x99c70  265  SfControls_Initialize */
  _FaderInitialize_8(param_1,"SfKrn_Fader_Class");
  _TrackbarInitialize_8(param_1,"SfKrn_Trackbar_Class");
  _SpinnerInitialize_8(param_1,"SfKrn_Spinner_Class");
  _PanInitialize_8(param_1,"SfKrn_Pan_Class");
  _EnvelopeInitialize_8(param_1,"SfKrn_Envelope_Class");
  _TabControlInitialize_8(param_1,"SfKrn_TabControl_Class");
  _MeterInitialize_12(param_1,DAT_005c16d8,"SfKrn_Meter_Class");
  DoneBarInitialize(param_1,"SfKrn_DoneBar_Class");
  _StaticInitialize_8(param_1,"SfKrn_Static_Class");
  _PlexiglasInitialize_8(param_1,"SfKrn_Plexiglas_Class");
  _SpreadInitialize_8(param_1,"SfKrn_Spread_Class");
  SfColorPickInitialize(param_1,"SfKrn_ColorPick_Class");
  return 1;
}


