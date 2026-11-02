/* Module: oggplug.dll
   Function: FUN_00441e10
   Address: 00441e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00441e10(int *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[4] <= *param_1 + 4) {
    pvVar1 = realloc((void *)param_1[2],param_1[4] + 0x100);
    param_1[2] = (int)pvVar1;
    param_1[4] = param_1[4] + 0x100;
    param_1[3] = *param_1 + (int)pvVar1;
  }
  uVar2 = param_2 & *(uint *)(&DAT_004532cc + param_3 * 4);
  uVar4 = param_3 + param_1[1];
  *(byte *)param_1[3] = *(byte *)param_1[3] | (char)uVar2 << ((byte)param_1[1] & 0x1f);
  if ((((7 < (int)uVar4) &&
       (*(char *)(param_1[3] + 1) = (char)(uVar2 >> (8U - (char)param_1[1] & 0x1f)),
       0xf < (int)uVar4)) &&
      (*(char *)(param_1[3] + 2) = (char)(uVar2 >> (0x10U - (char)param_1[1] & 0x1f)),
      0x17 < (int)uVar4)) &&
     (*(char *)(param_1[3] + 3) = (char)(uVar2 >> (0x18U - (char)param_1[1] & 0x1f)),
     0x1f < (int)uVar4)) {
    if (param_1[1] == 0) {
      *(undefined1 *)(param_1[3] + 4) = 0;
    }
    else {
      *(char *)(param_1[3] + 4) = (char)(uVar2 >> (0x20U - (char)param_1[1] & 0x1f));
    }
  }
  iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  param_1[1] = uVar4 & 7;
  *param_1 = *param_1 + iVar3;
  param_1[3] = param_1[3] + iVar3;
  return;
}


