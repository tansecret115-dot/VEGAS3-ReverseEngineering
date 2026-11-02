/* Module: vegas30.exe
   Function: FUN_005a7b00
   Address: 005a7b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a7b00(int *param_1,undefined4 *param_2,int *param_3,uint param_4,int param_5,uint param_6
                ,int param_7,undefined4 param_8,undefined4 param_9,int param_10,int param_11,
                int param_12,undefined4 param_13,undefined4 param_14)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int local_8;
  int local_4;
  
  local_8 = 0;
  if (param_3 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *param_3;
  }
  *param_1 = 0;
  if (param_12 != 0) {
    return 0;
  }
  if (local_4 != 0) {
    pvVar4 = GlobalAlloc(0x42,local_4 * 0x50);
    pvVar5 = GlobalLock(pvVar4);
    *param_1 = (int)pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      return 0;
    }
  }
  param_12 = 0;
  if (0 < local_4) {
    piVar8 = (int *)(*param_1 + 4);
    do {
      piVar1 = *(int **)(param_3[2] + param_12 * 4);
      if ((*(byte *)(piVar1 + 0x1e) & 1) == 0) {
        piVar8[-1] = piVar1[4];
        *piVar8 = piVar1[5];
        piVar8[1] = *piVar1;
        piVar8[2] = piVar1[1];
        piVar8[3] = piVar1[2];
        piVar8[4] = piVar1[3];
        piVar8[0xd] = (uint)(piVar1[0x1d] == 1);
        piVar2 = (int *)piVar8[-1];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
        piVar2 = (int *)*piVar8;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
          _SfVideoPlugin_GetAutomationParamsAt_56
                    (piVar8 + 6,piVar8 + 5,piVar8 + 8,piVar8 + 7,piVar8 + 9,piVar1,param_4,param_5,
                     param_6,param_7,param_8,param_9,param_13,param_14);
        }
        piVar8[0xb] = param_10;
        piVar8[0xc] = param_11;
        uVar3 = piVar8[0x11];
        uVar6 = (uint)piVar1[0x1e] >> 1 & 1 | uVar3 & 0xfffffffe;
        piVar8[0x11] = uVar6;
        uVar7 = (uint)piVar1[0x1e] >> 1 & 2;
        uVar3 = CONCAT31((int3)((uVar3 & 0xfffffffe) >> 8),(char)uVar6);
        piVar8[0x11] = uVar7 | uVar3 & 0xfffffffd;
        piVar8[0x11] = (uint)piVar1[0x1e] >> 2 & 4 | uVar7 | uVar3 & 0xfffffff9;
        piVar8[0xf] = param_4 - param_6;
        piVar8[0x10] = (param_5 - param_7) - (uint)(param_4 < param_6);
        if ((*(byte *)(piVar1 + 0x1e) & 8) != 0) {
          *param_2 = 1;
        }
        local_8 = local_8 + 1;
        piVar8 = piVar8 + 0x14;
      }
      param_12 = param_12 + 1;
    } while (param_12 < local_4);
    if (local_8 != 0) {
      return local_8;
    }
  }
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar4);
  }
  *param_1 = 0;
  return local_8;
}


