/* Module: vegas30.exe
   Function: FUN_00429760
   Address: 00429760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00429760(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0xffff) {
    iVar1 = DAT_0063dad8;
    for (iVar2 = 0; (iVar1 != 0 && (((&DAT_0063daf8)[iVar2] & param_1) == 0)); iVar2 = iVar2 + 1) {
      iVar1 = (&DAT_0063dadc)[iVar2];
    }
    if ((&DAT_0063dad8)[iVar2] == 0) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return param_2 + -1;
}


