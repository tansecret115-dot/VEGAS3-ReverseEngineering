/* Module: rmme3260.dll
   Function: FUN_66207650
   Address: 66207650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66207650(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_10;
  short local_8;
  
  if (((param_2 != (int *)0x0) && (pbVar1 = (byte *)param_2[1], pbVar1 != (byte *)0x0)) &&
     (iVar2 = *param_2, iVar2 != 0)) {
    if (param_1[0x1b] != 0) {
      return 0;
    }
    if ((pbVar1 != (byte *)0x0) && (iVar2 != 0)) {
      local_10 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 |
                 (uint)pbVar1[3];
      local_8 = CONCAT11(pbVar1[8],pbVar1[9]);
    }
    if ((local_8 == 0) || (local_8 == 1)) {
      if (local_10 < 0x434f4e55) {
        if (local_10 == 0x434f4e54) {
          uVar3 = (**(code **)(*param_1 + 0x38))(param_1,pbVar1,iVar2);
          return uVar3;
        }
        if (local_10 == 0x2e524d46) {
          uVar3 = (**(code **)(*param_1 + 0x30))(param_1,pbVar1,iVar2);
          return uVar3;
        }
      }
      else if (local_10 < 0x494e4459) {
        if ((local_10 == 0x494e4458) || (local_10 == 0x44415441)) {
          return 0;
        }
      }
      else {
        if (local_10 == 0x4d445052) {
          uVar3 = (**(code **)(*param_1 + 0x3c))(param_1,pbVar1,iVar2);
          return uVar3;
        }
        if (local_10 == 0x50524f50) {
          uVar3 = (**(code **)(*param_1 + 0x34))(param_1,pbVar1,iVar2);
          return uVar3;
        }
      }
    }
  }
  return 0x80070057;
}


