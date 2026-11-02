/* Module: mpgmux.dll
   Function: FUN_10001270
   Address: 10001270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10001270(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  while (iVar1 != 0) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x10);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x2624))(iVar1);
    }
    iVar1 = *(int *)(param_2 + 4);
  }
  return;
}


