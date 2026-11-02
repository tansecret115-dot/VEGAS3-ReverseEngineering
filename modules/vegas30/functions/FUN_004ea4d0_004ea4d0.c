/* Module: vegas30.exe
   Function: FUN_004ea4d0
   Address: 004ea4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea4d0(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar6 = 0;
  iVar4 = FUN_005b8630(param_1);
  if ((param_3 != (uint *)0x0) && (uVar1 = *param_3, uVar1 != 0)) {
    iVar6 = -0x7fffbffb;
    if (*(char *)(iVar4 + 0x1d0) == '\x01') {
      *(undefined4 *)(iVar4 + 0x3e0) = 1;
      bVar3 = false;
      if (uVar1 != 0) {
        do {
          iVar2 = *(int *)(param_3[2] + uVar5 * 4);
          iVar6 = FUN_004ea250(param_1,*(undefined4 *)(iVar2 + 8),1,0);
          if (iVar6 < 0) goto LAB_004ea577;
          if (0 < *(int *)(iVar2 + 0x38)) {
            bVar3 = true;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        if (-1 < iVar6) {
          if (bVar3) {
            iVar6 = FUN_004ea880(param_1);
          }
          if (-1 < iVar6) {
            return iVar6;
          }
        }
      }
    }
LAB_004ea577:
    FUN_004ea010(iVar4,iVar6);
  }
  return iVar6;
}


