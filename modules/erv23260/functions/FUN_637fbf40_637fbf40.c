/* Module: erv23260.dll
   Function: FUN_637fbf40
   Address: 637fbf40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fbf40(void *this,int param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  uint uVar3;
  undefined3 extraout_var_00;
  undefined1 *puVar4;
  uint local_8;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  bVar1 = FUN_637fd5c0((int)this);
  iVar2 = CONCAT31(extraout_var,bVar1);
  while (iVar2 != 0) {
    local_8 = FUN_637fd3d0(this,8);
    switch((local_8 & 0xff) >> 4) {
    case 0:
      *(undefined1 *)(param_1 + 0xa6) = 1;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0xa7) = 1;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0xa8) = 1;
      break;
    case 3:
      *(undefined1 *)(param_1 + 0xa9) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xaa);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 4:
      *(undefined1 *)(param_1 + 0xae) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xaf);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 5:
      *(undefined1 *)(param_1 + 0xb7) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xb8);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 6:
      *(undefined1 *)(param_1 + 0xbc) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xbd);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 7:
      *(undefined1 *)(param_1 + 0xc1) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xc2);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 8:
      *(undefined1 *)(param_1 + 0xca) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xcb);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 9:
      *(undefined1 *)(param_1 + 0xcf) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xd0);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 10:
      *(undefined1 *)(param_1 + 0xd4) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xd5);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 0xb:
      *(undefined1 *)(param_1 + 0xd9) = 1;
      if ((local_8 & 0xf) != 0) {
        puVar4 = (undefined1 *)(param_1 + 0xda);
        local_8 = local_8 & 0xf;
        do {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *puVar4 = (char)uVar3;
          puVar4 = puVar4 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      break;
    case 0xc:
      *(undefined1 *)(param_1 + 0xde) = 1;
      FUN_637fd5c0((int)this);
      uVar3 = FUN_637fd3d0(this,8);
      *(char *)(param_1 + 0xdf) = (char)uVar3;
      if (1 < ((byte)local_8 & 0xf)) {
        FUN_637fd5c0((int)this);
        uVar3 = FUN_637fd3d0(this,8);
        *(char *)(param_1 + 0xe0) = (char)uVar3;
        if ((uVar3 & 1) != 0) {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe1) = (char)uVar3;
        }
        if ((*(byte *)(param_1 + 0xe0) & 2) != 0) {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe2) = (char)uVar3;
        }
        if ((*(byte *)(param_1 + 0xe0) & 4) != 0) {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe3) = (char)uVar3;
        }
        if ((*(byte *)(param_1 + 0xe0) & 8) != 0) {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe4) = (char)uVar3;
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe5) = (char)uVar3;
        }
        if ((*(byte *)(param_1 + 0xe0) & 0x10) != 0) {
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe6) = (char)uVar3;
          FUN_637fd5c0((int)this);
          uVar3 = FUN_637fd3d0(this,8);
          *(char *)(param_1 + 0xe7) = (char)uVar3;
        }
      }
      break;
    case 0xd:
      *(undefined1 *)(param_1 + 0xe8) = 1;
      break;
    case 0xe:
      *(undefined1 *)(param_1 + 0xe9) = 1;
      break;
    case 0xf:
      *(undefined1 *)(param_1 + 0xea) = 1;
    }
    bVar1 = FUN_637fd5c0((int)this);
    iVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return;
}


