/* Module: sfcdi.dll
   Function: FUN_5bf12e80
   Address: 5bf12e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf12e80(uint param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,
                undefined4 *param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_10 [2];
  CHAR local_8 [7];
  undefined1 local_1;
  
  iVar2 = FUN_5bf31160(param_1,&param_2,param_2,0x4000000);
  puVar1 = param_4;
  if (-1 < iVar2) {
    uVar5 = *param_4;
    puVar6 = param_3;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar2 = FUN_5bf312e0(param_2,(int)param_3,(int *)&param_1,(int *)*param_4);
    FUN_5bf31270(param_2);
    if (iVar2 < 0) {
      return iVar2;
    }
    *puVar1 = param_1;
    if (param_1 == 0) {
      return -0x7ffb1f12;
    }
    local_10[0] = DAT_5bf6e344 & 0xffffff;
    lstrcpynA(local_8,(LPCSTR)local_10,8);
    local_1 = 0;
    uVar3 = FUN_5bf2cbc0(local_8,0);
    *param_5 = uVar3;
    iVar2 = 0;
  }
  return iVar2;
}


