/* Module: vegas30.exe
   Function: FUN_004220d0
   Address: 004220d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004220d0(HMENU param_1)

{
  long lVar1;
  
  lVar1 = Mixer_NumBusTypePorts(4);
  EnableMenuItem(param_1,0x9e96,(uint)(lVar1 == 0));
  return;
}


