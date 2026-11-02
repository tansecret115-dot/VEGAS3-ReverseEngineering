/* Module: vegas30.exe
   Function: FUN_00540af0
   Address: 00540af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540af0(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_c;
  
  local_c = 0;
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  piVar1 = *(int **)(param_1 + 0x228);
  if (piVar1 == (int *)0x0) {
    local_c = -0x7fffbffb;
  }
  else {
    iVar5 = *piVar1 + -1;
    if (-1 < iVar5) {
      do {
        iVar2 = *(int *)(piVar1[2] + iVar5 * 4);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0x14);
          uVar4 = *(uint *)(iVar2 + 0x10);
          if ((iVar3 < param_3) || ((iVar3 <= param_3 && (uVar4 < param_2)))) {
LAB_00540b77:
            uVar8 = uVar4 + *(uint *)(iVar2 + 0x20);
            iVar6 = iVar3 + *(int *)(iVar2 + 0x24) + (uint)CARRY4(uVar4,*(uint *)(iVar2 + 0x20));
            if ((param_3 <= iVar6) && ((param_3 < iVar6 || (param_2 <= uVar8)))) {
              iVar7 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
              if ((iVar6 < iVar7) || ((iVar6 <= iVar7 && (uVar8 < param_2 + param_4))))
              goto LAB_00540bbc;
            }
            if (((param_3 < iVar3) ||
                (((param_3 <= iVar3 && (param_2 < *(uint *)(iVar2 + 0x10))) || (iVar6 < param_3))))
               || ((iVar6 <= param_3 && (uVar8 <= param_2)))) goto LAB_00540bfb;
          }
          else {
            iVar6 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if ((iVar6 <= iVar3) && ((iVar6 < iVar3 || (param_2 + param_4 <= uVar4))))
            goto LAB_00540b77;
          }
LAB_00540bbc:
          if (param_6 == 0) {
            local_c = FUN_005401c0(param_1,iVar2,iVar5);
            if (local_c < 0) {
              return local_c;
            }
            *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 4;
          }
          else {
            local_c = FUN_005400b0(piVar1,iVar2,1);
            if (local_c < 0) {
              return local_c;
            }
          }
        }
LAB_00540bfb:
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) {
          return local_c;
        }
      } while( true );
    }
  }
  return local_c;
}


