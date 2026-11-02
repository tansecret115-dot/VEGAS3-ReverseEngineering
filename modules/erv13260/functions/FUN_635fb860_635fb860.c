/* Module: erv13260.dll
   Function: FUN_635fb860
   Address: 635fb860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fb860(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
    param_1 = param_1 - 1;
  }
  uVar2 = 0;
  for (; uVar1 != 0; uVar1 = (int)uVar1 >> 1) {
    uVar2 = uVar2 + 1;
  }
  FUN_635f2310(uVar2,param_1,param_2);
  return;
}


