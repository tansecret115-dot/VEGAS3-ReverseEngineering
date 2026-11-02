/* Module: sftrkfx1.dll
   Function: FUN_5cba6c30
   Address: 5cba6c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cba6c30(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x264) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x260) == 0) {
    return -0x7fff0001;
  }
  hMem = GlobalAlloc(0x40,0xc00);
  pvVar1 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x264) = pvVar1;
  return (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
}


