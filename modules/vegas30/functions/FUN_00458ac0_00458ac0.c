/* Module: vegas30.exe
   Function: FUN_00458ac0
   Address: 00458ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00458ac0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_14;
  int local_c;
  
  local_14 = 0;
  if (param_2 == 0 && param_3 == 0) goto LAB_00458ba0;
  iVar1 = *(int *)(param_1 + 0xb94);
  uVar2 = *(uint *)(param_1 + 0xb90);
  uVar3 = *(uint *)(param_1 + 0xb88);
  iVar8 = *(int *)(param_1 + 0xb8c);
  uVar7 = *(uint *)(param_1 + 0x600);
  local_c = 0;
  iVar4 = *(int *)(param_1 + 0x604);
  if ((iVar4 < iVar1) || ((iVar4 <= iVar1 && (uVar7 <= uVar2)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar7 - uVar2;
    local_c = (iVar4 - iVar1) - (uint)(uVar7 < uVar2);
  }
  if ((param_3 < 1) && (param_3 < 0)) {
    iVar4 = param_3 + (uint)(param_2 != 0);
    iVar5 = -iVar4;
    if ((iVar5 < iVar8) || ((-iVar8 == iVar4 || iVar5 < iVar8 && (-param_2 < uVar3))))
    goto LAB_00458b5c;
    uVar7 = 0;
    iVar8 = 0;
  }
  else {
LAB_00458b5c:
    uVar7 = uVar3 + param_2;
    iVar8 = iVar8 + param_3 + (uint)CARRY4(uVar3,param_2);
  }
  if ((local_c <= iVar8) && ((local_c < iVar8 || (uVar6 <= uVar7)))) {
    uVar7 = uVar6;
    iVar8 = local_c;
  }
  if ((uVar7 != *(uint *)(param_1 + 0xb88)) || (iVar8 != *(int *)(param_1 + 0xb8c))) {
    local_14 = 1;
    FUN_004543c0(param_1,uVar7,iVar8,uVar2,iVar1,0);
  }
LAB_00458ba0:
  if (param_4 != 0) {
    iVar1 = *(int *)(param_1 + 0xba8);
    if ((param_4 < 0) && (iVar1 <= -param_4)) {
      param_4 = 0;
    }
    else {
      param_4 = iVar1 + param_4;
    }
    if (*(int *)(param_1 + 0xbd0) <= param_4) {
      param_4 = *(int *)(param_1 + 0xbd0);
    }
    if (param_4 != iVar1) {
      FUN_004549b0(param_1,param_4,*(undefined4 *)(param_1 + 0xbac),0);
      return 1;
    }
  }
  return local_14;
}


