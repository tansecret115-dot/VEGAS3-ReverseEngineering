/* Module: vidcap30.exe
   Function: FUN_0056f6d0
   Address: 0056f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0056f6d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 2)) {
    return *(undefined4 *)(iVar1 + 0x20);
  }
  return 0;
}


