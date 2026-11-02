/* Module: vidcap30.exe
   Function: FUN_00449e60
   Address: 00449e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00449e60(int param_1)

{
  int iVar1;
  int *piVar2;
  CHAR *pCVar3;
  LPARAM local_55c;
  CHAR local_558 [519];
  undefined1 local_351;
  int local_318 [198];
  
  piVar2 = local_318;
  for (iVar1 = 0xc6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  iVar1 = FUN_00461d20(*(undefined4 *)(param_1 + 8),local_318);
  if (iVar1 != 0) {
    FUN_00449da0(local_318);
    iVar1 = _SfList_CreateExZ_32(&local_55c,4,0x40,0x10,0x40000002,0,0,0);
    if (-1 < iVar1) {
      pCVar3 = local_558;
      for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
        pCVar3[0] = '\0';
        pCVar3[1] = '\0';
        pCVar3[2] = '\0';
        pCVar3[3] = '\0';
        pCVar3 = pCVar3 + 4;
      }
      lstrcpynA(local_558,"Search Results",0x208);
      local_351 = 0;
      _SfList_AllocAndInsertItem_20(local_55c,local_558,0x240,0xffffffff,0);
      SendMessageA(*(HWND *)(param_1 + 0x88),0x613,0,local_55c);
      FUN_00417990(local_55c);
    }
  }
  if (local_318[0] != 0) {
    _SfList_Destroy_4(local_318[0]);
  }
  return 0;
}


