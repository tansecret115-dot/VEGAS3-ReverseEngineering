/* Module: vegas30.exe
   Function: FUN_004ee350
   Address: 004ee350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ee350(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_00405370(*(undefined4 *)(param_1[2] + iVar3 * 4));
        if (iVar2 == 0) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return;
}


