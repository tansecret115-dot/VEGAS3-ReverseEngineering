/* Module: aviplug.dll
   Function: FUN_5f94e530
   Address: 5f94e530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f94e530(HANDLE param_1,uint param_2,uint param_3,undefined4 *param_4,uint param_5,
                 DWORD *param_6,uint *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar3 = param_7;
  uVar2 = param_5;
  puVar1 = param_4;
  if (param_7 != (uint *)0x0) {
    *param_7 = 0xffffffff;
    param_7[1] = 0xffffffff;
  }
  if ((param_4 != (undefined4 *)0x0) && (0 < (int)param_5)) {
    puVar6 = param_4;
    for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  puVar4 = FUN_5f94e0f0(param_1,param_2,param_3,0x66727473,(uint *)&param_7,&param_2);
  if (-1 < (int)puVar4) {
    FUN_5f94e370(param_1,-1,param_2,param_3,puVar1,uVar2,param_6,puVar3);
  }
  return;
}


