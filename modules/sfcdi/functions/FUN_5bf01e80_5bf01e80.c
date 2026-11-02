/* Module: sfcdi.dll
   Function: FUN_5bf01e80
   Address: 5bf01e80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf01e80(HSFCD__ *param_1)

{
  HSFCD__ *pHVar1;
  HSFCD__ *pHVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  HSFSCSIPORT__ *pHVar6;
  HSFCD__ **ppHVar7;
  
  pHVar2 = param_1;
  if (param_1 == (HSFCD__ *)0x0) {
    return 0x80004003;
  }
  cdr_SetErrorState(param_1,(tCDR_ERRORDATA *)0x0);
  pHVar1 = pHVar2 + 4;
  *(undefined4 *)pHVar2 = 0;
  if (pHVar1 == (HSFCD__ *)0x0) {
    return 0x80004003;
  }
  uVar3 = FUN_5bf01c60((int *)pHVar1);
  if (uVar3 == 0) {
    iVar4 = FUN_5bf01c20((int *)pHVar1);
    if (iVar4 == 0) {
      if ((*(int *)(pHVar2 + 8) != -1) && (*(int *)(pHVar2 + 0xc) != -1)) {
        ppHVar7 = &param_1;
        uVar5 = SfScsi_GetDefIOBufferSize();
        pHVar6 = SfScsi_Open(*(uint *)(pHVar2 + 8),*(uint *)(pHVar2 + 0xc),uVar5,(ulong *)ppHVar7);
        *(HSFSCSIPORT__ **)pHVar2 = pHVar6;
      }
      if (*(int *)pHVar2 == 0) {
        return 0x8004e0c3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


