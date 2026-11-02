/* Module: vegas30.exe
   Function: FUN_00573350
   Address: 00573350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00573350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = *(int *)(DAT_0064762c + 0x74);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x80) != 0)) {
    BVar2 = IsWindowVisible(*(HWND *)(iVar1 + 8));
    if (BVar2 != 0) {
      FUN_00572a90(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


