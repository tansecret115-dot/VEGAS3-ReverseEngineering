/* Module: ednt3260.dll
   Function: FUN_630f94b0
   Address: 630f94b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f94b0(short param_1,int param_2,short *param_3,int param_4,short param_5,
                 undefined4 *param_6)

{
  short *psVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = (int)param_5;
  puVar7 = param_6;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  _param_5 = (int)param_1;
  if (0 < _param_5) {
    iVar3 = param_4 - (int)param_3;
    do {
      psVar1 = (short *)(iVar3 + (int)param_3);
      iVar6 = iVar6 + *(short *)((int)psVar1 + (param_2 - param_4));
      uVar2 = *(undefined2 *)(&DAT_63102198 + *psVar1 * 2);
      iVar4 = 0;
      if (0 < *param_3) {
        puVar5 = (undefined2 *)((int)param_6 + iVar6 * 2);
        do {
          *puVar5 = uVar2;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *param_3);
      }
      param_3 = param_3 + 1;
      _param_5 = _param_5 + -1;
    } while (_param_5 != 0);
  }
  if (0x32 < iVar6) {
    FUN_630f92d0();
  }
  return;
}


