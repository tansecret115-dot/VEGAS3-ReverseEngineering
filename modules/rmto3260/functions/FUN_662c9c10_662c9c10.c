/* Module: rmto3260.dll
   Function: FUN_662c9c10
   Address: 662c9c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9c10(uint param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *local_8;
  
  uVar1 = param_1;
  iVar5 = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x30))(*(int **)(param_1 + 0x40),&param_1);
  if (-1 < iVar2) {
    if (*(void **)(uVar1 + 0x54) != (void *)0x0) {
      operator_delete(*(void **)(uVar1 + 0x54));
      *(undefined4 *)(uVar1 + 0x54) = 0;
    }
    pvVar3 = operator_new((param_1 & 0xffff) << 1);
    *(void **)(uVar1 + 0x54) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    if ((-1 < iVar2) && ((ushort)param_1 != 0)) {
      do {
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(**(int **)(uVar1 + 0x40) + 0x38))
                          (*(int **)(uVar1 + 0x40),iVar5,&local_8);
        iVar4 = FUN_662cae30(local_8);
        if (iVar4 != 0) {
          *(short *)(*(int *)(uVar1 + 0x54) + (uint)*(ushort *)(uVar1 + 0x5c) * 2) =
               (short)local_8[1];
          *(short *)(uVar1 + 0x5c) = *(short *)(uVar1 + 0x5c) + 1;
        }
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar5 < (ushort)param_1);
    }
  }
  return iVar2;
}


