/* Module: rmbe3260.dll
   Function: FUN_66038720
   Address: 66038720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66038720(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(iVar1 + param_1) = *(undefined1 *)(iVar1 + 0x45 + (int)this);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


