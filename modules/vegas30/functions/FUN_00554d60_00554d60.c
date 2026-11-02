/* Module: vegas30.exe
   Function: FUN_00554d60
   Address: 00554d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00554d60(HWND param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == -0xca) {
    uVar2 = FUN_00554de0(param_1,param_2);
    SetWindowLongA(param_1,0,0);
    GetParent(param_1);
    return uVar2;
  }
  if (iVar1 != -0xc9) {
    if (iVar1 == -200) {
      SetWindowLongA(param_1,0,0);
    }
    return 0;
  }
  SetWindowLongA(param_1,0,0);
  return 1;
}


