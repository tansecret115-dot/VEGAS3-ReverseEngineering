/* Module: vidcap30.exe
   Function: FUN_004739e0
   Address: 004739e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004739e0(int param_1)

{
  int iVar1;
  undefined4 *unaff_retaddr;
  
  iVar1 = FUN_00473b20();
  if (-1 < iVar1) {
    (**(code **)(**(int **)(param_1 + 0x88) + 4))(*(int **)(param_1 + 0x88));
    *unaff_retaddr = *(undefined4 *)(param_1 + 0x88);
  }
  return iVar1;
}


