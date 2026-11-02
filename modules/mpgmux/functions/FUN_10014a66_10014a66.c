/* Module: mpgmux.dll
   Function: FUN_10014a66
   Address: 10014a66
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl FUN_10014a66(uint *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  LPWSTR local_c;
  
  local_c = (LPWSTR)0x0;
  if (DAT_1001b180 == 0) {
    cVar1 = (char)*param_1;
    puVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = (char)*puVar3;
      if (('@' < cVar1) && (cVar1 < '[')) {
        *(char *)puVar3 = cVar1 + ' ';
      }
      puVar3 = (uint *)((int)puVar3 + 1);
      cVar1 = *(char *)puVar3;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001b2f4);
    bVar4 = DAT_1001b2f0 == 0;
    if (!bVar4) {
      InterlockedDecrement((LONG *)&DAT_1001b2f4);
      FUN_1000e78d(0x13);
    }
    if (DAT_1001b180 == 0) {
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_1001b2f4);
      }
      else {
        FUN_1000e7ee(0x13);
      }
      cVar1 = (char)*param_1;
      puVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = (char)*puVar3;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *(char *)puVar3 = cVar1 + ' ';
        }
        puVar3 = (uint *)((int)puVar3 + 1);
        cVar1 = *(char *)puVar3;
      }
    }
    else {
      _Size = FUN_10013972(DAT_1001b180,0x100,(char *)param_1,-1,(LPWSTR)0x0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (LPWSTR)0x0)) &&
         (iVar2 = FUN_10013972(DAT_1001b180,0x100,(char *)param_1,-1,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_10013070(param_1,(uint *)local_c);
      }
      if (bVar4) {
        InterlockedDecrement((LONG *)&DAT_1001b2f4);
      }
      else {
        FUN_1000e7ee(0x13);
      }
      FUN_1000c3f0((undefined *)local_c);
    }
  }
  return param_1;
}


