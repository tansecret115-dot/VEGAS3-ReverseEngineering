/* Module: mp3rw.dll
   Function: FUN_00487460
   Address: 00487460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00487460(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 < param_4) {
    iVar1 = param_3 + -1;
    do {
      FUN_0047d7b0(param_1,iVar1,param_1,param_3,1,param_2);
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}


