/* Module: vegas30.exe
   Function: FUN_0052b130
   Address: 0052b130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0052b130(undefined4 param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x18);
  puVar1 = GlobalLock(hMem);
  *puVar1 = param_1;
  _SfList_CreateExZ_32(puVar1 + 2,4,8,8,2,0,0,0);
  return puVar1;
}


