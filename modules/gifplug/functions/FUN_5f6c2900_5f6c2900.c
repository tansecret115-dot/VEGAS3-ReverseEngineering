/* Module: gifplug.dll
   Function: FUN_5f6c2900
   Address: 5f6c2900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c2900(uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  uint local_4;
  
  uVar1 = param_1;
  iVar3 = FUN_5f6c2f90(*(void **)(param_1 + 0xc),(int *)&local_8);
  puVar2 = param_2;
  if ((-1 < iVar3) && (iVar3 = FUN_5f6c3000(*(void **)(uVar1 + 0xc),0,0,(int *)param_2), -1 < iVar3)
     ) {
    iVar3 = 0;
    uVar6 = 1;
    if ((local_4 < 0x80000000) && ((0 < (int)local_4 || (1 < local_8)))) {
      do {
        iVar4 = FUN_5f6c3000(*(void **)(uVar1 + 0xc),uVar6,iVar3,(int *)&param_1);
        if (iVar4 < 0) {
          return iVar4;
        }
        uVar5 = FUN_5f6c2a60(param_1,*puVar2);
        bVar7 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        *puVar2 = uVar5;
        iVar3 = iVar3 + (uint)bVar7;
      } while ((iVar3 < (int)local_4) || ((iVar3 <= (int)local_4 && (uVar6 < local_8))));
    }
    iVar3 = 0;
  }
  return iVar3;
}


