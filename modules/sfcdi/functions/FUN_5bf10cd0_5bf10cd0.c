/* Module: sfcdi.dll
   Function: FUN_5bf10cd0
   Address: 5bf10cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf10cd0(_sfcdtext *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = cdtext_IsCDTextValid(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = lstrlenA((LPCSTR)(param_1 + 0x678));
  uVar2 = iVar1 + 1;
  if ((uVar2 & 1) != 0) {
    uVar2 = iVar1 + 2;
  }
  iVar1 = FUN_5bf10ae0(param_1);
  return iVar1 + 0x48 + uVar2;
}


