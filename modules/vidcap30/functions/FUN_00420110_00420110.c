/* Module: vidcap30.exe
   Function: FUN_00420110
   Address: 00420110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420110(byte param_1,DWORD *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  uVar1 = 0;
  if (DAT_005bb7a4 != 0) {
    if ((param_1 & 1) != 0) {
      DVar2 = GetSysColor(5);
      *param_2 = DVar2;
      return 2;
    }
    *param_2 = DAT_005bb550;
    uVar1 = 2;
  }
  return uVar1;
}


