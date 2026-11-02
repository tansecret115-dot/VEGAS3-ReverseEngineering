/* Module: encn3260.dll
   Function: FUN_6649e270
   Address: 6649e270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649e270(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    piVar1 = (int *)FUN_664bab80(*(int *)(param_1 + 0x24));
    uVar2 = (**(code **)(**(int **)(*piVar1 + 0xc) + 0x34))(*(int **)(*piVar1 + 0xc),param_2);
    return uVar2;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  param_2[1] = *(undefined4 *)(param_1 + 0x38);
  return 0;
}


