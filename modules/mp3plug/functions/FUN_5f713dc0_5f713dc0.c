/* Module: mp3plug.dll
   Function: FUN_5f713dc0
   Address: 5f713dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f713dc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)(iVar3 + param_1[2]) == '\0') {
        iVar3 = iVar3 + 1;
        goto LAB_5f713e06;
      }
      if (iVar2 <= iVar3 + 1) break;
      if (*(char *)(iVar3 + 1 + param_1[2]) == '\0') {
        iVar3 = iVar3 + 2;
        goto LAB_5f713e06;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
LAB_5f713e06:
  iVar2 = 0;
  if (0 < iVar3) {
    piVar4 = (int *)param_1[3];
    piVar1 = piVar4 + iVar3;
    iVar3 = ((int)piVar1 - (int)piVar4 & 0xfffffff8U) + (int)piVar4;
    for (; (int)piVar4 < iVar3; piVar4 = piVar4 + 2) {
      iVar2 = iVar2 + *piVar4 + piVar4[1];
    }
    for (; (int)piVar4 < (int)piVar1; piVar4 = piVar4 + 1) {
      iVar2 = iVar2 + *piVar4;
    }
  }
  return iVar2;
}


