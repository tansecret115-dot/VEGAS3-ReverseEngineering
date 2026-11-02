/* Module: vidcap30.exe
   Function: FUN_00548cc0
   Address: 00548cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00548cc0(int param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    if (iVar1 != 0) {
      FUN_0055ccf0(iVar1,param_1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}


