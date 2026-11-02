/* Module: vegas30.exe
   Function: FUN_005f95c0
   Address: 005f95c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f95c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CHAR local_410 [260];
  undefined1 local_30c [260];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  iVar2 = -1;
  iVar1 = FUN_005f9530(local_208,local_410,local_30c,param_1);
  if (iVar1 != 0) {
    iVar2 = _SfTextToLongToken_8(local_410,0);
    if (param_2 != 0) {
      iVar1 = lstrlenA(local_410);
      FUN_005f9660(local_104,local_208,iVar2 + 1,iVar1,local_30c);
      iVar1 = _SfDoesFileExist_4(local_104);
      if (iVar1 == 0) {
        return -1;
      }
    }
  }
  return iVar2;
}


