/* Module: sfppack2.dll
   Function: FUN_5cd40679
   Address: 5cd40679
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd40679(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,8,param_4);
    if (param_4 == 0) {
      return 1;
    }
    *(HWND *)(param_4 + 0x18) = param_1;
  }
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = (**(code **)(*piVar1 + 0x4c))(param_1,param_2,param_3,param_4);
  return uVar2;
}


