/* Module: rmbe3260.dll
   Function: FUN_66027dc0
   Address: 66027dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66027dc0(int *param_1)

{
  int *piVar1;
  int *this;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  this = param_1;
  if ((param_1[0x13] == 0) || (param_1[0x14] == 0)) {
    return -0x7ffbfff9;
  }
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    param_1 = (int *)0x0;
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,s_totalduration_6606cc90,&param_1);
    if (-1 < iVar2) {
      this[0x22] = (int)param_1;
    }
  }
  (**(code **)(*this + 0x7c))(this,this + 0x29,this + 0x2a,this + 0x2b,this + 0x2c);
  (**(code **)(this[0x23] + 0xc))(this + 0x23,local_18,local_14,this + 0x2d,this + 0x2e);
  iVar2 = (**(code **)(*this + 0x58))(this);
  uVar4 = 0;
  this[0x79] = 0;
  if (-1 < iVar2) {
    this[0x28] = 0;
    param_1 = (int *)this[0x16];
    if ((short)param_1 != 0) {
      do {
        iVar2 = (**(code **)(*this + 0x78))(this,*(undefined4 *)(this[0x15] + (uint)uVar4 * 4));
        if (iVar2 < 0) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ushort)param_1);
    }
  }
  this[0x78] = 0;
  this[0x77] = 0;
  if (-1 < iVar2) {
    param_1 = (int *)0x0;
    iVar2 = (*(code *)**(undefined4 **)this[8])((undefined4 *)this[8],&DAT_66065a68,&param_1);
    if (-1 < iVar2) {
      (**(code **)(*param_1 + 0xc))(param_1,&local_10,&local_c);
      (**(code **)(*param_1 + 0x14))(param_1,&local_8);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
      FUN_6602b020((int)(this + 0x53));
      switch(local_8) {
      case 0:
        uVar3 = 0;
        break;
      case 1:
        uVar3 = 1;
        break;
      case 2:
        uVar3 = 5;
        break;
      case 3:
        uVar3 = 9;
        break;
      case 4:
        uVar3 = 0xd;
        break;
      case 5:
        uVar3 = 0x10;
        break;
      case 6:
        uVar3 = 0x11;
        break;
      case 7:
        uVar3 = 0x12;
        break;
      case 8:
        uVar3 = 0x13;
        break;
      case 9:
        uVar3 = 0x14;
        break;
      case 10:
        uVar3 = 0x15;
        break;
      default:
        uVar3 = 0x16;
      }
      iVar2 = FUN_6602b740(this + 0x53,uVar3,local_10,local_c,this[0x29],this[0x2a],this[0x2b],
                           this[0x2c]);
      if (-1 < iVar2) {
        piVar1 = (int *)this[0x7a];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x50))(piVar1);
          (**(code **)(*(int *)this[0x7a] + 0xc))((int *)this[0x7a],0x10);
          (**(code **)(*(int *)this[0x7a] + 0x1c))((int *)this[0x7a],this[0x2d],this[0x2e]);
          switch(this[0x7b]) {
          case 0:
            uVar3 = 0;
            break;
          case 1:
            uVar3 = 1;
            break;
          case 2:
            uVar3 = 5;
            break;
          case 3:
            uVar3 = 9;
            break;
          case 4:
            uVar3 = 0xd;
            break;
          case 5:
            uVar3 = 0x10;
            break;
          case 6:
            uVar3 = 0x11;
            break;
          case 7:
            uVar3 = 0x12;
            break;
          case 8:
            uVar3 = 0x13;
            break;
          case 9:
            uVar3 = 0x14;
            break;
          case 10:
            uVar3 = 0x15;
            break;
          default:
            uVar3 = 0x16;
          }
          (**(code **)(*(int *)this[0x7a] + 0x14))((int *)this[0x7a],uVar3);
          (**(code **)(*(int *)this[0x7a] + 0x44))((int *)this[0x7a]);
          (**(code **)(*(int *)this[0x7a] + 0x48))((int *)this[0x7a],&param_1);
          iVar2 = FUN_66029730(this,(uint)param_1);
        }
        if (-1 < iVar2) {
          return iVar2;
        }
      }
    }
  }
  (**(code **)(*this + 0x3c))(this);
  return iVar2;
}


