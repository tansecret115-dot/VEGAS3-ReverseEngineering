/* Module: vegas30k.dll
   Function: FUN_011af260
   Address: 011af260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011af260(void)

{
  undefined4 uVar1;
  
  CoInitialize((LPVOID)0x0);
  uVar1 = FUN_01187ff0();
  CoUninitialize();
  return uVar1;
}


