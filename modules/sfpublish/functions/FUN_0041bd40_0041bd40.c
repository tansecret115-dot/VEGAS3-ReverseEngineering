/* Module: sfpublish.dll
   Function: FUN_0041bd40
   Address: 0041bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041bd40(undefined4 *param_1,HMODULE param_2,int param_3,SIZE_T param_4)

{
  int *piVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  
  *param_1 = 0;
  piVar1 = calloc(1,0x144);
  if (piVar1 == (int *)0x0) {
    return 0x8007000e;
  }
  if (param_4 == 0) {
    param_4 = 0x2000;
  }
  else if (param_4 < 0x801) {
    param_4 = 0x800;
  }
  piVar1[0x49] = param_4;
  piVar1[0x4a] = 0x400;
  piVar1[0x4b] = 0;
  hMem = GlobalAlloc(0x40,param_4);
  pvVar2 = GlobalLock(hMem);
  piVar1[0x4c] = (int)pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    FUN_0041bcc0(piVar1);
    return 0x8007000e;
  }
  if (param_3 != 0) {
    piVar1[0x4f] = param_3;
  }
  piVar1[0x50] = 0;
  *piVar1 = (int)param_2;
  iVar3 = FUN_0041bc60(param_2);
  piVar1[0x4e] = iVar3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x43));
  piVar1[0x42] = 1;
  *param_1 = piVar1;
  return 0;
}


