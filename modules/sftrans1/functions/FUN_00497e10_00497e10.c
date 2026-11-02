/* Module: sftrans1.dll
   Function: FUN_00497e10
   Address: 00497e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00497e10(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  float fVar1;
  int iVar2;
  HWND pHVar3;
  
  iVar2 = FUN_004c4710(0x114,param_3,param_4,6,0x1999);
  pHVar3 = GetDlgItem((HWND)param_1[0xc],0x1624);
  if ((param_4 == pHVar3) &&
     (fVar1 = ((float)iVar2 * (float)_DAT_00563ce0 - (float)_DAT_00557d70) * (float)_DAT_0055d680,
     fVar1 != (float)param_1[0x1c])) {
    param_1[0x1c] = (int)fVar1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  return 0;
}


