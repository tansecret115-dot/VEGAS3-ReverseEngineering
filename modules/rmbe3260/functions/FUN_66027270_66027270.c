/* Module: rmbe3260.dll
   Function: FUN_66027270
   Address: 66027270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66027270(int param_1,uint param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  uVar5 = 0;
  if (8 < param_2) {
    return 0x80070057;
  }
  uVar2 = 0;
  bVar1 = false;
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 8);
  do {
    if (*piVar4 != 0) {
      if (uVar5 == param_2) {
        bVar1 = true;
        *param_3 = iVar3;
        break;
      }
      uVar5 = uVar5 + 1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 9);
  if (!bVar1) {
    *param_3 = 0xffffff;
    uVar2 = 0x80004005;
  }
  return uVar2;
}


