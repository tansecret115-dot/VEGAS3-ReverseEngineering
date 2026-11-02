/* Module: sfpublish.dll
   Function: FUN_00415830
   Address: 00415830
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00415830(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,HWND param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30 [8];
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  if ((*(int *)((int)this + 0x30) != 0) || (iVar1 = FUN_00415640(this), -1 < iVar1)) {
    puVar2 = local_30;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_30[1] = param_3;
    local_30[2] = param_4;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0xffffffff;
    local_54 = param_1;
    local_50 = 0;
    local_4c = 0;
    if (param_1 != 0) {
      local_4 = &local_60;
      local_8 = 1;
    }
    if ((param_2 != 0) &&
       (iVar1 = (**(code **)((int)this + 0x2c))
                          (*(undefined4 *)((int)this + 0x38),param_5,param_2,0,0,&local_64),
       iVar1 == 0)) {
      uStack_48 = *local_64;
      uStack_44 = 1;
      uStack_40 = local_64[2];
      uStack_3c = local_64[3];
      uStack_38 = local_64[4];
      uStack_34 = local_64[5];
      puStack_c = &uStack_48;
      uStack_10 = 1;
      (**(code **)((int)this + 0x20))(local_64);
    }
    iVar1 = (**(code **)((int)this + 8))(*(undefined4 *)((int)this + 0x38),param_5,local_30,8,0);
    if (1 < iVar1) {
      FUN_00419230(param_5,0x10,(uchar *)"Could not launch MAPI E-Mail application.");
    }
  }
  return iVar1;
}


