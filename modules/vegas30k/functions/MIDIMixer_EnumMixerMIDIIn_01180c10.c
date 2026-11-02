/* Module: vegas30k.dll
   Function: MIDIMixer_EnumMixerMIDIIn
   Address: 01180c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall MIDIMixer_EnumMixerMIDIIn(struct IEnumMIDIMixerIn * *) */

long MIDIMixer_EnumMixerMIDIIn(IEnumMIDIMixerIn **param_1)

{
  long lVar1;
  
                    /* 0x180c10  132  ?MIDIMixer_EnumMixerMIDIIn@@YGJPAPAUIEnumMIDIMixerIn@@@Z */
  lVar1 = -0x7fffbffe;
  *param_1 = (IEnumMIDIMixerIn *)0x0;
  if (DAT_012b09c8 != (int *)0x0) {
    lVar1 = (**(code **)(*DAT_012b09c8 + 0x204))(DAT_012b09c8,param_1);
  }
  return lVar1;
}


