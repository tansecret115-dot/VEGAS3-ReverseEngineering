/* Module: vegas30.exe
   Function: FUN_0054bad0
   Address: 0054bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0054bad0(int *param_1,uint param_2,uint param_3)

{
  short sVar1;
  uint *puVar2;
  int *piVar3;
  LPCSTR lpString;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *param_1;
  *(ushort *)((int)param_1 + 0x76) = *(ushort *)((int)param_1 + 0x76) & 0xfffd;
  piVar7 = param_1 + 0x1a;
  *piVar7 = (int)&DAT_0060f98c;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (*(uint *)(iVar6 + 0x550) <= param_3) {
    return piVar7;
  }
  if (*(uint *)(iVar6 + 0x554) <= param_2) {
    return piVar7;
  }
  puVar2 = *(uint **)(iVar6 + 0xb4);
  if ((puVar2 != (uint *)0x0) && (param_2 < *puVar2)) {
    if ((DAT_0064761c & 0x200) != 0) {
      return piVar7;
    }
    piVar3 = *(int **)(puVar2[2] + param_2 * 4);
    lpString = (LPCSTR)FUN_0054b2c0(*(undefined2 *)(param_3 * 0x10 + 8 + *(int *)(iVar6 + 0x54c)));
    *piVar7 = (int)lpString;
    iVar4 = lstrlenA(lpString);
    param_1[0x1b] = iVar4;
    param_1[0x1c] = iVar4;
    sVar1 = *(short *)(param_3 * 0x10 + 8 + *(int *)(iVar6 + 0x54c));
    if (sVar1 == 7) {
      param_1[0x1c] = 0xff;
    }
    else if (sVar1 == 8) {
      param_1[0x1c] = 0x400;
    }
    if (((byte)*(undefined4 *)(*piVar3 + 0x134) & 0x20) == 0x20) {
      *(byte *)((int)param_1 + 0x76) = *(byte *)((int)param_1 + 0x76) | 2;
      DVar5 = GetSysColor(0x11);
      param_1[0x1e] = DVar5;
    }
    if (*(int *)(iVar6 + 0xd0) != 0) {
      iVar4 = FUN_005498b0(iVar6,piVar3[0x1e4]);
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar6 + 0x2d4 + iVar4 * 4);
        *(byte *)((int)param_1 + 0x77) = *(byte *)((int)param_1 + 0x77) | 1;
        param_1[0x20] = iVar6;
        iVar6 = GetSystemMetrics(0x31);
        param_1[0x21] = iVar6;
        iVar6 = GetSystemMetrics(0x32);
        param_1[0x22] = iVar6;
      }
    }
    return piVar7;
  }
  return piVar7;
}


