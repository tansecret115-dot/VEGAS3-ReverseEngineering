/* Module: vegas30.exe
   Function: FUN_005d9de0
   Address: 005d9de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d9de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_3;
  iVar2 = FUN_005d9d30(param_1,param_3,1);
  if (-1 < iVar2) {
    param_3 = 0;
    do {
      iVar3 = FUN_005d9be0(param_1,&param_3,param_2);
      if (iVar3 != 0) {
        iVar2 = FUN_005d9da0(param_1,iVar3,uVar1);
      }
    } while ((-1 < iVar2) && (iVar3 != 0));
    return iVar2;
  }
  return iVar2;
}


