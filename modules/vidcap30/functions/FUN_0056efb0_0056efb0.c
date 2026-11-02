/* Module: vidcap30.exe
   Function: FUN_0056efb0
   Address: 0056efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0056efb0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (*param_1 != 0)) && (*(int *)(*param_1 + 4) != 0)) {
    iVar1 = FUN_00577170();
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


