/* Module: vidcap30.exe
   Function: FUN_00453510
   Address: 00453510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00453510(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if (((param_2 == 0x8000) || (param_2 == 0x8004)) && (*(int *)(param_3 + 4) == 5)) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_005a25a8;
    piVar3 = (int *)(param_3 + 0xc);
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      DAT_005ba50c = DAT_005ba50c | 1;
      return 1;
    }
  }
  return 1;
}


