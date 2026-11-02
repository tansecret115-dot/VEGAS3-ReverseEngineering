/* Module: vegas30k.dll
   Function: FUN_011c6280
   Address: 011c6280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c6280(void)

{
  HGLOBAL pvVar1;
  undefined4 *in_stack_00000010;
  
  if ((LPCVOID)*in_stack_00000010 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)*in_stack_00000010);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)*in_stack_00000010);
    GlobalFree(pvVar1);
    *in_stack_00000010 = 0;
    return 0;
  }
  *in_stack_00000010 = 0;
  return 0;
}


