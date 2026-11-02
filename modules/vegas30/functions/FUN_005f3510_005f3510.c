/* Module: vegas30.exe
   Function: FUN_005f3510
   Address: 005f3510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005f3510(undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_ESI;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  
  param_1[1] = &PTR_LAB_0062ccf0;
  param_1[2] = &PTR_LAB_0062cc88;
  param_1[0x24] = 0;
  param_1[3] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  *param_1 = &PTR_FUN_0062cc50;
  param_1[1] = &PTR_LAB_0062cbf8;
  param_1[2] = &PTR_LAB_0062cb90;
  uVar3 = DAT_0064b138;
  local_4c = FUN_005ba4b0(DAT_0064b138,0);
  FUN_005ba670(uVar3,local_4c,0,local_40,&local_48,0);
  uVar4 = DAT_0062c8d4;
  param_1[0x1c] = DAT_0062c8d0;
  param_1[0x1d] = uVar4;
  local_30 = DAT_0062c8d0;
  uStack_2c = DAT_0062c8d4;
  SetRect((LPRECT)(param_1 + 0x17),0,0,local_48,local_44);
  puVar6 = param_1 + 4;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_2c,local_30);
  dVar2 = _DAT_00610fd8;
  param_1[4] = 0x40;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  dVar1 = _DAT_006106d0;
  if (dVar2 < local_28) {
    dVar1 = local_28;
  }
  *(double *)(param_1 + 10) = dVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar7 = ftol();
  *(undefined8 *)(param_1 + 0x1e) = uVar7;
  uVar7 = FUN_005f55b0();
  *(undefined8 *)(param_1 + 0x24) = uVar7;
  uVar4 = FUN_005ba5c0(uVar3,local_4c,0);
  param_1[0x26] = uVar4;
  if (DAT_0065e158 == (int *)0x0) {
    BufferPool_Create((IUnknown *)0x0,(_GUID *)&DAT_00633558,8,0,&DAT_0065e158);
  }
  else {
    (**(code **)(*DAT_0065e158 + 4))(DAT_0065e158);
  }
  if (DAT_0065e158 != (int *)0x0) {
    local_4c = 0;
    iVar5 = (**(code **)*DAT_0065e158)(DAT_0065e158,&DAT_0062cb60,&local_4c);
    if (-1 < iVar5) {
      (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,param_1 + 0x27);
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return param_1;
}


