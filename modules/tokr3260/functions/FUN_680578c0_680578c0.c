/* Module: tokr3260.dll
   Function: FUN_680578c0
   Address: 680578c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_680578c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  size_t _Count;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_8;
  
  local_8 = 0;
  if (param_2 < param_1) {
    return 0;
  }
  piVar6 = (int *)(param_5 + param_1 * 4);
  puVar5 = (undefined4 *)(param_6 + 4 + param_1 * 0x2c);
  while( true ) {
    puVar5[-1] = param_1;
    *puVar5 = *(undefined4 *)((param_4 - param_5) + (int)piVar6);
    iVar3 = *piVar6;
    puVar5[1] = iVar3;
    _Count = FUN_68057340(1 << ((byte)*puVar5 & 0x1f),iVar3);
    puVar5[2] = _Count;
    pvVar2 = calloc(_Count,8);
    puVar5[6] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0xfff0bdc1;
    }
    iVar3 = 0;
    if (0 < (int)puVar5[2]) {
      puVar4 = (undefined4 *)(param_3 + local_8 * 8);
      do {
        iVar1 = puVar5[6];
        *(undefined4 *)(iVar1 + iVar3 * 8) = *puVar4;
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = puVar4[1];
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar3 < (int)puVar5[2]);
    }
    iVar3 = FUN_680577c0((int)(puVar5 + -1));
    if (iVar3 == -999999) break;
    param_1 = param_1 + 1;
    piVar6 = piVar6 + 1;
    puVar5 = puVar5 + 0xb;
    if (param_2 < param_1) {
      return 0;
    }
  }
  return 0xfff0bdc1;
}


