/* Module: rmbe3260.dll
   Function: FUN_660390b0
   Address: 660390b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660390b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(iVar1 + param_1) = *(undefined1 *)(iVar1 + 0x46 + (int)this);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


