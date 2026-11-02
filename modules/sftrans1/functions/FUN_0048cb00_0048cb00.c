/* Module: sftrans1.dll
   Function: FUN_0048cb00
   Address: 0048cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048cb00(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *param_1;
  local_4 = param_1[1];
  iVar2 = 0;
  iVar1 = FUN_0048cb80(&local_8,param_2);
  do {
    if (iVar1 == 0) {
      return iVar2;
    }
    if (iVar1 < 1) {
      iVar1 = FUN_0048c9f0(&local_8,0);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    }
    else {
      iVar1 = FUN_0048caa0(&local_8);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    }
    iVar1 = FUN_0048cb80(&local_8,param_2);
  } while( true );
}


