/* Module: sfcdi.dll
   Function: FUN_5bf08c10
   Address: 5bf08c10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf08c10(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = lstrcmpA(param_2,param_1);
  if (iVar1 == 0) {
    iVar1 = lstrcmpA(param_2 + 10,param_1 + 10);
    if (iVar1 == 0) {
      iVar1 = lstrcmpA(param_2 + 0x1c,param_1 + 0x1c);
      return (uint)(iVar1 != 0);
    }
  }
  return 0xffffffff;
}


