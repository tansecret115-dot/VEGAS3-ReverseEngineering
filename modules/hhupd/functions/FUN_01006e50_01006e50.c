/* Module: hhupd.exe
   Function: FUN_01006e50
   Address: 01006e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006e50(undefined4 *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint local_8 [2];
  
  iVar4 = 0;
  piVar1 = param_1 + 0x25;
  *piVar1 = 0x8000;
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
    param_1[0x26] = 0x8000;
    break;
  case 1:
    iVar3 = FUN_01005957();
    if (iVar3 == 0) break;
    goto LAB_01006f42;
  case 2:
    iVar3 = FUN_01005957();
    goto joined_r0x01006f40;
  case 3:
    local_8[0] = 1 << ((byte)(*(ushort *)((int)param_1 + 0xb2) >> 8) & 0x1f);
    iVar3 = FUN_01007410(piVar1,local_8,(undefined *)0x0,(undefined *)0x0,param_1 + 0x26,
                         (undefined4 *)0x0,0,0,0,0,0);
joined_r0x01006f40:
    if (iVar3 != 0) {
LAB_01006f42:
      iVar4 = 7;
    }
    break;
  default:
    iVar4 = 6;
    break;
  case 0xf:
    return 1;
  }
  if (iVar4 != 0) {
    FUN_01007370((undefined4 *)*param_1,iVar4,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  iVar4 = (*(code *)param_1[2])(param_1[0x26]);
  param_1[0xf] = iVar4;
  if (iVar4 == 0) {
    FUN_01007370((undefined4 *)*param_1,5,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  iVar4 = (*(code *)param_1[2])(*piVar1);
  param_1[0x10] = iVar4;
  if (iVar4 == 0) {
    (*(code *)param_1[1])(param_1[0xf]);
    FUN_01007370((undefined4 *)*param_1,5,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  uVar2 = *(ushort *)((int)param_1 + 0xb2) & 0xf;
  iVar4 = 0;
  if (uVar2 == 1) {
    iVar3 = FUN_01005957();
  }
  else if (uVar2 == 2) {
    iVar3 = FUN_01005957();
  }
  else {
    if (uVar2 != 3) goto LAB_01007091;
    iVar3 = FUN_01007410(piVar1,local_8,(undefined *)param_1[2],(undefined *)param_1[1],
                         param_1 + 0x26,param_1 + 0xd,param_1[3],param_1[4],param_1[5],param_1[6],
                         param_1[7]);
  }
  if (iVar3 != 0) {
    iVar4 = (-(uint)(iVar3 == 1) & 0xfffffffe) + 7;
  }
LAB_01007091:
  if (iVar4 != 0) {
    (*(code *)param_1[1])(param_1[0xf]);
    (*(code *)param_1[1])(param_1[0x10]);
    FUN_01007370((undefined4 *)*param_1,iVar4,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  return 1;
}


