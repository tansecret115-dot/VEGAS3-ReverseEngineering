/* Module: vegas30.exe
   Function: FUN_0057bed0
   Address: 0057bed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0057bed0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    _SfList_DeleteList_16(*param_1,0,0xffffffff,0);
    FUN_0057ba60(&LAB_0057be70,*param_1);
    return 0;
  }
  iVar1 = _SfList_CreateExZ_32(param_1,4,0x10,0x10,4,0,0,0);
  if (-1 < iVar1) {
    FUN_0057ba60(&LAB_0057be70,*param_1);
  }
  return iVar1;
}


