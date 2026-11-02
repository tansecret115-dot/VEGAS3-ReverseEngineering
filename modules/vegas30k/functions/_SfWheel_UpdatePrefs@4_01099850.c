/* Module: vegas30k.dll
   Function: _SfWheel_UpdatePrefs@4
   Address: 01099850
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_UpdatePrefs_4(int param_1)

{
                    /* 0x99850  1302  _SfWheel_UpdatePrefs@4 */
  if (((DAT_01206204 != param_1) && (param_1 != 0)) && (DAT_0120e8c0 == 0)) {
    _SfWheel_CreateSfGlobalSubclasses_0();
  }
  DAT_01206204 = param_1;
  return;
}


