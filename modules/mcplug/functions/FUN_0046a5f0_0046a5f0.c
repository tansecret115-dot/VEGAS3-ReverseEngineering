/* Module: mcplug.dll
   Function: FUN_0046a5f0
   Address: 0046a5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0046a5f0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  HKEY__ local_1c [7];
  
  *param_1 = 0;
  if ((param_3 == 1) || (*(int *)((int)this + 0x7e4) == 0)) {
    *(undefined4 *)((int)this + 0x7e4) = 1;
    local_1c[0].unused._0_1_ = 0;
    *(undefined4 *)((int)this + 2000) = 0;
    *(int *)((int)this + 0x7dc) = 0;
    iVar1 = FUN_0046a1a0(this,(LPSTR)local_1c,0x19);
    if ((iVar1 < 0) || (iVar1 = FUN_00467d10(this,(uchar *)local_1c), iVar1 < 0)) {
      *(undefined4 *)((int)this + 0x7d8) = 0x8004e12d;
    }
    else {
      iVar1 = FUN_00468780(this,local_1c,(int *)((int)this + 0x7dc));
      *(int *)((int)this + 0x7d8) = iVar1;
      if (iVar1 < 0) {
        if (iVar1 == -0x7ffb1ed3) goto LAB_0046a7b5;
      }
      else {
        if (iVar1 == 0x4e135) {
          if ((*(int *)((int)this + 0x7f0) == 0) || (iVar1 = FUN_0046dff0((int)this), -1 < iVar1)) {
            if (*(int *)((int)this + 0x680) == 0) {
              uVar2 = FUN_00467f40(this);
              *(uint *)((int)this + 2000) = uVar2 & 0xffff;
              if ((uVar2 & 0xffff) == 0) {
                *(undefined4 *)((int)this + 0x7d8) = 0x8004e140;
              }
              else if ((*(int *)((int)this + 0x7f4) == 0) || (*(int *)((int)this + 0x7f0) == 0)) {
                *(undefined4 *)((int)this + 0x7d8) = 0x8004e14e;
              }
              else {
                *(undefined4 *)((int)this + 0x7d8) = 0x4e137;
              }
            }
            else {
              uVar2 = FUN_00467f40(this);
              if (*(uint *)((int)this + 0x684) == (uVar2 & 0xffff)) {
                *(undefined4 *)((int)this + 0x7d8) = 0x4e136;
                *(undefined4 *)((int)this + 2000) = *(undefined4 *)((int)this + 0x7c8);
              }
              else {
                *(undefined4 *)((int)this + 0x7d8) = 0x8004e140;
              }
            }
          }
          else {
            *(undefined4 *)((int)this + 0x7d8) = 0x8004e14f;
          }
          goto LAB_0046a7b5;
        }
        if (*(int *)((int)this + 0x680) != 0) {
          uVar2 = FUN_00467f40(this);
          if (*(uint *)((int)this + 0x684) == (uVar2 & 0xffff)) {
            *(undefined4 *)((int)this + 2000) = *(undefined4 *)((int)this + 0x7c8);
          }
          else {
            *(undefined4 *)((int)this + 0x7d8) = 0x8004e140;
          }
          goto LAB_0046a7b5;
        }
      }
      uVar2 = FUN_00467f40(this);
      *(uint *)((int)this + 2000) = uVar2 & 0xffff;
      if ((uVar2 & 0xffff) == 0) {
        *(undefined4 *)((int)this + 0x7d8) = 0x8004e140;
      }
    }
  }
LAB_0046a7b5:
  *param_1 = *(int *)((int)this + 0x7dc);
  *param_2 = *(int *)((int)this + 2000);
  return *(int *)((int)this + 0x7d8);
}


