/* Module: vegas30.exe
   Function: FUN_00540d70
   Address: 00540d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00540d70(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0x80004005;
  if (param_1 == 0) {
    return 0x80070057;
  }
  FUN_005b83b0(param_1,1);
  piVar4 = (int *)FUN_005b89a0(param_1);
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        puVar1 = (uint *)(*(int *)(piVar4[2] + iVar5 * 4) + 0x34);
        *puVar1 = *puVar1 | 0x10;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    piVar4 = (int *)FUN_0053f8e0(param_1);
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = *(int *)(piVar4[2] + iVar5 * 4);
          iVar5 = iVar5 + 1;
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffffef;
        } while (iVar5 < iVar2);
      }
      uVar6 = 0;
    }
  }
  FUN_005b84d0(param_1,1);
  return uVar6;
}


