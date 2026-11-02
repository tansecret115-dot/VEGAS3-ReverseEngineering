/* Module: qt4plug.dll
   Function: FUN_5f519a60
   Address: 5f519a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f519a60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_5f5196a0(1);
    *(uint *)(param_1 + 0x18) = (uint)(-1 < iVar1);
    return iVar1;
  }
  return param_1;
}


