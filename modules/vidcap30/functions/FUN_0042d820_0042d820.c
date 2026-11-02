/* Module: vidcap30.exe
   Function: FUN_0042d820
   Address: 0042d820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0042d820(undefined4 *param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar3 = param_1 + 1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  hMem = GlobalAlloc(0x40,0x18);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)0x0;
  }
  else {
    FUN_0057b640("RoutingList",5);
  }
  param_1[0xb] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0042d8d0(param_2,param_1 + 1,0);
  }
  return param_1;
}


