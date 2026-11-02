/* Module: vegas30.exe
   Function: FUN_005f97a0
   Address: 005f97a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f97a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CHAR local_30c [260];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  iVar1 = FUN_005f9530(local_104,local_30c,local_208,param_2);
  if (iVar1 != 0) {
    iVar1 = _SfTextToLongToken_8(local_30c,0);
    iVar2 = lstrlenA(local_30c);
    FUN_005f9660(param_1,local_104,iVar1 + param_3,iVar2,local_208);
    return 1;
  }
  return 0;
}


