/* Module: vegas30k.dll
   Function: FUN_0118fbb0
   Address: 0118fbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118fbb0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_ESI;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *local_4;
  
  local_4 = (int *)0x0;
  if (*param_2 == 0) {
    if (((char)param_2[1] != '\0') &&
       ((**(code **)(**(int **)(param_1 + 0x30) + 0xc))
                  (*(int **)(param_1 + 0x30),&DAT_011d9b20,&local_4), local_4 != (int *)0x0)) {
      (**(code **)(*local_4 + 0x3c))(local_4,param_2 + 1,param_2);
      piVar7 = (int *)*param_2;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (*param_2 == 0) {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(*(int **)(param_1 + 0x38),0);
      }
      piVar7 = *(int **)(param_1 + 0x3c);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 8))(piVar7);
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return 0;
    }
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(*(int **)(param_1 + 0x38),0);
  }
  piVar7 = *(int **)(param_1 + 0x3c);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  piVar7 = (int *)*param_2;
  *(int **)(param_1 + 0x3c) = piVar7;
  (**(code **)(*piVar7 + 4))(piVar7);
  *(int *)(param_1 + 0x10) = param_2[0x4e];
  uVar9 = _SFSMPTE_SMPTEToNanos_4(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0xc0) = uVar9;
  piVar7 = param_2 + 0x42;
  piVar8 = (int *)(param_1 + 200);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  lVar10 = _SFSMPTE_SMPTEToNanos_4(param_2 + 0x48);
  iVar3 = (int)((ulonglong)lVar10 >> 0x20);
  *(longlong *)(param_1 + 0xe0) = lVar10;
  uVar4 = *(uint *)(param_1 + 0xe0);
  if ((lVar10 < 0) || ((iVar3 < 1 && (uVar4 < 0x989681)))) {
    uVar4 = 10000000;
    iVar3 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xe0) = uVar4;
  *(int *)(param_1 + 0xe4) = iVar3;
  uVar4 = (param_2[0x4f] & 1U) << 0xd;
  *(uint *)(param_1 + 0xc) = uVar4 | uVar1 & 0xffffdfff;
  uVar5 = (param_2[0x60] & 1U) << 0xe;
  *(uint *)(param_1 + 0xc) = uVar5 | uVar4 | uVar1 & 0xffff9fff;
  uVar2 = (param_2[99] & 1U) << 0x11;
  *(uint *)(param_1 + 0xc) = uVar2 | uVar5 | uVar4 | uVar1 & 0xfffd9fff;
  uVar6 = (param_2[0x61] & 1U) << 0xf;
  *(uint *)(param_1 + 0xc) = uVar6 | uVar2 | uVar5 | uVar4 | uVar1 & 0xfffd1fff;
  *(uint *)(param_1 + 0xc) =
       (param_2[0x62] & 1U) << 0x10 | uVar6 | uVar2 | uVar5 | uVar4 | uVar1 & 0xfffc1fff;
  *(int *)(param_1 + 0x1170) = param_2[0x50];
  *(int *)(param_1 + 0x1174) = param_2[0x51];
  *(int *)(param_1 + 0x1178) = param_2[0x58];
  *(int *)(param_1 + 0x117c) = param_2[0x59];
  *(uint *)(param_1 + 0xc) = (param_2[100] & 1U) << 0x12 | *(uint *)(param_1 + 0xc) & 0xfffbffff;
  *(int *)(param_1 + 0xf0) = param_2[0x65];
  *(int *)(param_1 + 0x18) = param_2[0x66];
  if (((*(uint *)(param_1 + 0xc) & 0x10000) != 0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(*(int **)(param_1 + 0x38),1),
     iVar3 < 0)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffeffff;
    return 0;
  }
  return 0;
}


