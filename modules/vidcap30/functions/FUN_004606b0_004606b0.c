/* Module: vidcap30.exe
   Function: FUN_004606b0
   Address: 004606b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004606b0(HWND param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR lpsz;
  undefined8 uVar3;
  CHAR local_20 [32];
  
  local_20[0] = '\0';
  GetDlgItemTextA(param_1,0x9c44,local_20,0x1e);
  lpsz = local_20;
  iVar2 = _ismbcspace((int)local_20[0]);
  while (iVar2 != 0) {
    lpsz = CharNextA(lpsz);
    iVar2 = _ismbcspace((int)*lpsz);
  }
  cVar1 = *lpsz;
  uVar3 = FUN_0045ae30(lpsz,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  if ((cVar1 == '+') || (cVar1 == '-')) {
    FUN_0045aec0(*(uint *)(param_2 + 8) + (uint)uVar3,
                 *(int *)(param_2 + 0xc) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uint)CARRY4(*(uint *)(param_2 + 8),(uint)uVar3),*(undefined4 *)(param_2 + 0x18),
                 *(undefined4 *)(param_2 + 0x1c),local_20,0x1e);
  }
  else {
    FUN_0045b820(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),local_20,0x1e);
  }
  SfSetDlgItemText(param_1,0x9c44,local_20);
  return;
}


