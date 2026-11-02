/* Module: sfppack3.dll
   Function: FUN_5cc78474
   Address: 5cc78474
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc78474(undefined4 *param_1)

{
  LPCVOID pvVar1;
  LPCVOID pvVar2;
  
  pvVar2 = (LPCVOID)*param_1;
  while (pvVar2 != (LPCVOID)0x0) {
    pvVar1 = *(LPCVOID *)((int)pvVar2 + 4);
    FUN_5cc31fe0(pvVar2);
    pvVar2 = pvVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


