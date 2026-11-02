/* Module: vidcap30.exe
   Function: FUN_00461d20
   Address: 00461d20
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00461d20(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    _SfList_CreateExZ_32(param_2,4,0x10,0x10,0x40000002,0,0,0);
  }
  iVar1 = _SfDialogBoxParam_20(DAT_005ba2a0,0x212,param_1,&LAB_00461720,param_2);
  return iVar1 == 1;
}


