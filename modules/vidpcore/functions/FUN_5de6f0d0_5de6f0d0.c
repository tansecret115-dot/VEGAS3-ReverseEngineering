/* Module: vidpcore.dll
   Function: FUN_5de6f0d0
   Address: 5de6f0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de6f0d0(int *param_1,undefined4 param_2,int *param_3,HWND param_4)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  
  pHVar2 = param_4;
  param_4 = (HWND)FUN_5deb35b0(param_2,param_3,param_4,1,10);
  puVar1 = *(undefined4 **)param_1[2];
  param_3 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17af0,&param_3);
  }
  pHVar3 = GetDlgItem((HWND)param_1[0xc],0x3fe);
  if (pHVar2 == pHVar3) {
    *(double *)(param_1 + 0x14) = (double)(int)param_4 * _DAT_5df1a910;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  else {
    pHVar3 = GetDlgItem((HWND)param_1[0xc],0x3ff);
    if (pHVar2 == pHVar3) {
      *(double *)(param_1 + 0x16) = ((double)(int)param_4 + (double)(int)param_4) * _DAT_5df21288;
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
    else {
      pHVar3 = GetDlgItem((HWND)param_1[0xc],0x400);
      if (pHVar2 == pHVar3) {
        *(double *)(param_1 + 0x18) = ((double)(int)param_4 + (double)(int)param_4) * _DAT_5df21288;
        (**(code **)(*param_1 + 0x2c))(param_1);
      }
    }
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return 0;
}


