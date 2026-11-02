/* Module: vegas30.exe
   Function: FUN_00429b80
   Address: 00429b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00429b80(HWND param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == -0xca) {
    uVar2 = FUN_00429b40(param_1,param_2);
    SetWindowLongA(param_1,0,0);
    GetParent(param_1);
  }
  else {
    if (iVar1 == -0xc9) {
      SetWindowLongA(param_1,0,0);
      return 1;
    }
    if (iVar1 == -200) {
      SetWindowLongA(param_1,0,0);
      FUN_004299a0(param_1,*param_2);
      return 0;
    }
  }
  return uVar2;
}


