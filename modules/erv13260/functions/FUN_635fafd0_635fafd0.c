/* Module: erv13260.dll
   Function: FUN_635fafd0
   Address: 635fafd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fafd0(int param_1,int param_2,int param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar1 = param_6[0x73b];
  iVar2 = param_6[0x74d];
  local_8 = (int *)((int)param_6 + 0x1cd3);
  bVar7 = param_4 != 2;
  if (bVar7) {
    param_4 = 0;
  }
  else {
    param_4 = 4;
  }
  uVar6 = (uint)!bVar7;
  if (uVar6 <= param_4) {
    param_6 = (int *)(param_1 + (param_2 + 1 + (uVar6 * 0x1f + param_3 + 1) * 0x2a) * 4);
    do {
      FUN_635fb150(param_1,param_2 + 1,(int *)(param_3 + 1),&local_c,&local_10,uVar6,param_5,1);
      piVar3 = (int *)*param_6;
      iVar4 = (piVar3[2] + *piVar3 * 2) - local_c;
      iVar5 = (piVar3[3] + piVar3[1] * 2) - local_10;
      if (iVar1 == 0) {
        if (iVar4 < -0x20) {
          iVar4 = iVar4 + 0x40;
        }
        else if (0x1f < iVar4) {
          iVar4 = iVar4 + -0x40;
        }
        if (iVar5 < -0x20) {
          iVar5 = iVar5 + 0x40;
        }
        else if (0x1f < iVar5) {
LAB_635fb0ef:
          iVar5 = iVar5 + -0x40;
        }
      }
      else {
        if ((local_c < -0x1f) && (iVar4 < -0x3f)) {
          iVar4 = iVar4 + 0x40;
        }
        else if ((0x20 < local_c) && (0x3f < iVar4)) {
          iVar4 = iVar4 + -0x40;
        }
        if ((local_10 < -0x1f) && (iVar5 < -0x3f)) {
          iVar5 = iVar5 + 0x40;
        }
        else if ((0x20 < local_10) && (0x3f < iVar5)) goto LAB_635fb0ef;
      }
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x40;
      }
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x40;
      }
      iVar4 = FUN_635f21d0(iVar4,local_8);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + iVar4;
      iVar4 = FUN_635f21d0(iVar5,local_8);
      uVar6 = uVar6 + 1;
      param_6 = param_6 + 0x516;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + iVar4;
    } while ((int)uVar6 <= (int)param_4);
  }
  return;
}


