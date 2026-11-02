/* Module: vegas30k.dll
   Function: FUN_0103e830
   Address: 0103e830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0103e830(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_011dcfb0;
  puStack_10 = &DAT_011d81dc;
  local_14 = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x39c);
  local_8 = 0;
  ExceptionList = &local_14;
  if ((*(int *)(param_1 + 0x388) != 0) && (ExceptionList = &local_14, param_2 != 0)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x388) + 4);
    ExceptionList = &local_14;
    (**(code **)(*piVar2 + 0x38))(piVar2);
  }
  local_8 = 0xffffffff;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
    FUN_01137770();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_14;
  return 0;
}


