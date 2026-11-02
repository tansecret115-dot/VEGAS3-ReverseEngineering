/* Module: vegas30.exe
   Function: FUN_005c5a50
   Address: 005c5a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c5a50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_005baa30(param_1,0);
  iVar2 = FUN_005ba4b0(param_1,0);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_005b9fc0(param_1,iVar4,1);
      FUN_005ba110(param_1,iVar4);
      if ((-1 < iVar2) && (iVar2 == iVar4)) {
        local_4 = FUN_005ba210(param_1,0,iVar4);
      }
      FUN_005ba030(param_1,uVar3,1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
    return local_4;
  }
  return 0;
}


