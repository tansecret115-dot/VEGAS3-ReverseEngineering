/* Module: encn3260.dll
   Function: FUN_664a1f30
   Address: 664a1f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664a1f30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *(int *)(param_1 + 0x3c);
  local_c = param_1 + 0x38;
  if (local_10 != 0) {
    if (local_10 != 0) goto LAB_664a1f5b;
    piVar1 = (int *)0x0;
    while( true ) {
      local_8 = 0;
      FUN_664a1db0(piVar1,&local_8);
      SetWindowPos(*(HWND *)(local_8 + 0x111),(HWND)0x0,0,0,0,0,3);
      SetWindowPos(*(HWND *)(local_8 + 0xf1),(HWND)0x0,0,0,0,0,3);
      FUN_664a1f30(local_8);
      FUN_664bab40(&local_10);
      if (local_10 == 0) break;
LAB_664a1f5b:
      puVar2 = (undefined4 *)FUN_664bab80(local_10);
      piVar1 = (int *)*puVar2;
    }
  }
  return 0;
}


