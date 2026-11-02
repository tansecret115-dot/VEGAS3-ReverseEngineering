/* Module: vidcap30.exe
   Function: FUN_00583a90
   Address: 00583a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00583a90(int param_1,wchar_t *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = _wtoi(param_2);
  iVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x1c))(iVar1 + -1);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(iVar1 + 0xc);
  }
  *param_3 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  return 0x80040216;
}


