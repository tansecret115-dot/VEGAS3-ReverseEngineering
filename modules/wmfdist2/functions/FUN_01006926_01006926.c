/* Module: wmfdist2.exe
   Function: FUN_01006926
   Address: 01006926
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006926(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x1f0] = (int)param_1 + 0x3b7;
  param_1[0x1f1] = param_1 + 0x12e;
  param_1[0x1f2] = (int)param_1 + 0x5b9;
  param_1[499] = param_1[0xe];
  *(undefined2 *)((int)param_1 + 0x7da) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x1f7) = *(undefined2 *)((int)param_1 + 0x72);
  iVar1 = (*(code *)param_1[9])(0,param_1 + 0x1ef);
  if (iVar1 == -1) {
LAB_010069af:
    FUN_0100718c((undefined4 *)*param_1,0xb,0);
    uVar2 = 0;
  }
  else {
    if (param_1[10] != 0) {
      param_1[0x1f9] = 0;
      param_1[0x1fa] = param_1[0xe];
      param_1[0x1fb] = param_1[0x13];
      *(undefined2 *)(param_1 + 0x1fc) = *(undefined2 *)(param_1 + 0x28);
      *(undefined2 *)((int)param_1 + 0x7f2) = *(undefined2 *)(param_1 + 0x1c);
      param_1[0x1fd] = (uint)*(ushort *)((int)param_1 + 0x72);
      iVar1 = (*(code *)param_1[10])(param_1 + 0x1f9);
      if (iVar1 == -1) goto LAB_010069af;
    }
    uVar2 = 1;
  }
  return uVar2;
}


