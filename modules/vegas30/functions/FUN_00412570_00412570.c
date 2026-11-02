/* Module: vegas30.exe
   Function: FUN_00412570
   Address: 00412570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412570(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x9c);
  do {
    uVar2 = uVar2 + 1;
    if (uVar2 < 0xc) {
      if (uVar2 == 0) {
        iVar1 = *(int *)(param_1 + 0xa8);
      }
      else {
        iVar1 = FUN_0040c050(uVar2);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa8);
      uVar2 = 0;
    }
  } while (iVar1 == 0);
  FUN_0040d4a0(iVar1);
  SetFocus(*(HWND *)(iVar1 + 8));
  FUN_00412500(param_1,uVar2);
  return;
}


