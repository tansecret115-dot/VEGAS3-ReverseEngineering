/* Module: sfs4rw.dll
   Function: FUN_004873e0
   Address: 004873e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004873e0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 < param_4) {
    iVar1 = param_3 + -1;
    do {
      FUN_0047d730(param_1,iVar1,param_1,param_3,1,param_2);
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}


