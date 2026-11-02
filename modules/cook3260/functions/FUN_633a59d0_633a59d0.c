/* Module: cook3260.dll
   Function: FUN_633a59d0
   Address: 633a59d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_633a59d0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while (param_4 != 0) {
    param_4 = param_4 + -1;
    piVar1 = (int *)(param_1 + ((param_3 >> ((byte)param_4 & 0x1f) & 1U) + iVar2 * 2) * 4);
    if (param_4 == 0) {
      if (*piVar1 == 0) {
        *piVar1 = -1 - param_5;
      }
    }
    else {
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + *param_2 * 8) = 0;
        *(undefined4 *)(param_1 + 4 + *param_2 * 8) = 0;
        *piVar1 = *param_2;
        *param_2 = *param_2 + 1;
      }
      iVar2 = *piVar1;
    }
  }
  return;
}


