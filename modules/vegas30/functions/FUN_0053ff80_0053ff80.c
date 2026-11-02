/* Module: vegas30.exe
   Function: FUN_0053ff80
   Address: 0053ff80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053ff80(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_c;
  
  local_c = 0;
  if (*(int *)(param_2 + 4) == 3) {
    iVar5 = FUN_0053fa80(param_1,param_2);
    if (iVar5 < 0) {
      return -0x7fffbffb;
    }
    iVar6 = FUN_005b8900(param_1,3);
    piVar2 = *(int **)(param_1 + 0x228);
    iVar3 = *piVar2;
    do {
      while( true ) {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_00540093;
        iVar4 = *(int *)(piVar2[2] + iVar3 * 4);
        if ((param_4 != 0) &&
           (iVar7 = _SfDosGetDateTime_4(iVar4 + 0x3c), iVar7 != *(int *)(iVar4 + 0x2c))) break;
        if ((*(int *)(iVar4 + 0x140) == iVar6) &&
           (iVar1 = iVar5 * 3 + 0x51, iVar7 = iVar4 + iVar1 * 4,
           *(int *)(iVar4 + iVar1 * 4) == *(int *)(param_2 + 0x1c))) {
          uVar8 = FUN_0053fb00(param_1,param_2,iVar7,*(undefined4 *)(iVar4 + 0x10),
                               *(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18),
                               *(undefined4 *)(iVar4 + 0x1c));
          uVar8 = (*(uint *)(iVar7 + 8) ^ uVar8) & 1 ^ *(uint *)(iVar7 + 8);
          *(uint *)(iVar7 + 8) = uVar8;
          if ((uVar8 & 1) == 0) goto LAB_0054006c;
        }
        else {
LAB_0054006c:
          local_c = FUN_005401c0(param_1,iVar4,iVar3);
          *param_3 = *param_3 + 1;
        }
        if (local_c < 0) {
          return local_c;
        }
      }
      local_c = FUN_005400b0(piVar2,iVar4,0);
    } while (-1 < local_c);
  }
  else {
LAB_00540093:
    local_c = 0;
  }
  return local_c;
}


