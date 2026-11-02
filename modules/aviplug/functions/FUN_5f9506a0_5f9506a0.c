/* Module: aviplug.dll
   Function: FUN_5f9506a0
   Address: 5f9506a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9506a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = 0;
  local_4 = 0;
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = FUN_5f94fab0(param_2,&local_4);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  if (*(LPVOID *)(param_1 + 0x18) != (LPVOID)0x0) {
    FUN_5f94fa90(*(LPVOID *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = local_4;
  return iVar1;
}


