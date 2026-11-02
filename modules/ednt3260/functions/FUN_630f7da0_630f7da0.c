/* Module: ednt3260.dll
   Function: FUN_630f7da0
   Address: 630f7da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_630f7da0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x4b180) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4b184) = 0xffffffff;
  local_8 = 0;
  piVar2 = &DAT_63102998;
  do {
    iVar4 = 0;
    piVar3 = &DAT_631029a8;
    do {
      if (param_1 == *piVar2 / *piVar3) {
        *(int *)((int)this + 0x4b184) = iVar4;
        *(int *)((int)this + 0x4b180) = local_8;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (piVar3 < &DAT_631029b4);
    piVar2 = piVar2 + 1;
    local_8 = local_8 + 1;
  } while (piVar2 < &DAT_631029a4);
  if (*(int *)((int)this + 0x4b180) != -1) {
    *(undefined4 *)((int)this + 0x4b188) = 0xffffffff;
    iVar4 = 0;
    piVar2 = &DAT_631029b8;
    do {
      if (param_2 == *piVar2 / (int)(&DAT_631029a8)[*(int *)((int)this + 0x4b184)]) {
        *(int *)((int)this + 0x4b188) = iVar4;
      }
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (piVar2 < &DAT_63102a04);
    if ((((*(int *)((int)this + 0x4b188) != -1) && (0 < param_3)) && (param_3 < 3)) &&
       ((*(int *)((int)this + 0x4b18c) = param_3, -1 < param_4 && (param_4 < 0x11)))) {
      if (param_4 == 0x10) {
        *(undefined4 *)((int)this + 0x4b198) = 0;
        *(undefined4 *)((int)this + 0x4b19c) = 0xf;
      }
      else {
        *(undefined4 *)((int)this + 0x4b198) = 1;
        *(int *)((int)this + 0x4b19c) = param_4;
      }
      if ((-1 < param_5) && (param_5 < 0x11)) {
        if (param_5 == 0x10) {
          *(undefined4 *)((int)this + 0x4b190) = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x4b190) = 1;
          *(int *)((int)this + 0x4b194) = param_5;
        }
        *param_6 = param_3 * 0x600;
        local_c = 0;
        *param_7 = *(int *)(&DAT_63102a08 +
                           (*(int *)((int)this + 0x4b180) * 0x13 + *(int *)((int)this + 0x4b188)) *
                           4) << 1;
        puVar1 = (undefined4 *)FUN_630f7420(this,local_14,0,0);
        local_c._2_2_ = (short)((uint)*puVar1 >> 0x10);
        return -(uint)(local_c._2_2_ != 0);
      }
    }
  }
  return -1;
}


