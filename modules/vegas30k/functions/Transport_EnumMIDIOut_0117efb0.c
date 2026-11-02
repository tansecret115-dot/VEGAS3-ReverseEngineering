/* Module: vegas30k.dll
   Function: Transport_EnumMIDIOut
   Address: 0117efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_EnumMIDIOut(struct IEnumMIDIOut * *) */

long Transport_EnumMIDIOut(IEnumMIDIOut **param_1)

{
  long lVar1;
  
                    /* 0x17efb0  537  ?Transport_EnumMIDIOut@@YGJPAPAUIEnumMIDIOut@@@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xf8))(DAT_012b0b2c,param_1);
  return lVar1;
}


