/* Module: sftrans1.dll
   Function: FUN_0054ddf0
   Address: 0054ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0054ddf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  iVar2 = *piVar1;
  if (0 < iVar2) {
    iVar6 = 0;
    iVar4 = *(int *)piVar1[2];
    *(undefined1 *)(iVar4 + 0x60) = 0;
    *(undefined1 *)(iVar4 + 0x38) = 0;
    if (0 < iVar2) {
      iVar5 = 4;
      iVar7 = 0;
      do {
        iVar3 = iVar4;
        if (iVar6 < iVar2 + -1) {
          iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) +
                                            *(int *)(param_1 + 0x14c) * 8) + 8) + iVar5);
          *(undefined1 *)(iVar4 + 0x60) = 0;
          *(undefined1 *)(iVar4 + 0x38) = 0;
        }
        else {
          iVar4 = 0;
        }
        if (*(char *)(iVar3 + 0x10) != '\0') {
          if (iVar7 != 0) {
            *(undefined1 *)(iVar3 + 0x38) = 1;
            *(undefined1 *)(iVar7 + 0x60) = 1;
          }
          if (iVar4 != 0) {
            *(undefined1 *)(iVar3 + 0x60) = 1;
            *(undefined1 *)(iVar4 + 0x38) = 1;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
        iVar7 = iVar3;
      } while (iVar6 < iVar2);
    }
  }
  return;
}


