/* Module: vegas30.exe
   Function: FUN_00459080
   Address: 00459080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459080(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004590e0(param_1);
  iVar3 = 0;
  piVar2 = &DAT_0063dfb4;
  do {
    if (iVar1 == *piVar2) break;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (piVar2 < &DAT_0063dfc4);
  if (param_2 == 0) {
    iVar3 = iVar3 + -1;
  }
  else {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 4) {
    if (iVar3 < 0) {
      iVar3 = 3;
    }
  }
  else {
    iVar3 = 0;
  }
  FUN_00458e80(param_1,(&DAT_0063dfb4)[iVar3]);
  DAT_0064767c = DAT_0064767c | 4;
  return;
}


