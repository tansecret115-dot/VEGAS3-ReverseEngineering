/* Module: vegas30.exe
   Function: FUN_0053ae40
   Address: 0053ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053ae40(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) == 400) {
    iVar1 = FUN_00445d30(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(byte *)(iVar1 + 0x78) & 0x20) != 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x60);
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0x191) {
      return 0;
    }
    iVar1 = FUN_0050c130(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_00522a00(param_2);
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar2;
}


