/* Module: sfpaplug.dll
   Function: FUN_0040fbd0
   Address: 0040fbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040fbd0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7ff8fff2;
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar1 = FUN_00410440(param_1);
    *(undefined4 **)(param_1 + 0x18) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_004103f0(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (param_2 != 0)) {
    iVar2 = FUN_004103f0(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = DAT_00459864;
    return iVar2;
  }
  return iVar2;
}


