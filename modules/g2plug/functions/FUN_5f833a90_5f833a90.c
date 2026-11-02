/* Module: g2plug.dll
   Function: FUN_5f833a90
   Address: 5f833a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f833a90(short *param_1,short *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  bool bVar5;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      iVar2 = 5;
      bVar5 = true;
      psVar3 = param_2;
      psVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *psVar3 == *psVar4;
        psVar3 = psVar3 + 1;
        psVar4 = psVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 8;
    } while (uVar1 < param_3);
  }
  return 0;
}


