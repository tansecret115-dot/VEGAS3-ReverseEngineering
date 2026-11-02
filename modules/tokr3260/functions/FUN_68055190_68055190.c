/* Module: tokr3260.dll
   Function: FUN_68055190
   Address: 68055190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_68055190(int param_1,int param_2,int param_3,float param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  int in_stack_ffffff88;
  int in_stack_ffffff8c;
  int local_20;
  int local_1c;
  int local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_20 = 2;
  do {
    iVar3 = 0;
    if (0 < param_2) {
      piVar2 = (int *)(param_5 + 4);
      iVar5 = param_2;
      do {
        if (param_4 - _DAT_6805b0e0 < (float)*piVar2) {
          iVar3 = iVar3 + 1;
        }
        piVar2 = piVar2 + 0x12;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((0 < iVar3) && (local_8 < param_1 - (param_3 + 6))) {
      iVar3 = *(int *)(param_7 + 0x110);
      *(int *)(param_7 + 0x110) = iVar3 + 1;
      piVar2 = (int *)(param_7 + 0x114 + iVar3 * 0x21c);
      local_8 = local_8 + param_3 + 6;
      *piVar2 = 7;
      piVar2[1] = 3;
      piVar2[2] = 1;
      if (0 < param_3) {
        piVar4 = piVar2 + 3;
        for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
      }
      iVar3 = param_3 * 4;
      if (0 < iVar3) {
        piVar4 = piVar2 + 7;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
      }
      if (0 < param_2) {
        fVar1 = param_4 - _DAT_6805b0e0;
        local_c = (int *)(param_5 + 4);
        local_10 = 0;
        local_1c = param_2;
        do {
          iVar3 = local_10 + (local_10 >> 0x1f & 0x3fU);
          iVar5 = iVar3 >> 6;
          iVar3 = (int)(iVar5 + (iVar3 >> 0x1f & 3U)) >> 2;
          if (((fVar1 < (float)*local_c) && (piVar2[iVar5 + 7] < 7)) && (local_8 < param_1 + -0xc))
          {
            if (piVar2[iVar3 + 3] == 0) {
              piVar2[iVar3 + 3] = 1;
              local_8 = local_8 + 0xc;
            }
            iVar3 = *(int *)(param_7 + 0x4278);
            *(int *)(param_7 + 0x4278) = iVar3 + 1;
            piVar4 = (int *)(param_7 + 0x427c + iVar3 * 0x38);
            piVar2[iVar5 * 7 + piVar2[iVar5 + 7] + 0x17] = (int)piVar4;
            piVar2[iVar5 + 7] = piVar2[iVar5 + 7] + 1;
            *piVar4 = local_10;
            piVar4[1] = *local_c;
            piVar4[0xb] = *piVar2;
            piVar4[10] = piVar2[1];
            piVar4[0xc] = piVar2[2];
            iVar3 = FUN_68056870(param_6,piVar4,param_8);
            local_8 = local_8 + iVar3;
            if (param_1 < local_8) {
              iVar3 = FUN_68056870(param_6,piVar4,param_8);
              local_8 = local_8 - iVar3;
              *(int *)(param_7 + 0x4278) = *(int *)(param_7 + 0x4278) + -1;
              piVar2[iVar5 + 7] = piVar2[iVar5 + 7] + -1;
            }
            else {
              piVar6 = (int *)&stack0xffffff88;
              for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar6 = *piVar4;
                piVar4 = piVar4 + 1;
                piVar6 = piVar6 + 1;
              }
              FUN_680569b0(in_stack_ffffff88,in_stack_ffffff8c);
              fVar7 = (float10)(*DAT_68061220)();
              iVar3 = FUN_680538c0((uint)(float)fVar7);
              *local_c = iVar3;
            }
          }
          local_10 = local_10 + 4;
          local_c = local_c + 0x12;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  return local_8;
}


