/* Module: vegas30k.dll
   Function: Transport_EnumMIDIIn
   Address: 0117ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_EnumMIDIIn(struct IEnumMIDIIn * *) */

long Transport_EnumMIDIIn(IEnumMIDIIn **param_1)

{
  long lVar1;
  
                    /* 0x17ef90  536  ?Transport_EnumMIDIIn@@YGJPAPAUIEnumMIDIIn@@@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0xfc))(DAT_012b0b2c,param_1);
  return lVar1;
}


