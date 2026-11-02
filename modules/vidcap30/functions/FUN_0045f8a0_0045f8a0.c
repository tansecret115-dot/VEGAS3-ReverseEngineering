/* Module: vidcap30.exe
   Function: FUN_0045f8a0
   Address: 0045f8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045f8a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0042f4b0(param_1,1);
  iVar1 = FUN_0045f820(param_1,param_2);
  if (iVar1 != 0) {
    if ((param_3 == 0) || ((*(byte *)(iVar1 + 0x38) & 0x20) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    FUN_00443b20(iVar1,uVar2,4);
    if ((param_3 != 0) && ((*(byte *)(iVar1 + 0x38) & 0x20) != 0)) {
      FUN_0042f4b0(param_1,1);
      return 1;
    }
  }
  FUN_0042f4b0(param_1,1);
  return 0;
}


