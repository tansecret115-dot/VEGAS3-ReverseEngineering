/* Module: vidcap30.exe
   Function: FUN_00547de0
   Address: 00547de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00547de0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(param_1 + 0x1c8);
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 0x90;
  }
  return 0x90;
}


