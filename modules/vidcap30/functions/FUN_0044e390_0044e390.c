/* Module: vidcap30.exe
   Function: FUN_0044e390
   Address: 0044e390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044e390(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_4;
  
  uVar3 = DAT_005bb838;
  FUN_0042f360(DAT_005bb838);
  FUN_0046ed20();
  iVar4 = 0;
  local_4 = 0;
  FUN_0042e510(uVar3);
  iVar2 = param_2;
  if ((param_2 != 0) && (iVar1 = FUN_004436d0(uVar3,param_2,0), iVar1 != 0)) {
    iVar2 = FUN_00444550(uVar3,iVar1,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if (((*(uint *)(iVar2 + 0x38) & 0x20) == 0) || ((*(uint *)(iVar2 + 0x38) & 0x10) != 0)) {
      return 1;
    }
  }
  if ((((iVar2 != 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (iVar2 = _SfDoesFileExist_4(param_1), iVar2 != 0)) {
    iVar4 = FUN_0046fdd0(param_1,&local_4,0,0);
    if (-1 < iVar4) {
      FUN_004715a0(2);
      uVar5 = ftol();
      uVar6 = ftol(uVar5);
      iVar4 = FUN_00472f00(param_2,uVar6,uVar5);
      if (-1 < iVar4) {
        return iVar4;
      }
    }
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc520);
    SfErrorHandler_DetailsAddString(0,uVar3,param_1);
  }
  return iVar4;
}


