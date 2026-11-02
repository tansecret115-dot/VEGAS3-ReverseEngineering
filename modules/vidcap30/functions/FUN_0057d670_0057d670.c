/* Module: vidcap30.exe
   Function: FUN_0057d670
   Address: 0057d670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0057d670(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  piVar3 = &DAT_005a1d08;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    if (param_1 != 0) {
      FUN_0057b5b0(param_1 + 0xc,param_3);
      return;
    }
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_2;
    piVar3 = &DAT_005a1bb8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      FUN_0057b500(param_1,param_2,param_3);
      return;
    }
    if (param_1 != 0) {
      FUN_0057b5b0(param_1 + 0x10,param_3);
      return;
    }
  }
  FUN_0057b5b0(0,param_3);
  return;
}


