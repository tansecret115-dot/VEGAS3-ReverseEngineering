/* Module: vegas30k.dll
   Function: FUN_010401b0
   Address: 010401b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_010401b0(undefined4 param_1)

{
  int *piVar1;
  LPVOID pv;
  int iVar2;
  
  pv = CoTaskMemAlloc(0x48);
  if (pv != (LPVOID)0x0) {
    *(undefined4 *)((int)pv + 0x40) = 0;
    *(undefined4 *)((int)pv + 0x44) = 0;
    *(undefined4 *)((int)pv + 0x3c) = 0;
    iVar2 = FUN_01040030(pv,param_1);
    if (iVar2 == 0) {
      CoTaskMemFree(pv);
      return (LPVOID)0x0;
    }
    piVar1 = *(int **)((int)pv + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return pv;
}


