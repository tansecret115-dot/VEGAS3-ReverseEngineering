/* Module: encn3260.dll
   Function: FUN_664b5f30
   Address: 664b5f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_664b5f30(uint *param_1,uint *param_2,BITMAPINFO *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  BITMAPINFO *pBVar5;
  uint *puVar6;
  
  if (((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (BITMAPINFO *)0x0)) &&
      (((int)param_5 < 3 && (param_1[1] != 0)))) &&
     (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) == 0)))) {
    uVar4 = (param_3->bmiHeader).biSize;
    puVar6 = param_2;
    for (iVar3 = 0x111; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if ((0x27 < (int)uVar4) && ((int)uVar4 < 0x429)) {
      uVar1 = FUN_664ba320((int)param_3);
      param_2[0x10c] = uVar1;
      if (uVar1 != 0xb) {
        pBVar5 = param_3;
        puVar6 = param_2 + 2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar6 = (pBVar5->bmiHeader).biSize;
          pBVar5 = (BITMAPINFO *)&(pBVar5->bmiHeader).biWidth;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar6 = (char)(pBVar5->bmiHeader).biSize;
          pBVar5 = (BITMAPINFO *)((int)&(pBVar5->bmiHeader).biSize + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        param_2[1] = param_5;
        if ((param_4 & 1) != 0) {
          uVar2 = FUN_664b5b00((byte *)param_1,param_2,(uint *)param_3,param_4,param_5);
          return uVar2;
        }
        uVar2 = FUN_664b5d80((byte *)param_1,param_2,param_3);
        return uVar2;
      }
    }
  }
  return 0x80070057;
}


