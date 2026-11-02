/* Module: encn3260.dll
   Function: FUN_664b5d80
   Address: 664b5d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b5d80(byte *param_1,uint *param_2,BITMAPINFO *param_3)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  if ((*param_1 & 1) != 0) {
    return 0x80070057;
  }
  if ((4 < (int)param_2[0x10c]) && ((int)param_2[0x10c] < 10)) {
    iVar4 = 0;
    if (-1 < (int)param_2[1]) {
      puVar3 = param_2 + 0x10e;
      do {
        pvVar1 = FUN_664b5e50(param_3);
        if (pvVar1 == (void *)0x0) {
          if (iVar4 + -1 < 0) {
            return 0x80004005;
          }
          puVar3 = param_2 + iVar4 + 0x10d;
          do {
            if ((void *)*puVar3 != (void *)0x0) {
              FUN_664b5ef0((void *)*puVar3);
              *puVar3 = 0;
            }
            puVar3 = puVar3 + -1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          return 0x80004005;
        }
        *puVar3 = (uint)pvVar1;
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 <= (int)param_2[1]);
    }
    *param_2 = *param_2 | 0x100;
    uVar2 = FUN_664ba660((int)param_3);
    param_2[0x10d] = uVar2;
    FUN_664baab0(*(void **)(param_1 + 0x860),param_2);
    FUN_664b4e80(param_1,*(int *)(param_1 + 4),0x311);
    return 0;
  }
  return 0x80004005;
}


