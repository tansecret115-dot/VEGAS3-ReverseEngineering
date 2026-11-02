/* Module: sfxpfx2.dll
   Function: FUN_5c8a2b70
   Address: 5c8a2b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c8a2b70(void *this,int param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int local_30 [12];
  
  uVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  iVar3 = FUN_5c89fa10(this,local_30);
  if ((((iVar3 != 0) || (*(int *)((int)this + 0x6c) == 0)) ||
      ((param_1 == 0 && (*(int *)((int)this + 0x54) != 0)))) &&
     (iVar3 = FUN_5c8a2610(this,local_30,param_1), iVar3 < 0)) {
    return iVar3;
  }
  uVar6 = 0;
  *(undefined4 *)((int)this + 0x54) = 1;
  if (uVar5 != 0) {
    param_1 = (int)this + 0x88;
    piVar4 = (int *)((int)this + 0xf8);
    do {
      FUN_5c8a2820(param_2 + uVar6,uVar5,(int)this + 0x78,param_1,piVar4,uVar1);
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 0x44;
      param_1 = param_1 + 0x38;
    } while (uVar6 < uVar5);
  }
  if (DAT_5c8e93b8 != 0) goto LAB_5c8a2da1;
  uVar5 = *(uint *)(*(int *)((int)this + 0x68) + 4);
  if (*(int *)((int)this + 0x530) == 0) {
    iVar3 = *(int *)((int)this + 0x51c) - uVar1;
    *(int *)((int)this + 0x51c) = iVar3;
    if (iVar3 < 1) {
      uVar6 = rand();
      *(uint *)((int)this + 0x51c) = (uVar6 & 3) * (uVar5 >> 4) + uVar5 * 3;
      uVar6 = rand();
      *(uint *)((int)this + 0x528) = (uVar6 & 0x1f) + 1;
      uVar6 = rand();
      *(uint *)((int)this + 0x52c) = (uVar6 & 0x1f) + 1;
      *(uint *)((int)this + 0x530) = uVar5 >> 3;
      _DAT_5c8efccc = 0;
      _DAT_5c8efcd0 = 0;
      goto LAB_5c8a2c9d;
    }
    uVar6 = 0;
  }
  else {
LAB_5c8a2c9d:
    uVar5 = *(uint *)((int)this + 0x530);
    uVar6 = uVar1;
    if (uVar5 <= uVar1) {
      uVar6 = uVar5;
    }
    *(uint *)((int)this + 0x530) = uVar5 - uVar6;
  }
  uVar5 = (uint)*(ushort *)(*(int *)((int)this + 0x68) + 2);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    DAT_5c8efcd4 = DAT_5c8efcd4 + *(int *)((int)this + 0x528);
    iVar3 = ftol();
    if (iVar3 < -0x80) {
      bVar2 = 0;
    }
    else if (iVar3 < 0x80) {
      bVar2 = (byte)iVar3 ^ 0x80;
    }
    else {
      bVar2 = 0xff;
    }
    *param_2 = bVar2;
    if (1 < uVar5) {
      DAT_5c8efcd8 = DAT_5c8efcd8 + 1 + *(int *)((int)this + 0x52c);
      iVar3 = ftol();
      if (iVar3 < -0x80) {
        bVar2 = 0;
      }
      else if (iVar3 < 0x80) {
        bVar2 = (byte)iVar3 ^ 0x80;
      }
      else {
        bVar2 = 0xff;
      }
      param_2[1] = bVar2;
    }
    param_2 = param_2 + uVar5;
  }
LAB_5c8a2da1:
  *param_3 = uVar1;
  return 0;
}


