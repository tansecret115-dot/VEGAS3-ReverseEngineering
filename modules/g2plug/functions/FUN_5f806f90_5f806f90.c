/* Module: g2plug.dll
   Function: FUN_5f806f90
   Address: 5f806f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f806f90(LPCSTR param_1,undefined4 *param_2)

{
  LPSTR pCVar1;
  int iVar2;
  LPCSTR pCVar3;
  
  pCVar3 = param_1;
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,6);
  iVar2 = lstrcmpiA(pCVar1,pCVar3);
  if (iVar2 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 3;
    }
    return 1;
  }
  pCVar3 = param_1;
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,5);
  iVar2 = lstrcmpiA(pCVar1,pCVar3);
  if (iVar2 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 1;
    }
    return 1;
  }
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,7);
  iVar2 = lstrcmpiA(pCVar1,param_1);
  if (iVar2 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 2;
    }
    return 1;
  }
  return 0;
}


