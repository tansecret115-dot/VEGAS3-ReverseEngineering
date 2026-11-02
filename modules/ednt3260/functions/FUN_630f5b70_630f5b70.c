/* Module: ednt3260.dll
   Function: FUN_630f5b70
   Address: 630f5b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f5b70(undefined4 *param_1,short param_2,undefined4 *param_3,short param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  _param_2 = 0x81;
  puVar1 = param_5;
  do {
    puVar1[0x4fe] = *param_1;
    puVar1[0x4ff] = param_1[1];
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3 = param_3 + param_4 * 2;
    param_1 = param_1 + iVar3 * 2;
    puVar1 = puVar1 + 2;
    _param_2 = _param_2 + -1;
  } while (_param_2 != 0);
  iVar2 = 0x408;
  do {
    *(undefined4 *)((int)param_5 + iVar2 + -0x408) = *param_1;
    *(undefined4 *)((int)param_5 + iVar2 + -0x404) = param_1[1];
    *param_3 = *(undefined4 *)((int)param_5 + iVar2);
    param_3[1] = *(undefined4 *)((int)param_5 + iVar2 + 4);
    iVar2 = iVar2 + 8;
    param_1 = param_1 + iVar3 * 2;
    param_3 = param_3 + param_4 * 2;
  } while (iVar2 < 0x1800);
  return;
}


