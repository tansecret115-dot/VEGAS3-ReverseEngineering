/* Module: mcplug.dll
   Function: FUN_00406510
   Address: 00406510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406510(int *param_1)

{
  int iVar1;
  int unaff_retaddr;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = 0;
  piVar2 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_4);
  if (-1 < iVar1) {
    if ((-1 < unaff_retaddr) && (unaff_retaddr < (int)piVar2)) {
      *param_1 = DAT_00486078;
      return 0;
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


