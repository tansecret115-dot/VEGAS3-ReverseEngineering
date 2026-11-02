/* Module: tokr3260.dll
   Function: FUN_680577c0
   Address: 680577c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_680577c0(int param_1)

{
  int *piVar1;
  size_t _Count;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = *(int *)(param_1 + 0xc);
  if (0 < iVar5) {
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    do {
      if (iVar7 < *piVar1) {
        iVar7 = *piVar1;
      }
      piVar1 = piVar1 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  _Count = 1 << ((byte)iVar7 & 0x1f);
  *(int *)(param_1 + 0x18) = iVar7;
  *(size_t *)(param_1 + 0x14) = _Count;
  pvVar2 = calloc(_Count,4);
  *(void **)(param_1 + 0x20) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x20) + -4 + iVar5 * 4) = 0xffffffff;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 4 + iVar5 * 8);
      if (0 < iVar6) {
        bVar4 = (byte)iVar7 - (char)iVar6;
        iVar6 = 1 << (bVar4 & 0x1f);
        if (0 < iVar6) {
          iVar3 = (*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 8) << (bVar4 & 0x1f)) << 2;
          do {
            iVar3 = iVar3 + 4;
            iVar6 = iVar6 + -1;
            *(int *)(*(int *)(param_1 + 0x20) + -4 + iVar3) = iVar5;
          } while (iVar6 != 0);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  return 0;
}


