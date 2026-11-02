/* Module: sfxpfx1.dll
   Function: FUN_5c95d450
   Address: 5c95d450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c95d450(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    iVar2 = param_2 - (int)param_3;
    do {
      if (*(int *)(iVar2 + (int)param_3) != *param_3) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x24));
  }
  return 1;
}


