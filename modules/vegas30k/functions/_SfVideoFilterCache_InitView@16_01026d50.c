/* Module: vegas30k.dll
   Function: _SfVideoFilterCache_InitView@16
   Address: 01026d50
   Source: Ghidra pseudocode (Stage 10 batch) */


long _SfVideoFilterCache_InitView_16(int param_1,undefined4 param_2,undefined4 param_3)

{
  tagCAUUID *ptVar1;
  long lVar2;
  HGLOBAL hMem;
  int *piVar3;
  
                    /* 0x26d50  1253  _SfVideoFilterCache_InitView@16 */
  ptVar1 = (tagCAUUID *)(param_1 + 0x1c);
  *(IUnknown **)(param_1 + 0x24) = *(IUnknown **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = param_3;
  lVar2 = SfVideoPlugin_GetPropPagesIDs(ptVar1,*(IUnknown **)(param_1 + 0x10));
  if (((-1 < lVar2) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)ptVar1 != 0)) {
    hMem = GlobalAlloc(0x40,0xc);
    piVar3 = GlobalLock(hMem);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_LAB_011dba58;
      piVar3[1] = 0;
      piVar3[2] = (int)ptVar1;
    }
    *(int **)(param_1 + 0x38) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    lVar2 = FUN_01026c10(ptVar1);
    if (-1 < lVar2) {
      return 0;
    }
  }
  _SfVideoFilterCache_UnInitView_4(param_1);
  return lVar2;
}


