/* Module: extmondrv.dll
   Function: FUN_004028b0
   Address: 004028b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004028b0(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint unaff_EBX;
  int iVar2;
  uint uVar3;
  int unaff_retaddr;
  
  iVar2 = param_3;
  if (param_3 == 0) {
    return 0x80004003;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  (**(code **)(*(int *)param_1[2] + 0x4c))((int *)param_1[2],&param_3,0);
  if (unaff_retaddr != param_1[3]) {
    return 0x80040203;
  }
  uVar3 = 0;
  if (unaff_EBX != 0) {
    do {
      iVar1 = (**(code **)(*(int *)param_1[2] + 0x50))((int *)param_1[2],param_1[5],iVar2);
      if (iVar1 != 0) {
        return 1;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = *param_1 + 1;
      }
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 + 1;
      param_1[5] = param_1[5] + 1;
    } while (uVar3 < unaff_EBX);
  }
  return 0;
}


