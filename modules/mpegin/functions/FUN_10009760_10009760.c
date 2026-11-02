/* Module: mpegin.dll
   Function: FUN_10009760
   Address: 10009760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10009760(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x308) < 2) {
    iVar2 = 0x1c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + -0xc + iVar2);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x12e50))(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + -0xc + iVar2) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + iVar2);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x12e50))(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + iVar2) = 0;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x28);
  }
  return;
}


