/* Module: sfppack1.dll
   Function: FUN_5cdfd1f7
   Address: 5cdfd1f7
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdfd1f7(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    pvVar2 = (void *)FUN_5cdb2130(0x30);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = FUN_5cdfd51d(pvVar2,param_1 + -0xc);
    }
    *param_2 = pvVar2;
    iVar1 = (-(uint)(pvVar2 != (void *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}


