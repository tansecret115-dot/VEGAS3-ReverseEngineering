/* Module: sfcdi.dll
   Function: FUN_5bf092d0
   Address: 5bf092d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf092d0(undefined4 param_1,LPCSTR param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lstrcmpA(param_2 + 0x22,param_3 + 0x22);
  if (iVar1 == 0) {
    iVar1 = lstrcmpA(param_2,param_3);
    if (iVar1 != 0) {
      iVar2 = lstrlenA(param_2);
      if (iVar2 == 0) {
        return 1;
      }
      iVar2 = lstrlenA(param_3);
      if (iVar2 == 0) {
        return -1;
      }
      return iVar1;
    }
    iVar1 = lstrcmpA(param_2 + 10,param_3 + 10);
    if (iVar1 == 0) {
      iVar1 = lstrcmpA(param_2 + 0x1c,param_3 + 0x1c);
      if (iVar1 == 0) {
        if (*(uint *)(param_3 + 0x3c) < *(uint *)(param_2 + 0x3c)) {
          return 1;
        }
        iVar1 = -(uint)(*(uint *)(param_2 + 0x3c) < *(uint *)(param_3 + 0x3c));
      }
    }
  }
  return iVar1;
}


