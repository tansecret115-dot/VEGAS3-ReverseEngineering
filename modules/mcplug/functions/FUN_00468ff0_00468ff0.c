/* Module: mcplug.dll
   Function: FUN_00468ff0
   Address: 00468ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00468ff0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 2)) {
    return *(undefined4 *)(iVar1 + 0x20);
  }
  return 0;
}


