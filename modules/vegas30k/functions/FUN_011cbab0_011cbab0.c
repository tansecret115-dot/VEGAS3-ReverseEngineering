/* Module: vegas30k.dll
   Function: FUN_011cbab0
   Address: 011cbab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011cbab0(int param_1,LPCWAVEFORMATEX param_2)

{
  MMRESULT MVar1;
  
  MVar1 = waveOutOpen((LPHWAVEOUT)0x0,*(UINT *)(param_1 + 0x2f8),param_2,0,0,1);
  FUN_011c1770(MVar1);
  return;
}


