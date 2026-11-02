/* Module: vegas30k.dll
   Function: FUN_011d1b80
   Address: 011d1b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011d1b80(int param_1,LPCWAVEFORMATEX param_2)

{
  MMRESULT MVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_011c5d20(param_2,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),0);
    return;
  }
  MVar1 = waveOutOpen((LPHWAVEOUT)0x0,*(UINT *)(param_1 + 0x40),param_2,0,0,1);
  FUN_011c1770(MVar1);
  return;
}


