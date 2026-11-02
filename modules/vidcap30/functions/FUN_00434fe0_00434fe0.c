/* Module: vidcap30.exe
   Function: FUN_00434fe0
   Address: 00434fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434fe0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1;
  iVar3 = param_1 + 0xa48;
  FUN_00426b50(iVar3,&param_1);
  if (((DAT_005bba94 == 0) && (iVar2 = FUN_00427730(iVar3), iVar2 == 0)) &&
     (iVar2 = FUN_004264b0(iVar3), iVar2 == 0)) {
    if (((param_1 & 2) == 0) && (iVar3 = FUN_00425e00(iVar3), iVar3 != 0)) {
      return 0;
    }
    iVar3 = FUN_00424c80(uVar1 + 0xd8);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}


