/* Module: vidpcore.dll
   Function: FUN_5de8de50
   Address: 5de8de50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de8de50(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_5deb35b0(param_2,param_3,param_4,1,200);
  iVar2 = GetDlgCtrlID(param_4);
  if (iVar2 == 0x520) {
    param_1[0x2c] = (int)((float)iVar1 * (float)_DAT_5df1f300);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  else if (iVar2 == 0x521) {
    param_1[0x2d] = (int)((float)iVar1 * (float)_DAT_5df1f300);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  return 0;
}


