/* Module: mp3plug.dll
   Function: FUN_5f6ef770
   Address: 5f6ef770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6ef770(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_EAX;
  int iVar12;
  int iVar13;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 local_18;
  
  iVar12 = 0;
  local_18 = 0;
  if (0 < param_1) {
    do {
      iVar13 = 0;
      fVar7 = _DAT_5f75dcac;
      fVar10 = _DAT_5f75dcb0;
      if (0 < *(int *)(in_stack_00000010 + iVar12 * 4)) {
        do {
          fVar1 = *(float *)(in_EAX + local_18 * 8);
          fVar2 = *(float *)(in_EAX + 4 + local_18 * 8);
          fVar3 = *(float *)(param_2 + local_18 * 8);
          fVar4 = *(float *)(param_2 + 4 + local_18 * 8);
          fVar8 = *(float *)(param_2 + local_18 * 8) + *(float *)(in_EAX + local_18 * 8);
          fVar9 = *(float *)(param_2 + 4 + local_18 * 8) + *(float *)(in_EAX + 4 + local_18 * 8);
          fVar11 = *(float *)(in_EAX + local_18 * 8) - *(float *)(param_2 + local_18 * 8);
          fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7;
          fVar8 = *(float *)(in_EAX + 4 + local_18 * 8) - *(float *)(param_2 + 4 + local_18 * 8);
          uVar5 = *(undefined4 *)(in_EAX + 4 + local_18 * 8);
          fVar10 = fVar8 * fVar8 + fVar11 * fVar11 + fVar10;
          uVar6 = *(undefined4 *)(param_2 + local_18 * 8);
          if (fVar4 * fVar4 + fVar3 * fVar3 <= fVar2 * fVar2 + fVar1 * fVar1) {
            *(undefined4 *)(in_stack_0000001c + local_18 * 8) =
                 *(undefined4 *)(in_EAX + local_18 * 8);
            *(undefined4 *)(in_stack_0000001c + 4 + local_18 * 8) = uVar5;
          }
          else {
            *(undefined4 *)(in_stack_0000001c + 4 + local_18 * 8) =
                 *(undefined4 *)(param_2 + 4 + local_18 * 8);
            *(undefined4 *)(in_stack_0000001c + local_18 * 8) = uVar6;
          }
          iVar13 = iVar13 + 1;
          local_18 = local_18 + 1;
        } while (iVar13 < *(int *)(in_stack_00000010 + iVar12 * 4));
      }
      fVar10 = fVar10 * _DAT_5f75dcb8;
      *(float *)(in_stack_00000014 + iVar12 * 4) = fVar7 * _DAT_5f75dcb4;
      *(float *)(in_stack_00000018 + iVar12 * 4) = fVar10;
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_1);
  }
  return;
}


