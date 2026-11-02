/* Module: ednt3260.dll
   Function: FUN_630f7f40
   Address: 630f7f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_630f7f40(void *this,short *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  double *pdVar4;
  int *piVar5;
  undefined4 local_88 [2];
  int local_80 [6];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  int *local_5a;
  undefined4 *local_56;
  undefined4 *local_52;
  short local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  short local_44;
  short local_42;
  undefined2 *local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_36;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x4b18c) * 0x600) {
    pdVar4 = (double *)((int)this + 0x4b1b0);
    do {
      sVar1 = *param_1;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      *pdVar4 = (double)(int)sVar1 * _DAT_63102af0;
      pdVar4 = pdVar4 + 1;
    } while (iVar3 < *(int *)((int)this + 0x4b18c) * 0x600);
  }
  local_68 = 0;
  local_24 = 0;
  local_64 = 0;
  local_20 = 0;
  local_60 = 0;
  local_1c = 0;
  piVar5 = local_80;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  if (*(int *)((int)this + 0x4b18c) == 2) {
    local_80[2] = (int)this + 0x4b1b8;
    local_24 = CONCAT22(local_24._2_2_,2);
    local_20 = CONCAT22(local_20._2_2_,2);
    local_80[0] = (int)this + 0x4b1b0;
  }
  else {
    local_24 = CONCAT22(1,(undefined2)local_24);
    local_80[1] = (int)this + 0x4b1b0;
  }
  local_5a = local_80;
  local_56 = &local_24;
  local_52 = &local_68;
  local_c = 0x10;
  local_18 = 3;
  local_4e = ((*(short *)((int)this + 0x4b180) * 0x100 + *(short *)((int)this + 0x4b184)) * 2 +
             *(short *)((int)this + 0x4b1a4)) * 8 + *(short *)((int)this + 0x4b18c);
  local_16 = 0x1b1b;
  local_14 = 0x909;
  local_12 = 0x5959;
  local_4c = param_2;
  local_44 = *(short *)((int)this + 0x4b188) << 9;
  local_10 = 0;
  local_e = 0;
  local_5c = 0x12;
  local_48 = 0;
  local_46 = 0;
  local_3c = 0;
  local_38 = 0;
  local_36 = 0;
  local_32 = 0;
  local_30 = 0;
  local_2e = 0;
  local_42 = ((((*(short *)((int)this + 0x4b198) * 2 + *(short *)((int)this + 0x4b1a8)) * 2 +
               *(short *)((int)this + 0x4b1a0)) * 2 + *(short *)((int)this + 0x4b190)) * 0x10 +
             *(short *)((int)this + 0x4b194)) * 0x10 + *(short *)((int)this + 0x4b19c);
  local_40 = &local_18;
  local_28 = *(undefined2 *)((int)this + 0x4b1ac);
  puVar2 = (undefined4 *)FUN_630f7420(this,local_88,0x10,(int)&local_5c);
  local_c._2_2_ = (short)((uint)*puVar2 >> 0x10);
  return -(uint)(local_c._2_2_ != 0);
}


