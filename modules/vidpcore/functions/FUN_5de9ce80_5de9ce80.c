/* Module: vidpcore.dll
   Function: FUN_5de9ce80
   Address: 5de9ce80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de9ce80(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  undefined4 *puVar1;
  HWND pHVar2;
  int iVar3;
  HWND pHVar4;
  
  pHVar2 = param_4;
  iVar3 = FUN_5deb35b0(param_2,param_3,param_4,1,100);
  puVar1 = *(undefined4 **)param_1[2];
  param_4 = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b00,&param_4);
  }
  pHVar4 = GetDlgItem((HWND)param_1[0xc],0x5b8);
  if (pHVar2 == pHVar4) {
    *(double *)(param_1 + 0x14) = (double)iVar3 * _DAT_5df1f300;
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  if (param_4 != (HWND)0x0) {
    (**(code **)(param_4->unused + 8))(param_4);
  }
  return 0;
}


