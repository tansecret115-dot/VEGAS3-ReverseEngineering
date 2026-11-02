/* Module: vidcap30.exe
   Function: FUN_0044f650
   Address: 0044f650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044f650(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_3;
  uVar3 = DAT_005bb838;
  iVar2 = FUN_0045f820(DAT_005bb838,param_3);
  if (iVar2 != 0) {
    uVar3 = FUN_0044f500(&param_3,param_2,iVar2);
    *param_1 = param_3;
    return uVar3;
  }
  FUN_0045f6a0(uVar3,uVar1);
  *param_1 = param_3;
  return 0;
}


