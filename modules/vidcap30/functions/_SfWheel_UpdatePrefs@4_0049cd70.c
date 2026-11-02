/* Module: vidcap30.exe
   Function: _SfWheel_UpdatePrefs@4
   Address: 0049cd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_UpdatePrefs_4(int param_1)

{
                    /* 0x9cd70  684  _SfWheel_UpdatePrefs@4 */
  if (((DAT_005b6d34 != param_1) && (param_1 != 0)) && (DAT_005c1684 == 0)) {
    _SfWheel_CreateSfGlobalSubclasses_0();
  }
  DAT_005b6d34 = param_1;
  return;
}


