/* Module: erv23260.dll
   Function: FUN_637f2cc0
   Address: 637f2cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall
FUN_637f2cc0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_637f2260(this,param_3,param_4);
  *(undefined ***)((int)this + 100) = &PTR_LAB_63829198;
  *(int *)((int)this + 0x68) = param_1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x10;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x32;
  *(undefined4 *)((int)this + 0x88) = 1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  iVar4 = 1;
  if (param_1 != 0) {
    iVar4 = param_2;
  }
  *(int *)((int)this + 700) = iVar4;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined ***)this = &PTR_FUN_63829148;
  *(undefined ***)((int)this + 100) = &PTR_FUN_63829130;
  if (param_3 == 0x16) {
    iVar4 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0x408f4000;
    *(undefined4 *)((int)this + 0x468) = 0x2000;
  }
  else {
    iVar4 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar4 + 0x28) = 0xeb851eb8;
    *(undefined4 *)(iVar4 + 0x2c) = 0x403df851;
    *(undefined4 *)((int)this + 0x468) = 0x100;
  }
  if (param_1 == 0) {
    cVar1 = *(char *)(*(int *)((int)this + 4) + 0x18);
    if (*(char *)(*(int *)((int)this + 4) + 0x1c) == '\0') {
      if (cVar1 != '\0') {
        *(undefined4 *)((int)this + 700) = 3;
      }
    }
    else if (cVar1 != '\0') {
      *(undefined4 *)((int)this + 700) = 4;
    }
  }
  puVar3 = (undefined4 *)((int)this + 0xdc);
  for (iVar4 = 0x3b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0x104) = 1;
  if (*param_5 != 0) {
    return this;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0xc) < 4) {
    *param_5 = 9;
    return this;
  }
  FUN_637f2bb0(this);
  FUN_637fcde0((int)this);
  pvVar2 = (void *)FUN_637f2000(0xcc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_637fa420(pvVar2,param_3,param_5);
  }
  *(undefined4 **)((int)this + 0x2b4) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    if (*param_5 == 0) {
      pvVar2 = (void *)FUN_637f2000(0x364);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_637f7c00(pvVar2,param_1,*(undefined4 *)((int)this + 700),this);
      }
      *(undefined4 **)((int)this + 0x2c0) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        if (*param_5 == 0) {
          pvVar2 = (void *)FUN_637f2000(0x1b08);
          if (pvVar2 == (void *)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = FUN_637f6a20(pvVar2);
          }
          *(void **)((int)this + 0x2c4) = pvVar2;
          if (pvVar2 != (void *)0x0) {
            if (*(int *)((int)this + 0x68) == 0) {
              pvVar2 = (void *)FUN_637f2000(0x1b08);
              if (pvVar2 == (void *)0x0) {
                pvVar2 = (void *)0x0;
              }
              else {
                pvVar2 = FUN_637f6a20(pvVar2);
              }
              *(void **)((int)this + 0x2f0) = pvVar2;
              if (pvVar2 == (void *)0x0) goto LAB_637f2fd3;
            }
            *(undefined4 *)((int)this + 0x2b8) = 0;
            if (param_1 != 0) {
              return this;
            }
            pvVar2 = (void *)FUN_637f2000(0xb0);
            if (pvVar2 == (void *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_637f5140(pvVar2,param_3);
            }
            *(int *)((int)this + 0x2b8) = iVar4;
            if (iVar4 != 0) {
              return this;
            }
            *param_5 = 2;
            return this;
          }
        }
        else if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
          *(undefined4 *)((int)this + 0x2c0) = 0;
          *param_5 = 2;
          return this;
        }
      }
    }
    else if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
      *(undefined4 *)((int)this + 0x2b4) = 0;
    }
  }
LAB_637f2fd3:
  *param_5 = 2;
  return this;
}


