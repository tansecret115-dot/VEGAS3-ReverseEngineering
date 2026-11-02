/* Module: erv23260.dll
   Function: FUN_63815220
   Address: 63815220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63815220(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  int in_stack_0000001c;
  int *in_stack_00000020;
  int *in_stack_00000024;
  int *in_stack_00000028;
  int local_1c;
  byte *local_18;
  byte *local_c;
  code *local_8;
  
  pbVar6 = *(byte **)((int)this + 0xe4);
  pbVar9 = pbVar6 + 0x2c;
  local_8 = (code *)0x0;
  local_1c = 0x14;
  local_18 = param_1 + (in_stack_00000024[1] + -3 + in_stack_00000020[1]) * (int)param_2 +
                       *in_stack_00000020 + *in_stack_00000024 + -3;
  param_1 = local_18;
  do {
    param_1 = param_1 + (int)param_2;
    iVar7 = 0;
    pbVar2 = local_18;
    pbVar5 = pbVar9 + 1;
    local_c = pbVar6;
    do {
      *local_c = *pbVar2;
      (pbVar5 + 2)[(int)(pbVar6 + (-2 - (int)pbVar9))] =
           (byte)((int)(pbVar2[1] + 1 + (uint)*pbVar2) >> 1);
      pbVar5[-1] = (byte)((int)(pbVar2[(int)param_1 - (int)local_18] + 1 + (uint)*pbVar2) >> 1);
      *pbVar5 = (byte)((int)((uint)param_1[iVar7 + 1] + (uint)pbVar2[1] +
                             (uint)pbVar2[(int)param_1 - (int)local_18] + 2 + (uint)*pbVar2) >> 2);
      iVar7 = iVar7 + 1;
      pbVar2 = pbVar2 + 1;
      local_c = local_c + 2;
      pbVar5 = pbVar5 + 2;
    } while (iVar7 < 0x14);
    local_18 = local_18 + (int)param_2;
    pbVar6 = pbVar6 + 0x58;
    pbVar9 = pbVar9 + 0x58;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  switch(*(undefined4 *)(in_stack_0000001c + 0x18)) {
  case 0:
  case 1:
  case 2:
    local_8 = FUN_63815d70;
    break;
  case 3:
    local_8 = FUN_63815fd0;
  }
  in_stack_0000001c = 0;
  param_1 = (byte *)0x0;
  local_1c = 0;
  piVar10 = in_stack_00000024 + 3;
  do {
    iVar3 = ((uint)param_1 & 2) * 8;
    iVar8 = 0x7fffffff;
    param_2 = (byte *)0xffffffff;
    iVar1 = *(int *)((int)this + 0xe0);
    iVar7 = *(int *)((int)this + 0xe4) + 0xe2 +
            (((((uint)param_1 & 1) * 8 + (iVar3 + (*piVar10 - in_stack_00000020[1]) * 2) * 0x16) -
             *in_stack_00000020) + piVar10[-1]) * 2;
    do {
      iVar11 = -1;
      do {
        iVar4 = (*local_8)(iVar1 + (((uint)param_1 & 1) + iVar3) * 8,iVar11 + iVar7,0x10,0x2c,iVar8)
        ;
        if (iVar4 < iVar8) {
          local_18 = param_2;
          iVar8 = iVar4;
          local_1c = iVar11;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 2);
      iVar7 = iVar7 + 0x2c;
      param_2 = param_2 + 1;
    } while ((int)param_2 < 2);
    in_stack_0000001c = in_stack_0000001c + iVar8;
    piVar10[-1] = local_1c + piVar10[-1] * 2;
    *piVar10 = (int)(local_18 + *piVar10 * 2);
    param_1 = param_1 + 1;
    piVar10 = piVar10 + 2;
  } while ((int)param_1 < 4);
  *in_stack_00000028 = in_stack_0000001c;
  return;
}


