/* Module: sctplug.dll
   Function: FUN_004086b0
   Address: 004086b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004086b0(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = -0x7ff8fff2;
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = FUN_00408d70(param_1);
    *(undefined **)(param_1 + 0x1c) = puVar1;
    if (puVar1 != (undefined *)0x0) {
      iVar2 = FUN_00408d20(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (param_2 != 0)) {
    iVar2 = FUN_00408d20(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = DAT_0043b0c4;
    return iVar2;
  }
  return iVar2;
}


