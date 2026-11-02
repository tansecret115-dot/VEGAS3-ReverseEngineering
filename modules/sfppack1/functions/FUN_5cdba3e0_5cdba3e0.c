/* Module: sfppack1.dll
   Function: FUN_5cdba3e0
   Address: 5cdba3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdba3e0(void *param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  void *pvVar1;
  
  hMem = GlobalAlloc(0x40,0x34);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    pvVar1 = FUN_5cdba430(this,param_1,param_2,0);
    if (pvVar1 != (void *)0x0) {
      if ((int)pvVar1 + 4 == 0) {
        *param_2 = 0x8007000e;
      }
      return (int)pvVar1 + 4;
    }
  }
  *param_2 = 0x8007000e;
  return 0;
}


