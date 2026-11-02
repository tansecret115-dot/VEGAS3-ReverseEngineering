/* Module: vegas30.exe
   Function: FUN_004e9cb0
   Address: 004e9cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e9cb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_005b8630(param_1);
  iVar3 = iVar1 + 0x10;
  uVar2 = _SfGetString_8(DAT_00647204,0x112);
  SfErrorHandler_DetailsAddString(param_2,uVar2,iVar3);
  iVar1 = iVar1 + 0x1e4;
  uVar2 = _SfGetString_8(DAT_00647204,0x113);
  SfErrorHandler_DetailsAddString(param_2,uVar2,iVar1);
  FUN_005b3e60();
  return 1;
}


