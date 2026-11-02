/* Module: vegas30k.dll
   Function: FUN_011278c0
   Address: 011278c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011278c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
  }
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != 0)) {
    FUN_01155ef0(iVar2,*(undefined4 *)(iVar1 + 0x35));
    FUN_01155e90(iVar1);
    *param_2 = 0;
  }
  if (iVar2 != 0) {
    FUN_01127920(iVar2);
    FUN_01155e90(iVar2);
    *param_1 = 0;
  }
  return;
}


