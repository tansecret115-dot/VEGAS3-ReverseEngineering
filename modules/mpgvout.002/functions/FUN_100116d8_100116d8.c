/* Module: mpgvout.002
   Function: FUN_100116d8
   Address: 100116d8
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_100116d8(int param_1,int param_2)

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


