/* Module: sfppack2.dll
   Function: FUN_5ccf41a0
   Address: 5ccf41a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5ccf41a0(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x4bc) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4b8) == 0) {
    return -0x7fff0001;
  }
  hMem = GlobalAlloc(0x42,0x3200);
  pvVar1 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x4bc) = pvVar1;
  return (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
}


