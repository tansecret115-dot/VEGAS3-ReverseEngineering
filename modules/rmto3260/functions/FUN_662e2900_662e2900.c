/* Module: rmto3260.dll
   Function: FUN_662e2900
   Address: 662e2900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662e2900(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(iVar1 + param_1) = *(undefined1 *)(iVar1 + 0x4a + (int)this);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


