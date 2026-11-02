/* Module: erv23260.dll
   Function: FUN_6380c130
   Address: 6380c130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380c130(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = *(int *)((int)this + 0x10c);
  if (iVar2 < 0) {
    if ((*(int *)(*(int *)((int)this + 0x5c0) + 0x82c) == 0) ||
       (*(int *)(*(int *)((int)this + 0x5c0) + 0x830) == 0)) {
      iVar2 = *(int *)((int)this + 0x5ec);
      if ((iVar2 == 1) || ((iVar2 == 3 || (iVar2 == 5)))) {
        uVar1 = FUN_6380baa0((*(int *)((int)this + 0x10) * -0x1e + 310000U) / 10000);
        *(uint *)((int)this + 0x94) = uVar1;
        if (uVar1 < 3) {
          *(undefined4 *)((int)this + 0x94) = 3;
        }
        if ((*(int *)((int)this + 0x5ec) == 3) && (*(int *)((int)this + 0x54) == 2)) {
          uVar1 = (*(int *)((int)this + 0x58) * -0x1e + 310000U) / 10000;
        }
        else {
          iVar2 = *(int *)((int)this + 0xc);
          if (iVar2 != 2) {
            if ((iVar2 == 0) || (iVar2 == 1)) {
              *(undefined1 *)((int)this + 0x668) = *(undefined1 *)((int)this + 0x108);
            }
            goto LAB_6380c32a;
          }
LAB_6380c2f0:
          uVar1 = (*(int *)((int)this + 0x10) * -0x1e + 310000U) / 10000;
        }
      }
      else {
        if (*(int *)((int)this + 0x28) == 3) {
          iVar2 = *(int *)((int)this + 0x10);
        }
        else {
          iVar2 = *(int *)((int)this + 0x2c);
        }
        iVar2 = FUN_6380baa0((iVar2 * -0x1e + 310000U) / 10000);
        *(int *)((int)this + 0x94) = iVar2;
        iVar2 = *(int *)(*(int *)((int)this + 0x5c0) + 8);
        if ((iVar2 == 0x15) || (iVar2 == 0x16)) {
          if (*(uint *)((int)this + 0x94) < 3) {
            *(undefined4 *)((int)this + 0x94) = 3;
          }
        }
        else if (*(uint *)((int)this + 0x94) < 8) {
          *(undefined4 *)((int)this + 0x94) = 8;
        }
        iVar2 = *(int *)((int)this + 0x28);
        if (iVar2 == 2) {
          uVar1 = (*(int *)((int)this + 0x2c) * -0x1e + 310000U) / 10000;
        }
        else if ((iVar2 == 0) || (iVar2 == 1)) {
          uVar1 = *(uint *)((int)this + 0x368);
        }
        else {
          if (iVar2 != 3) goto LAB_6380c32a;
          if (*(int *)((int)this + 0xc) == 2) goto LAB_6380c2f0;
          uVar1 = *(uint *)((int)this + 0x108);
        }
      }
      iVar2 = FUN_6380baa0(uVar1);
      *(char *)((int)this + 0x668) = (char)iVar2;
    }
    else {
      *(undefined1 *)((int)this + 0x668) = *(undefined1 *)((int)this + 0x94);
    }
LAB_6380c32a:
    if ((uint)*(byte *)((int)this + 0x668) <= *(uint *)((int)this + 0x94)) goto LAB_6380c348;
    uVar3 = *(undefined1 *)((int)this + 0x94);
  }
  else {
    if (*(int *)(*(int *)((int)this + 0x5c0) + 0x78) < 3) {
      *(undefined *)((int)this + 0x668) = (&DAT_6382e2f8)[iVar2];
      goto LAB_6380c348;
    }
    uVar3 = (&DAT_6382e308)[iVar2];
  }
  *(undefined1 *)((int)this + 0x668) = uVar3;
LAB_6380c348:
  if (*(byte *)((int)this + 0x668) < 2) {
    *(undefined1 *)((int)this + 0x668) = 2;
  }
  *param_1 = (uint)*(byte *)((int)this + 0x668) - *(byte *)((int)this + 0x668) / 3;
  return;
}


