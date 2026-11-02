/* Module: vegas30k.dll
   Function: FUN_011c8350
   Address: 011c8350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c8350(int param_1,LPCWAVEFORMATEX param_2)

{
  MMRESULT MVar1;
  
  MVar1 = waveInOpen((LPHWAVEIN)0x0,*(UINT *)(param_1 + 0x44),param_2,0,0,1);
  FUN_011c1770(MVar1);
  return;
}


