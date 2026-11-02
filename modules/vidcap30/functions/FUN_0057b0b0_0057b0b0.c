/* Module: vidcap30.exe
   Function: FUN_0057b0b0
   Address: 0057b0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057b0b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_1;
  piVar3 = &DAT_005a5b18;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_1 + 0xb;
    piVar3 = &DAT_005a5b18;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}


