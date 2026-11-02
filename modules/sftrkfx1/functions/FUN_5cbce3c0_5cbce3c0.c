/* Module: sftrkfx1.dll
   Function: FUN_5cbce3c0
   Address: 5cbce3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbce3c0(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = param_3 - (int)param_2;
    do {
      uVar1 = uVar1 + 1;
      *param_2 = *(undefined4 *)(iVar2 + (int)param_2);
      param_2 = param_2 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x24));
  }
  return;
}


