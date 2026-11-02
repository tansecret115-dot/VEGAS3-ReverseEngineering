/* Module: vegas30.exe
   Function: FUN_005f96e0
   Address: 005f96e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f96e0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CHAR local_410 [260];
  undefined1 local_30c [260];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  iVar1 = FUN_005f9530(local_208,local_410,local_30c,param_1);
  if (iVar1 != 0) {
    iVar1 = lstrlenA(local_410);
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
    iVar2 = _SfTextToLongToken_8(local_410,0);
    do {
      iVar4 = iVar2;
      iVar2 = iVar4 + 1;
      FUN_005f9660(local_104,local_208,iVar2,iVar1,local_30c);
      iVar3 = _SfDoesFileExist_4(local_104);
    } while (iVar3 != 0);
    return iVar4;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return -1;
}


