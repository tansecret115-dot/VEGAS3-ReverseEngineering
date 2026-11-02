/* Module: sfppack1.dll
   Function: FUN_5ce0c0a0
   Address: 5ce0c0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5ce0c0a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 == 0x3ff)) {
    iVar1 = -1;
  }
  return iVar1;
}


