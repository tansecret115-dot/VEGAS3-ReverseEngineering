/* Module: ednt3260.dll
   Function: FUN_630f5230
   Address: 630f5230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f5230(void *param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  if (0 < *(short *)((int)param_1 + 0x6344)) {
    puVar3 = (undefined2 *)((int)param_1 + 0xa372);
    do {
      FUN_630f52e0(param_1,(int)psVar4);
      FUN_630f5620(param_1,puVar3);
      FUN_630f5990(param_1,psVar4);
      psVar4 = (short *)((int)psVar4 + 1);
      puVar3 = puVar3 + 6;
    } while ((int)psVar4 < (int)*(short *)((int)param_1 + 0x6344));
  }
  bVar1 = false;
  psVar4 = (short *)((int)param_1 + 0x63fc);
  iVar2 = 6;
  do {
    if (*psVar4 != 0) {
      bVar1 = true;
    }
    psVar4 = psVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (bVar1) {
    FUN_630f53f0((int)param_1);
    FUN_630f5620(param_1,(undefined2 *)((int)param_1 + 0xa3ae));
    FUN_630f5a80((int)param_1);
  }
  if (*(short *)((int)param_1 + 0x6312) != 0) {
    FUN_630f5590((int)param_1);
    FUN_630f5620(param_1,(undefined2 *)((int)param_1 + 0xa3ba));
    FUN_630f5b40((int)param_1);
  }
  return;
}


