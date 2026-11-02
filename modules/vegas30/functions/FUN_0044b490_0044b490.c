/* Module: vegas30.exe
   Function: FUN_0044b490
   Address: 0044b490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044b490(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar3 = param_1;
  if ((param_1 != (undefined4 *)0x0) && (param_1[0x1c] != 0)) {
    _SfVideoFilterCache_UnInit_4(param_1);
  }
  puVar4 = param_2;
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  iVar5 = _SfVideoFilterCache_Init_24(puVar3,param_2,param_2[0x1d],0,param_2[0x1e],1);
  if (-1 < iVar5) {
    piVar1 = (int *)puVar4[0x18];
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = puVar4[0x18];
        puVar6 = (undefined4 *)(*(int *)(iVar2 + 4) * iVar7 + *(int *)(iVar2 + 8));
        _SfVideoKeyframe_Insert_36
                  (puVar3,*puVar6,puVar6[1],puVar6[6],puVar6[8],0,puVar6[5],puVar6[4],&param_1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    iVar5 = 0;
  }
  return iVar5;
}


