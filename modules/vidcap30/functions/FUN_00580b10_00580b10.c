/* Module: vidcap30.exe
   Function: FUN_00580b10
   Address: 00580b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00580b10(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584986;
  local_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x8c) == 0) {
    ExceptionList = &local_c;
    local_10 = FUN_00404b00(0xe8);
    local_4 = 0;
    if (local_10 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005810c0(0,param_1,&local_14,L"Input");
    }
    *(int *)(param_1 + 0x8c) = iVar1;
    if (iVar1 == 0) goto LAB_00580bf0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x90) == 0) {
    local_10 = FUN_00404b00(0xb0);
    local_4 = 1;
    if (local_10 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00581450(0,param_1,&local_14,&PTR_Rsrc_Bitmap_33_409_ImageData_76823__00592608);
    }
    local_4 = 0xffffffff;
    *(int *)(param_1 + 0x90) = iVar1;
    if (iVar1 == 0) {
      if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))(1);
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
  }
LAB_00580bf0:
  if (param_2 == 0) {
    ExceptionList = local_c;
    return *(undefined4 *)(param_1 + 0x8c);
  }
  if (param_2 == 1) {
    ExceptionList = local_c;
    return *(undefined4 *)(param_1 + 0x90);
  }
  ExceptionList = local_c;
  return 0;
}


