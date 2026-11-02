/* Module: vegas30.exe
   Function: FUN_004ec4f0
   Address: 004ec4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ec4f0(int *param_1,int param_2,uint *param_3,int param_4)

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
          uVar4 = FUN_004ebc10(iVar1,(undefined4 *)(iVar1 + 0x208),iVar1);
          *(undefined4 *)(iVar1 + 0x214) = uVar4;
        }
        uVar4 = *(undefined4 *)(iVar1 + 0x208);
        local_4 = local_4 | 1 << ((char)uVar4 - 1U & 0x1f);
        switch(uVar4) {
        case 0:
        case 1:
          if ((param_4 != 0) && (*(int *)(iVar1 + 0x214) != -0x7ffb1fb9)) {
LAB_004ec5c9:
            _SfList_DeleteList_16(piVar3,iVar5,1,0);
            param_1 = (int *)((int)param_1 + -1);
            iVar5 = iVar5 + -1;
          }
          break;
        case 6:
        case 0x10:
          if (param_2 != 0) {
            if (iVar5 == 0) {
              bVar2 = true;
            }
            else {
LAB_004ec599:
              if (bVar2) goto LAB_004ec5c9;
              _SfList_MoveRange_16(piVar3,iVar5,0,1);
              bVar2 = true;
            }
          }
          break;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          if (param_2 != 0) {
            if (iVar5 != 0) goto LAB_004ec599;
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


