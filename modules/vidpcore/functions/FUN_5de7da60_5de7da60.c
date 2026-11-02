/* Module: vidpcore.dll
   Function: FUN_5de7da60
   Address: 5de7da60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de7da60(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x44d);
  if (param_4 == pHVar2) {
    param_1[0x15] = (int)((float)iVar1 * _DAT_5df24180);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x44f);
  if (param_4 == pHVar2) {
    param_1[0x16] = (int)((float)iVar1 * _DAT_5df24180);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


