/* Module: extmondrv.dll
   Function: FUN_004050a0
   Address: 004050a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004050a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *unaff_retaddr;
  
  if (param_1[3] != 0) {
    return 0x80040204;
  }
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*unaff_retaddr + 0x24))(unaff_retaddr,&stack0xfffffffc);
    if (param_3 == 1) {
      param_1[6] = *(int *)(param_1[2] + 0x30);
      param_1[5] = param_1[5] + 1;
      param_1[3] = (int)unaff_retaddr;
      (**(code **)(*unaff_retaddr + 4))(unaff_retaddr);
      return 0;
    }
    return 0x80040208;
  }
  return 0x8004022a;
}


