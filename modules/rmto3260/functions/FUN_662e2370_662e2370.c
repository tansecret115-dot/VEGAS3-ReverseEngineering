/* Module: rmto3260.dll
   Function: FUN_662e2370
   Address: 662e2370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662e2370(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(iVar1 + param_1) = *(undefined1 *)(iVar1 + 0x33 + (int)this);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


