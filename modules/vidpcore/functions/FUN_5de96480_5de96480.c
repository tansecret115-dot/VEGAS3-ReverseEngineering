/* Module: vidpcore.dll
   Function: FUN_5de96480
   Address: 5de96480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de96480(int param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = *(ushort *)(param_1 + 6);
  uVar5 = uVar1 >> 1;
  iVar2 = FUN_5de95f90(param_1);
  iVar3 = FUN_5de95fa0(param_1);
  uVar4 = 0;
  if (uVar1 >> 1 != 0) {
    while (*(ushort *)(iVar2 + (uint)uVar4 * 2) < param_2) {
      uVar4 = uVar4 + 1;
      if (uVar5 <= uVar4) {
        return 0;
      }
    }
    if (uVar4 < uVar5) {
      if (*(ushort *)(iVar3 + (uint)uVar4 * 2) <= param_2) {
        *param_3 = uVar4;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


