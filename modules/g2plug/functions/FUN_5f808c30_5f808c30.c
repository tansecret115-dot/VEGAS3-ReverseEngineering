/* Module: g2plug.dll
   Function: FUN_5f808c30
   Address: 5f808c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f808c30(int param_1,undefined4 *param_2)

{
  LPSTR pCVar1;
  int iVar2;
  LPCSTR pCVar3;
  LPCSTR lpString2;
  
  lpString2 = (LPCSTR)(param_1 + 4);
  pCVar3 = lpString2;
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,1);
  iVar2 = lstrcmpiA(pCVar1,pCVar3);
  if (iVar2 == 0) {
    *param_2 = 0;
    return 1;
  }
  pCVar3 = lpString2;
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,2);
  iVar2 = lstrcmpiA(pCVar1,pCVar3);
  if (iVar2 == 0) {
    *param_2 = 1;
    return 1;
  }
  pCVar3 = lpString2;
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,3);
  iVar2 = lstrcmpiA(pCVar1,pCVar3);
  if (iVar2 == 0) {
    *param_2 = 2;
    return 1;
  }
  pCVar1 = FUN_5f8177a0(DAT_5f87746c,4);
  iVar2 = lstrcmpiA(pCVar1,lpString2);
  if (iVar2 == 0) {
    *param_2 = 3;
    return 1;
  }
  return 0;
}


