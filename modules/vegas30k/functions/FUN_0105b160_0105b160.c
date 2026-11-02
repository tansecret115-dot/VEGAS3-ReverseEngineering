/* Module: vegas30k.dll
   Function: FUN_0105b160
   Address: 0105b160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0105b160(int param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (param_1 == param_2) {
    return 1;
  }
  pcVar1 = (code *)_SfAudio_GetCopyFunction2_8(param_1,param_2);
  if (pcVar1 == (code *)0x0) {
    return 0x80004005;
  }
  (*pcVar1)(param_4,param_4,param_3 * 2,0x3f800000);
  return 0;
}


