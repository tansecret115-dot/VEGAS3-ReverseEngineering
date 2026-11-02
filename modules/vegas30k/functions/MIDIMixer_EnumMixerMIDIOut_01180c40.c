/* Module: vegas30k.dll
   Function: MIDIMixer_EnumMixerMIDIOut
   Address: 01180c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall MIDIMixer_EnumMixerMIDIOut(struct IEnumMIDIMixerOut * *) */

long MIDIMixer_EnumMixerMIDIOut(IEnumMIDIMixerOut **param_1)

{
  long lVar1;
  
                    /* 0x180c40  133  ?MIDIMixer_EnumMixerMIDIOut@@YGJPAPAUIEnumMIDIMixerOut@@@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x208))(DAT_012b09c8,param_1);
  return lVar1;
}


