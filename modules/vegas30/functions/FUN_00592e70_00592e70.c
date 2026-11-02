/* Module: vegas30.exe
   Function: FUN_00592e70
   Address: 00592e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00592e70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  ushort uVar4;
  HGLOBAL pvVar5;
  int iVar6;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  local_14 = DAT_006484d8;
  uVar4 = (DAT_006484dc >> 3) << 1;
  local_8 = CONCAT22(DAT_006484dc,uVar4);
  piVar1 = param_1 + 1;
  local_12 = 2;
  local_10 = 0xac44;
  local_4 = 0;
  local_c = (uint)uVar4 * 0xac44;
  if ((LPCVOID)*piVar1 != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle((LPCVOID)*piVar1);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle((LPCVOID)*piVar1);
    GlobalFree(pvVar5);
  }
  piVar2 = param_1 + 3;
  *piVar1 = 0;
  param_1[2] = 0;
  if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle((LPCVOID)param_1[3]);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle((LPCVOID)*piVar2);
    GlobalFree(pvVar5);
  }
  *piVar2 = 0;
  param_1[4] = 0;
  uVar3 = DAT_006484d8;
  uVar4 = (ushort)_DAT_006484dc;
  *(ushort *)((int)param_1 + 0x36) = uVar4;
  *(undefined2 *)(param_1 + 10) = uVar3;
  uVar4 = (uVar4 >> 3) << 1;
  *(ushort *)(param_1 + 0xd) = uVar4;
  *(undefined2 *)((int)param_1 + 0x2a) = 2;
  param_1[0xb] = 0xac44;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xc] = (uint)uVar4 * 0xac44;
  iVar6 = ftol();
  *param_1 = iVar6;
  param_1[5] = iVar6 / (int)(uint)DAT_0064b132;
  param_1[6] = *param_1 % (int)(uint)DAT_0064b132;
  *param_1 = (uint)DAT_0064b132 * param_1[5];
  if (DAT_00649ad8 == 0) {
    iVar6 = FUN_005924f0(&DAT_00649adc,piVar1,&local_14);
    param_1[2] = iVar6;
    if (*piVar1 == 0) {
      DAT_00649adc = 0;
    }
    local_28 = DAT_006484d8;
    uVar4 = (DAT_006484dc >> 3) << 1;
    local_1c = CONCAT22(DAT_006484dc,uVar4);
    local_26 = 2;
    local_24 = 0xac44;
    local_18 = 0;
    local_20 = (uint)uVar4 * 0xac44;
    iVar6 = FUN_005924f0(&DAT_00649be0,piVar2,&local_28);
    param_1[4] = iVar6;
    if (*piVar2 == 0) {
      DAT_00649be0 = 0;
    }
    if ((*piVar1 == 0) && (*piVar2 == 0)) {
      DAT_00649ad8 = 1;
    }
    else if ((DAT_00649ad8 == 0) && ((*piVar1 != 0 && (*piVar2 != 0)))) goto LAB_00593132;
  }
  if (*piVar1 == 0) {
    iVar6 = FUN_00592a30(0x379,piVar1,&local_14);
    param_1[2] = iVar6;
  }
  if (*piVar2 == 0) {
    local_28 = DAT_006484d8;
    uVar4 = (DAT_006484dc >> 3) << 1;
    local_1c = CONCAT22(DAT_006484dc,uVar4);
    local_26 = 2;
    local_24 = 0xac44;
    local_18 = 0;
    local_20 = (uint)uVar4 * 0xac44;
    iVar6 = FUN_00592a30(0x37a,piVar2,&local_28);
    param_1[4] = iVar6;
  }
LAB_00593132:
  if ((*piVar1 == 0) || (*piVar2 == 0)) {
    DAT_00649ce4 = 0;
  }
  return;
}


