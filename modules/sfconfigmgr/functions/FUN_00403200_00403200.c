/* Module: sfconfigmgr.dll
   Function: FUN_00403200
   Address: 00403200
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00403200(void *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = -0x7fffbffb;
  if ((*(int *)((int)this + 8) != 0) && (*(int *)((int)this + 0xc) != 0)) {
    iVar1 = FUN_00403240();
    if (-1 < iVar1) {
      iVar1 = FUN_00403430(this,param_1);
      if (-1 < iVar1) {
        iVar1 = FUN_00403500((int)this);
      }
    }
  }
  return iVar1;
}


