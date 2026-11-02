/* Module: sftrans1.dll
   Function: FUN_00550210
   Address: 00550210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00550210(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined4 local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  double local_10;
  
  if ((param_8 < 0) && (param_8 = *(int *)(param_1 + 0x14c), param_8 < 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x138);
  local_40 = param_4 - iVar2;
  dVar4 = (double)(*(int *)(param_1 + 0x140) - iVar2);
  dVar1 = (((double)local_40 / dVar4) * *(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0xa8)) -
          (*(double *)(param_1 + 0xa8) - ((double)iVar2 / dVar4) * *(double *)(param_1 + 0xb0));
  local_20 = ((double)(param_2 - iVar2) / dVar4) * *(double *)(param_1 + 0xb0) +
             *(double *)(param_1 + 0xa8);
  local_38 = ((double)(*(int *)(param_1 + 0x144) - param_3) /
             (double)(*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c))) *
             *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xb8);
  local_30 = local_38 + dVar1;
  local_38 = local_38 - dVar1;
  local_28 = local_20 - dVar1;
  local_20 = local_20 + dVar1;
  if (*(int *)(param_1 + 0xe8) != 0) {
    if (local_28 < *(double *)(param_1 + 200)) {
      local_28 = *(double *)(param_1 + 200);
    }
    if (*(double *)(param_1 + 0xd0) < local_20) {
      local_20 = *(double *)(param_1 + 0xd0);
    }
  }
  iVar2 = FUN_0054f730(&local_28,&local_18,&local_40,2,param_8,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (local_40 != 0) {
    return 0;
  }
  if (local_3c != 0) {
    return 0;
  }
  if (local_30 < local_18) {
    if (local_30 < local_10) {
      return 0;
    }
    if ((param_5 == 0) || (param_6 == 0)) goto LAB_0055052a;
    iVar2 = *(int *)(param_1 + 0x138);
    iVar3 = *(int *)(param_1 + 0x140) - iVar2;
    dVar4 = ((double)(*(int *)(param_1 + 0x144) - param_3) /
            (double)(*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c))) *
            *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xb8);
  }
  else {
    if ((local_18 < local_38) && (local_10 < local_38)) {
      return 0;
    }
    if ((param_5 == 0) || (param_6 == 0)) goto LAB_0055052a;
    iVar2 = *(int *)(param_1 + 0x138);
    iVar3 = *(int *)(param_1 + 0x140) - iVar2;
    dVar4 = ((double)(*(int *)(param_1 + 0x144) - param_3) /
            (double)(*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c))) *
            *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xb8);
  }
  local_38 = (double)CONCAT44(local_38._4_4_,iVar3);
  FUN_00550570(((double)(param_2 - iVar2) / (double)iVar3) * *(double *)(param_1 + 0xb0) +
               *(double *)(param_1 + 0xa8),dVar4,(undefined4)local_28,local_28._4_4_,
               (undefined4)local_20,local_20._4_4_,param_5,param_6,param_7,param_8);
LAB_0055052a:
  local_44 = 1;
  if (((param_9 != 0) && (param_8 != *(int *)(param_1 + 0x14c))) &&
     (iVar2 = FUN_00550210(param_2,param_3,param_4,0,0,0,0xffffffff,0), iVar2 != 0)) {
    local_44 = 0;
  }
  return local_44;
}


