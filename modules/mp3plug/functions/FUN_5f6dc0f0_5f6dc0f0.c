/* Module: mp3plug.dll
   Function: FUN_5f6dc0f0
   Address: 5f6dc0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6dc0f0(void)

{
  int in_EAX;
  
  if (((in_EAX == 8000) || (in_EAX == 16000)) || (in_EAX == 32000)) {
    return 2;
  }
  if (((in_EAX != 12000) && (in_EAX != 24000)) && (in_EAX != 48000)) {
    if (((in_EAX != 0x2b11) && (in_EAX != 0x5622)) && (in_EAX != 0xac44)) {
      return 0xffffffff;
    }
    return 0;
  }
  return 1;
}


