/* Module: rmbe3260.dll
   Function: FUN_66004780
   Address: 66004780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66004780(void *this,int param_1)

{
  if (((*(int *)(param_1 + 8) == -0x80000000) && (*(int *)(param_1 + 0x18) == 0x457)) &&
     (*(int *)(param_1 + 0xc) == 1)) {
    FUN_66004ee0(this);
  }
  return;
}


