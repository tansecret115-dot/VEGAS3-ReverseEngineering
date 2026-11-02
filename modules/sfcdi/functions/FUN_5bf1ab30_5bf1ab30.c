/* Module: sfcdi.dll
   Function: FUN_5bf1ab30
   Address: 5bf1ab30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf1ab30(uint param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_5bf31160(param_1,&param_2,param_2,0x4000000);
  puVar1 = param_4;
  if (-1 < iVar2) {
    uVar4 = *param_4;
    puVar5 = param_3;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar2 = FUN_5bf312e0(param_2,(int)param_3,(int *)&param_1,(int *)*param_4);
    FUN_5bf31270(param_2);
    if (iVar2 < 0) {
      return iVar2;
    }
    *puVar1 = param_1;
    iVar2 = (-(uint)(param_1 != 0) & 0x7ffb1f12) + 0x8004e0ee;
  }
  return iVar2;
}


