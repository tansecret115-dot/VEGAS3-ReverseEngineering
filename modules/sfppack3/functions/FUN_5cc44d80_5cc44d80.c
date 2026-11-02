/* Module: sfppack3.dll
   Function: FUN_5cc44d80
   Address: 5cc44d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cc44d80(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBX;
  uint uVar5;
  int unaff_ESI;
  int *piVar6;
  int local_118 [4];
  undefined1 local_108 [260];
  
  uVar5 = 0;
  (**(code **)(*(int *)this + 0x70))(this,local_108,local_118,param_2);
  if (unaff_EBX != 1) {
    piVar6 = local_118 + 1;
    piVar4 = local_118;
    do {
      iVar1 = *piVar4;
      iVar2 = *piVar6;
      if (unaff_ESI < iVar2) {
        unaff_ESI = iVar2;
      }
      uVar5 = uVar5 + 1;
      piVar4 = local_118 + uVar5 * 2;
      *(double *)(param_1 + iVar1 * -8) = (double)(iVar2 - iVar1);
      iVar2 = *piVar4;
      piVar6 = local_118 + uVar5 * 2 + 1;
      iVar3 = *piVar6;
      if (unaff_ESI < iVar3) {
        unaff_ESI = iVar3;
      }
      *(double *)(param_1 + iVar2 * -8) = (double)(iVar3 - iVar2);
      if ((*piVar6 == -0x348) && (local_118[uVar5 * 2 + -1] == -0x348)) {
        *(undefined4 *)(param_1 + iVar2 * -8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar2 * -8) = 0xc08a4000;
        *(undefined4 *)(param_1 + iVar1 * -8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar1 * -8) = 0xc08a4000;
      }
      if (((uVar5 == 1) && (local_118[1] == -0x348)) &&
         (*(double *)(param_1 + iVar2 * -8) < _DAT_5cc88ed0)) {
        *(undefined4 *)(param_1 + iVar1 * -8) = 0;
        *(undefined4 *)(param_1 + 4 + iVar1 * -8) = 0xc08a4000;
      }
      FUN_5cc44eb0(param_1,-iVar2,-iVar1);
    } while (uVar5 < unaff_EBX - 1U);
  }
  return;
}


