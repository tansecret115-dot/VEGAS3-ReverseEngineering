/* Module: rmme3260.dll
   Function: FUN_662038e0
   Address: 662038e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662038e0(void *param_1,undefined1 *param_2,int param_3,int param_4,short *param_5)

{
  undefined1 *puVar1;
  undefined2 uVar3;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short local_14;
  short local_c;
  undefined4 local_8;
  
  puVar1 = param_2;
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    return -0x7ff8ffa9;
  }
  uVar3 = (undefined2)((uint)(param_2 + 2) >> 0x10);
  if (CONCAT11(*param_2,param_2[1]) == 0) {
    uVar3 = (undefined2)((uint)(param_2 + 4) >> 0x10);
    local_14 = CONCAT11(param_2[4],param_2[5]);
  }
  param_2 = (undefined1 *)0x0;
  local_8 = CONCAT22(uVar3,*param_5);
  local_c = 0;
  iVar2 = FUN_66203ac0(param_1,local_14,(int *)&param_2);
  if (iVar2 < 0) {
    if (iVar2 != 0x40012) goto LAB_662039af;
LAB_66203974:
    iVar2 = FUN_66203b40(param_1,local_14,(int *)&param_2);
    if ((iVar2 < 0) || (iVar2 == 0x40012)) goto LAB_662039af;
    iVar2 = FUN_662065a0(param_2,puVar1,param_3,
                         CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x60)),param_4,
                         (ushort *)&local_8);
  }
  else {
    if (iVar2 == 0x40012) goto LAB_66203974;
    iVar2 = FUN_662065a0(param_2,puVar1,param_3,
                         CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x60)),param_4,
                         (ushort *)&local_8);
  }
  if (-1 < iVar2) {
    local_c = (short)local_8;
  }
LAB_662039af:
  if ((local_c != 0) && (iVar2 == 0x40012)) {
    iVar2 = 0;
  }
  *param_5 = local_c;
  return iVar2;
}


