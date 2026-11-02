/* Module: vidcap30.exe
   Function: _SfBeep@4
   Address: 004774c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfBeep_4(undefined4 param_1)

{
                    /* 0x774c0  258  _SfBeep@4 */
  switch(param_1) {
  default:
    sndPlaySoundA("SystemDefault",1);
    return;
  case 1:
    sndPlaySoundA("SystemExclamation",1);
    return;
  case 2:
    sndPlaySoundA("SystemAsterisk",1);
    return;
  case 3:
    sndPlaySoundA("SystemQuestion",1);
    return;
  case 4:
    sndPlaySoundA("SonicFoundry_DoneProcessing",1);
    return;
  }
}


