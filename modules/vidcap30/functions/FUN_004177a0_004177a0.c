/* Module: vidcap30.exe
   Function: FUN_004177a0
   Address: 004177a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004177a0(int *param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_4;
  
  piVar3 = param_1;
  iVar5 = 0;
  bVar2 = false;
  local_4 = 0;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 != (int *)0x0) {
    param_1 = (int *)*param_1;
    if (0 < (int)param_1) {
      do {
        iVar1 = *(int *)(piVar3[2] + iVar5 * 4);
        if (*(int *)(iVar1 + 0x208) == 0) {
          uVar4 = FUN_004171c0(iVar1,(undefined4 *)(iVar1 + 0x208),iVar1);
          *(undefined4 *)(iVar1 + 0x214) = uVar4;
        }
        uVar4 = *(undefined4 *)(iVar1 + 0x208);
        local_4 = local_4 | 1 << ((char)uVar4 - 1U & 0x1f);
        switch(uVar4) {
        case 0:
        case 1:
          if (param_4 != 0) {
LAB_00417869:
            _SfList_DeleteList_16(piVar3,iVar5,1,0);
            param_1 = (int *)((int)param_1 + -1);
            iVar5 = iVar5 + -1;
          }
          break;
        case 6:
          if (param_2 != 0) {
            if (iVar5 == 0) {
              bVar2 = true;
            }
            else {
LAB_00417849:
              if (bVar2) goto LAB_00417869;
              _SfList_MoveRange_16(piVar3,iVar5,0,1);
              bVar2 = true;
            }
          }
          break;
        case 10:
          if (param_2 != 0) {
            if (iVar5 != 0) goto LAB_00417849;
            bVar2 = true;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = local_4;
    }
  }
  return 0;
}


