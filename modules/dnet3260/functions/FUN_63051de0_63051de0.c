/* Module: dnet3260.dll
   Function: FUN_63051de0
   Address: 63051de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_63051de0(void *this,int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  void *this_00;
  undefined4 *puVar4;
  FARPROC pFVar5;
  undefined *this_01;
  int iVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  short local_10;
  undefined4 local_c;
  ushort local_8 [2];
  
  local_c = 0;
  local_10 = 0;
  local_8[0] = 0;
  local_8[1] = 0;
  if (*(int *)((int)this + 10) == 0) {
    this_00 = operator_new(0x18);
    if (this_00 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_63052af0(this_00,s_ednt3260_dll_630550c0,2);
    }
    *(undefined4 **)((int)this + 10) = puVar4;
    if ((puVar4 == (undefined4 *)0x0) || (puVar4[1] != 0)) {
      local_c = 0x8004000f;
      goto LAB_63051fa0;
    }
    pFVar5 = FUN_63052d40(puVar4,s_OpenEncoder_630550b4);
    *(FARPROC *)((int)this + 0x1e) = pFVar5;
    pFVar5 = FUN_63052d40(*(void **)((int)this + 10),s_CloseEncoder_630550a4);
    *(FARPROC *)((int)this + 0x22) = pFVar5;
    pFVar5 = FUN_63052d40(*(void **)((int)this + 10),s_dbInitEncoder_63055094);
    *(FARPROC *)((int)this + 0x32) = pFVar5;
    pFVar5 = FUN_63052d40(*(void **)((int)this + 10),s_dbEncode_63055088);
    *(FARPROC *)((int)this + 0x36) = pFVar5;
    pFVar5 = FUN_63052d40(*(void **)((int)this + 10),s_dbFreeEncoder_63055078);
    *(FARPROC *)((int)this + 0x3a) = pFVar5;
  }
  if ((*(int *)((int)this + 0x12) == 0) && (*(code **)((int)this + 0x1e) != (code *)0x0)) {
    sVar3 = (**(code **)((int)this + 0x1e))((undefined4 *)((int)this + 0x12));
    if (sVar3 == 0) goto LAB_63051ea7;
  }
  else {
LAB_63051ea7:
    local_10 = -1;
    this_01 = FUN_63051290();
    if (this_01 == (undefined *)0x0) goto LAB_63051fa0;
    iVar6 = FUN_630517a0(this_01,CONCAT22(extraout_var,*(undefined2 *)this),2,local_8);
    if (((local_8[0] != 10) || (*(int *)(iVar6 + 2) != param_1)) ||
       ((uint)*(ushort *)(iVar6 + 6) != (int)param_2)) goto LAB_63051fa0;
    uVar1 = *(undefined2 *)(iVar6 + 8);
    puVar4 = (undefined4 *)
             FUN_630517a0(this_01,CONCAT22(param_2 >> 0xf,*(undefined2 *)this),1,local_8);
    if (local_8[0] != 4) goto LAB_63051fa0;
    uVar8 = *puVar4;
    puVar7 = (undefined2 *)
             FUN_630517a0(this_01,CONCAT22(extraout_var_01,*(undefined2 *)this),0xb,local_8);
    if (local_8[0] != 2) goto LAB_63051fa0;
    uVar2 = *puVar7;
    puVar7 = (undefined2 *)
             FUN_630517a0(this_01,CONCAT22(extraout_var_00,*(undefined2 *)this),0xc,local_8);
    if (local_8[0] != 2) goto LAB_63051fa0;
    local_10 = 0;
    sVar3 = local_10;
    local_10 = 0;
    if (*(code **)((int)this + 0x32) != (code *)0x0) {
      local_c = (**(code **)((int)this + 0x32))
                          (*(undefined4 *)((int)this + 0x12),param_1,uVar8,uVar1,uVar2,*puVar7,
                           param_3,param_4);
      goto LAB_63051fa0;
    }
  }
  local_10 = sVar3;
  local_c = 0x80004005;
LAB_63051fa0:
  uVar8 = 0x80004005;
  if (local_10 == 0) {
    uVar8 = local_c;
  }
  return uVar8;
}


