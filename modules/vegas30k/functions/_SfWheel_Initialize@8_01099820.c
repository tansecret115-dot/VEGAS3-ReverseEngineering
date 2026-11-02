/* Module: vegas30k.dll
   Function: _SfWheel_Initialize@8
   Address: 01099820
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_Initialize_8(undefined4 param_1,int param_2)

{
                    /* 0x99820  1298  _SfWheel_Initialize@8 */
  DAT_01206204 = param_2;
  if (param_2 != 0) {
    _SfWheel_CreateSfGlobalSubclasses_0();
  }
  _SfWheel_ExcludeIntelliPointScrolling_0();
  return;
}


