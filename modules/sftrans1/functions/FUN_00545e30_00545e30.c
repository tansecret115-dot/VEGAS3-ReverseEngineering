/* Module: sftrans1.dll
   Function: FUN_00545e30
   Address: 00545e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00545e30(undefined4 *param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  CHAR *pCVar4;
  
  puVar1 = (undefined4 *)FUN_00545bb0();
  *param_1 = *puVar1;
  if ((param_2 != (LPCSTR)0x0) && ((uint)param_2 >> 0x10 != 0)) {
    uVar2 = lstrlenA(param_2);
    if (uVar2 != 0) {
      FUN_00545c10(uVar2);
      pCVar4 = (CHAR *)*param_1;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pCVar4 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pCVar4 = pCVar4 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pCVar4 = *param_2;
        param_2 = param_2 + 1;
        pCVar4 = pCVar4 + 1;
      }
    }
  }
  return param_1;
}


