/* Module: vidcap30.exe
   Function: FUN_00457a40
   Address: 00457a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00457a40(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)*param_2;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(*param_2 + 8) + -4 + iVar2 * 4) + 0x2b8) = 0;
    } while (iVar2 < iVar1);
  }
  return;
}


