/* Module: sfpagepeel.dll
   Function: FUN_004687a0
   Address: 004687a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004687a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *param_2 = *(undefined4 *)(iVar1 + (int)param_2);
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


