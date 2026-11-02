/* Module: vfplugs.dll
   Function: FUN_0040b570
   Address: 0040b570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040b570(void *this,undefined4 param_1,uint param_2,HWND param_3)

{
  int iVar1;
  HWND pHVar2;
  
  iVar1 = FUN_004285a0(param_1,param_2,param_3,1,100);
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x6a5);
  if (param_3 == pHVar2) {
    *(double *)((int)this + 0x50) = (double)iVar1 * _DAT_00487e20 * _DAT_00487e88;
    (**(code **)(*(int *)this + 0x2c))(this);
    return 0;
  }
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x6a6);
  if (param_3 == pHVar2) {
    *(double *)((int)this + 0x58) = (double)iVar1 * _DAT_00487e20 * _DAT_00487e88;
    (**(code **)(*(int *)this + 0x2c))(this);
    return 0;
  }
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x6a7);
  if (param_3 == pHVar2) {
    *(double *)((int)this + 0x60) = (double)iVar1 * _DAT_00487e20 * _DAT_00487e88;
    (**(code **)(*(int *)this + 0x2c))(this);
  }
  return 0;
}


