/* Module: vidpcore.dll
   Function: FUN_5de841e0
   Address: 5de841e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de841e0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_5deb35b0(param_2,param_3,param_4,1,0x140);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x467);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x14) = (double)(iVar1 << 5) * _DAT_5df29ff0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x468);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x16) = (double)(iVar1 << 5) * _DAT_5df29ff0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x469);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x18) = (double)iVar1 * _DAT_5df1eec0 * _DAT_5df29ff0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x46a);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x1a) = (double)iVar1 * _DAT_5df1eec0 * _DAT_5df29ff0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x46b);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x1c) = (double)iVar1 * _DAT_5df29fe8 * _DAT_5df29ff0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x46c);
  if (param_4 == pHVar2) {
    *(double *)(param_1 + 0x1e) = (double)iVar1 * _DAT_5df29fe8 * _DAT_5df29ff0;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


