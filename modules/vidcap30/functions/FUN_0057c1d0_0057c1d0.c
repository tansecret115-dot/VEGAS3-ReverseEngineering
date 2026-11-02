/* Module: vidcap30.exe
   Function: FUN_0057c1d0
   Address: 0057c1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0057c1d0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  piVar3 = &DAT_005a1ca8;
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
    piVar2 = param_2;
    piVar3 = &DAT_005a1cb8;
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
      piVar2 = param_2;
      piVar3 = &DAT_005a6340;
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
        piVar2 = param_2;
        piVar3 = &DAT_005a1c18;
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
        goto LAB_0057c203;
      }
    }
  }
  if (param_1 != 0) {
    FUN_0057b5b0(param_1 + 0xc,param_3);
    return;
  }
LAB_0057c203:
  FUN_0057b5b0(0,param_3);
  return;
}


