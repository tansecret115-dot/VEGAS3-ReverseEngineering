/* Module: qt4plug.dll
   Function: FUN_5f511f30
   Address: 5f511f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f511f30(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar1 = FUN_5f5139f0(param_1);
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return -0x7ff8fff2;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0xc))
                    (param_1 + 0xc,*(int *)(param_1 + 0x20),param_2);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return iVar2;
}


