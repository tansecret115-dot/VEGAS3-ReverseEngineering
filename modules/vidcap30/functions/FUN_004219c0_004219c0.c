/* Module: vidcap30.exe
   Function: FUN_004219c0
   Address: 004219c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004219c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0058a1fc;
  while (((piVar1[-1] != *param_1 || (*piVar1 != param_1[1])) || (piVar1[1] != param_2))) {
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + 1;
    if (0x58a34b < (int)piVar1) {
      return (float10)_DAT_00587ad0;
    }
  }
  return (float10)*(double *)(&UNK_0058a208 + iVar2 * 0x18);
}


