/* Module: vegas30.exe
   Function: FUN_005f9910
   Address: 005f9910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f9910(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CHAR local_29c [64];
  undefined1 local_25c [64];
  undefined1 local_21c [260];
  undefined1 local_118 [4];
  undefined1 local_114 [276];
  
  FUN_005f06b0(param_2,local_118);
  FUN_005f9530(local_21c,local_29c,local_25c,local_114);
  iVar1 = _SfTextToLongToken_8(local_29c,0);
  iVar2 = lstrlenA(local_29c);
  FUN_005f9660(param_1,local_21c,iVar1 + param_3,iVar2,local_25c);
  return 0;
}


