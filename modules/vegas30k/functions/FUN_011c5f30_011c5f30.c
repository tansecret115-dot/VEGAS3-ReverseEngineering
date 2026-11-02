/* Module: vegas30k.dll
   Function: FUN_011c5f30
   Address: 011c5f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011c5f30(int param_1,LPCWAVEFORMATEX param_2)

{
  MMRESULT MVar1;
  
  MVar1 = waveOutOpen((LPHWAVEOUT)0x0,*(UINT *)(param_1 + 0x70),param_2,0,0,1);
  FUN_011c1770(MVar1);
  return;
}


