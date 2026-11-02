/* Module: sfxpfx2.dll
   Function: FUN_5c8d73b0
   Address: 5c8d73b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5c8d73b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 == 0x3ff)) {
    iVar1 = -1;
  }
  return iVar1;
}


