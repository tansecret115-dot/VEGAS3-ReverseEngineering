/* Module: sftrans1.dll
   Function: FUN_00485d40
   Address: 00485d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00485d40(HWND param_1,int param_2,undefined4 param_3,LONG param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 == 0x110) {
    SetWindowLongA(param_1,-0x15,param_4);
  }
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 4))(param_1,param_2,param_3,param_4);
  }
  if (param_2 == 2) {
    SetWindowLongA(param_1,-0x15,param_4);
    return 1;
  }
  return uVar2;
}


