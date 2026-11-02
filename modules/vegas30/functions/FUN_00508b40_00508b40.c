/* Module: vegas30.exe
   Function: FUN_00508b40
   Address: 00508b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508b40(LPSTR param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _SfPlugIn_FindNode_8(DAT_0064b468,param_2);
  if (iVar1 != 0) {
    lstrcpynA(param_1,(LPCSTR)(iVar1 + 0x20),param_3);
    param_1[param_3 + -1] = '\0';
    return 1;
  }
  return 0;
}


