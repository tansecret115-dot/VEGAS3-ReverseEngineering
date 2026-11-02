/* Module: vidcap30.exe
   Function: FUN_004a16f0
   Address: 004a16f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a16f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_4;
  
  iVar4 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x4a4);
  uVar3 = uVar1 >> 7 & 1;
  if ((uVar1 >> 6 & 1) == 0) {
    if (uVar3 == 0) {
      iVar2 = FUN_004a1500(param_2);
      if (iVar2 != 0) {
        iVar4 = 1;
        iVar2 = FUN_004a1560(param_1,param_2,param_3);
        if (iVar2 == 0) {
          iVar2 = _SfList_FindItemRange_20
                            (param_1,0,0xffffffff,*(undefined4 *)(param_2 + 0xc),&LAB_004f3f50);
          if (-1 < iVar2) {
            iVar4 = 0;
          }
        }
        else {
          local_4 = 1;
        }
      }
      goto LAB_004a17cc;
    }
  }
  else if (uVar3 == 0) {
    if (((uVar1 & 0x200) == 0) || ((uVar1 & 0x400) == 0)) {
      iVar2 = FUN_004a1500(param_2);
      if (iVar2 != 0) {
        iVar4 = 1;
      }
      goto LAB_004a17cc;
    }
    iVar4 = 1;
    iVar2 = FUN_004a1500(param_2);
    if (iVar2 != 0) goto LAB_004a17cc;
  }
  iVar4 = 1;
  local_4 = 1;
LAB_004a17cc:
  *(uint *)(param_3 + 0x4a4) = (iVar4 << 6 | local_4) << 2 | *(uint *)(param_3 + 0x4a4) & 0xfffffefb
  ;
  return;
}


