/* Module: vegas30.exe
   Function: FUN_0043f440
   Address: 0043f440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043f440(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0xffff) {
    iVar1 = DAT_0063dd60;
    for (iVar2 = 0; (iVar1 != 0 && (((&DAT_0063dd80)[iVar2] & param_1) == 0)); iVar2 = iVar2 + 1) {
      iVar1 = (&DAT_0063dd64)[iVar2];
    }
    if ((&DAT_0063dd60)[iVar2] == 0) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return param_2 + -1;
}


