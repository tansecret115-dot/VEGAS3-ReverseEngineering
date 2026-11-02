/* Module: mpgvout.001
   Function: FUN_1001134c
   Address: 1001134c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1001134c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 4) <= (uint)(param_2 + *(int *)(param_1 + 0x28))) {
      (**(code **)(param_1 + 0x18))(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x40);
  }
  return iVar1;
}


