/* Module: vidcap30.exe
   Function: FUN_00408c00
   Address: 00408c00
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID FUN_00408c00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_2c [11];
  
  iVar2 = 0xb;
  if (param_5 == (undefined4 *)0x0) {
    puVar3 = local_2c;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_2c[0] = 0x2c;
  }
  else {
    puVar3 = local_2c;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_5;
      param_5 = param_5 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  pMem = (LPCVOID)FUN_004088f0(param_1,param_2,param_3,local_2c,param_6,param_8,param_9);
  if (pMem != (LPCVOID)0x0) {
    iVar2 = FUN_00408ae0(pMem,param_4,local_2c);
    if (iVar2 != 0) {
      return pMem;
    }
    if (*(code **)(param_3 + 0xc) != (code *)0x0) {
      (**(code **)(param_3 + 0xc))(pMem);
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return (LPCVOID)0x0;
  }
  return (LPCVOID)0x0;
}


