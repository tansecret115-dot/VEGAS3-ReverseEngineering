/* Module: sftrans1.dll
   Function: FUN_0054de90
   Address: 0054de90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054de90(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  if (0 < *piVar2) {
    do {
      iVar1 = *(int *)(piVar2[2] + iVar3 * 4);
      if (param_2 == '\0') {
        *(undefined1 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 0x11) = 0;
      }
      else {
        *(undefined1 *)(iVar1 + 0x11) = *(undefined1 *)(iVar1 + 0x10);
      }
      iVar3 = iVar3 + 1;
      piVar2 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
    } while (iVar3 < *piVar2);
  }
  return;
}


