/* Module: vegas30.exe
   Function: FUN_00526630
   Address: 00526630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00526630(HWND param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_11c [16];
  undefined1 local_10c [268];
  
  iVar1 = FUN_00508b80(param_2);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00508c00(param_2,iVar3);
      FUN_00508ba0(uVar2,local_11c);
      SendMessageA(param_1,0x143,0,(LPARAM)local_10c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


