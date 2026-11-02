/* Module: vidcap30.exe
   Function: _SfWheel_Initialize@8
   Address: 0049cd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_Initialize_8(undefined4 param_1,int param_2)

{
                    /* 0x9cd40  680  _SfWheel_Initialize@8 */
  DAT_005b6d34 = param_2;
  if (param_2 != 0) {
    _SfWheel_CreateSfGlobalSubclasses_0();
  }
  _SfWheel_ExcludeIntelliPointScrolling_0();
  return;
}


