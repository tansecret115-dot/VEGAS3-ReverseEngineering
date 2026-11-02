/* Module: vidcap30.exe
   Function: FUN_00421740
   Address: 00421740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421740(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00420f30(param_1,param_2,param_3,8);
  if ((-1 < iVar1) && (iVar1 = FUN_00455660(param_3), -1 < iVar1)) {
    *(undefined4 *)(param_3 + 0x160) = param_4;
    *(undefined4 *)(param_3 + 0x164) = param_5;
    _mbscpy((uchar *)(param_3 + 0x684),(uchar *)"c:\\sfvidcap.avi");
  }
  return iVar1;
}


