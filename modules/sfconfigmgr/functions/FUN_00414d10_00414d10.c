/* Module: sfconfigmgr.dll
   Function: FUN_00414d10
   Address: 00414d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414d10(void)

{
  int iVar1;
  
  iVar1 = FUN_00414e40();
  if (iVar1 != 0) {
    PTR_FUN_00422e88 = FUN_00414cd0;
    PTR_LAB_00422e8c = FUN_00414d60;
    PTR_FUN_00422e90 = FUN_00414d90;
    PTR_FUN_00422e94 = FUN_00414cf0;
    PTR_FUN_00422e98 = FUN_00414dc0;
    PTR_FUN_00422e9c = FUN_00414e00;
    DAT_00422e7c = 5;
  }
  return;
}


