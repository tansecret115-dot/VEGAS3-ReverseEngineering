/* Module: vegas30.exe
   Function: FUN_0054cc50
   Address: 0054cc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054cc50(int param_1)

{
  int iVar1;
  LPCSTR lpString1;
  int iVar2;
  
  lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1 + 0x170);
  iVar1 = *(int *)(param_1 + 0x154);
  if ((DAT_00647d28 == 1) && (DAT_00647c24 != '\0')) {
    iVar2 = lstrcmpiA(lpString1,".AVI");
    if ((iVar2 == 0) && ((iVar1 != 0 && (2 < *(int *)(param_1 + 0x128))))) {
      return 1;
    }
  }
  return 0;
}


