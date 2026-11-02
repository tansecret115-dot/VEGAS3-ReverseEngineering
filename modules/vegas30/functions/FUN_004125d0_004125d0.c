/* Module: vegas30.exe
   Function: FUN_004125d0
   Address: 004125d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004125d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x9c);
  do {
    if ((uVar2 == 0) || (0xb < uVar2)) {
      uVar2 = 0xb;
LAB_004125f4:
      iVar1 = FUN_0040c050(uVar2);
    }
    else {
      uVar2 = uVar2 - 1;
      iVar1 = param_1;
      if (uVar2 != 0) goto LAB_004125f4;
    }
    if (iVar1 != 0) {
      FUN_0040d4a0(iVar1);
      SetFocus(*(HWND *)(iVar1 + 8));
      FUN_00412500(param_1,uVar2);
      return;
    }
  } while( true );
}


