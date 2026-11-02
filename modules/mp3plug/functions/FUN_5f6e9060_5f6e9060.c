/* Module: mp3plug.dll
   Function: FUN_5f6e9060
   Address: 5f6e9060
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_5f6e9060(void)

{
  int in_EAX;
  
  if (-1 < in_EAX) {
    return (float10)*(float *)(&DAT_5f7410e0 + (in_EAX * 3 & 0xfU) * 4) *
           (float10)*(float *)(&DAT_5f741040 + (in_EAX * 3 >> 4) * 4);
  }
  return (float10)*(float *)(&DAT_5f7411c0 + (in_EAX * -3 & 0xfU) * 4) *
         (float10)*(float *)(&DAT_5f741120 + (in_EAX * -3 >> 4) * 4);
}


