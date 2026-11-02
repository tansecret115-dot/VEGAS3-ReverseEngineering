/* Module: sfppack1.dll
   Function: FUN_5cdc26d0
   Address: 5cdc26d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_5cdc26d0(void *param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  void *pvVar1;
  
  hMem = GlobalAlloc(0x40,0x188);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    pvVar1 = FUN_5cdc25c0(this,0,param_1);
    if (pvVar1 == (void *)0x0) {
      *param_2 = 0x8007000e;
    }
    return pvVar1;
  }
  *param_2 = 0x8007000e;
  return (void *)0x0;
}


