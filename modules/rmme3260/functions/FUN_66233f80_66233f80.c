/* Module: rmme3260.dll
   Function: FUN_66233f80
   Address: 66233f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66233f80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar1 = (int *)FUN_66250c10(*(int *)(param_1 + 0x24));
    uVar2 = (**(code **)(**(int **)(*piVar1 + 0xc) + 0x2c))(*(int **)(*piVar1 + 0xc),param_2);
    return uVar2;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  param_2[1] = *(undefined4 *)(param_1 + 0x40);
  return 0;
}


