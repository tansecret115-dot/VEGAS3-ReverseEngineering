/* Module: vegas30.exe
   Function: FUN_005b1600
   Address: 005b1600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b1600(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x5c);
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      if (iVar1 == param_2) {
        return param_1;
      }
      iVar1 = FUN_005b1600(iVar1,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (1 < iVar3) {
      return 0;
    }
  } while( true );
}


