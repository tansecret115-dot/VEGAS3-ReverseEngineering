/* Module: sfcdi.dll
   Function: FUN_5bf2bdc0
   Address: 5bf2bdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf2bdc0(int *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  param_1[1] = 0;
  if (*param_1 == 0) {
    return 0;
  }
  hMem = GlobalAlloc(0x42,*param_1 << 2);
  pvVar1 = GlobalLock(hMem);
  param_1[1] = (int)pvVar1;
  return (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
}


