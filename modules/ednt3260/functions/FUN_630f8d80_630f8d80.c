/* Module: ednt3260.dll
   Function: FUN_630f8d80
   Address: 630f8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_630f8d80(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,short param_5,
            short param_6)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  iVar3 = (int)param_5;
  if (iVar3 < param_6) {
    puVar5 = (ushort *)(param_4 + iVar3 * 2);
    _param_6 = param_6 - iVar3;
    do {
      iVar3 = (int)*(short *)((param_3 - param_4) + (int)puVar5);
      switch(iVar3) {
      case 0:
        *puVar5 = 0;
        break;
      case 1:
        sVar1 = ftol();
        if (sVar1 < 0) {
          sVar1 = 0;
        }
        else if (2 < sVar1) {
          sVar1 = 2;
        }
        *(short *)((int)this + *(short *)((int)this + 0x3fb8a) * 2 + 0x3fb90) = sVar1;
        if (*(short *)((int)this + 0x3fb8a) == 0) {
          *(ushort **)((int)this + 0x3fba0) = puVar5;
          *(undefined2 *)((int)this + 0x3fb8a) = 1;
        }
        else if (*(short *)((int)this + 0x3fb8a) == 1) {
          *puVar5 = 0;
          *(undefined2 *)((int)this + 0x3fb8a) = 2;
        }
        else {
          **(short **)((int)this + 0x3fba0) =
               ((*(short *)((int)this + 0x3fb90) * 3 + *(short *)((int)this + 0x3fb92)) * 3 +
               *(short *)((int)this + 0x3fb94)) * 0x800;
          *puVar5 = 0;
          *(undefined2 *)((int)this + 0x3fb8a) = 0;
        }
        break;
      case 2:
        sVar1 = ftol();
        if (sVar1 < 0) {
          sVar1 = 0;
        }
        else if (4 < sVar1) {
          sVar1 = 4;
        }
        *(short *)((int)this + *(short *)((int)this + 0x3fb8c) * 2 + 0x3fb96) = sVar1;
        if (*(short *)((int)this + 0x3fb8c) == 0) {
          *(ushort **)((int)this + 0x3fba4) = puVar5;
          *(undefined2 *)((int)this + 0x3fb8c) = 1;
        }
        else if (*(short *)((int)this + 0x3fb8c) == 1) {
          *puVar5 = 0;
          *(undefined2 *)((int)this + 0x3fb8c) = 2;
        }
        else {
          **(short **)((int)this + 0x3fba4) =
               ((*(short *)((int)this + 0x3fb96) * 5 + *(short *)((int)this + 0x3fb98)) * 5 +
               *(short *)((int)this + 0x3fb9a)) * 0x200;
          *puVar5 = 0;
          *(undefined2 *)((int)this + 0x3fb8c) = 0;
        }
        break;
      case 3:
        sVar1 = ftol();
        if (sVar1 < 0) {
          *puVar5 = 0;
        }
        else {
          if (6 < sVar1) {
            sVar1 = 6;
          }
          *puVar5 = sVar1 << 0xd;
        }
        break;
      case 4:
        sVar1 = ftol();
        if (sVar1 < 0) {
          sVar1 = 0;
        }
        else if (10 < sVar1) {
          sVar1 = 10;
        }
        *(short *)((int)this + *(short *)((int)this + 0x3fb8e) * 2 + 0x3fb9c) = sVar1;
        if (*(short *)((int)this + 0x3fb8e) == 0) {
          *(ushort **)((int)this + 0x3fba8) = puVar5;
          *(undefined2 *)((int)this + 0x3fb8e) = 1;
        }
        else {
          **(short **)((int)this + 0x3fba8) =
               (*(short *)((int)this + 0x3fb9c) * 0xb + *(short *)((int)this + 0x3fb9e)) * 0x200;
          *puVar5 = 0;
          *(undefined2 *)((int)this + 0x3fb8e) = 0;
        }
        break;
      case 5:
        sVar1 = ftol();
        if (sVar1 < 0) {
          *puVar5 = 0;
        }
        else {
          if (0xe < sVar1) {
            sVar1 = 0xe;
          }
          *puVar5 = sVar1 << 0xc;
        }
        break;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        uVar2 = ftol();
        *puVar5 = uVar2;
        iVar4 = FUN_630f9590(uVar2,*(short *)(&DAT_63101a10 +
                                             *(short *)(&DAT_63101ad8 + iVar3 * 2) * 2));
        *puVar5 = *(ushort *)(&DAT_631019e8 + *(short *)(&DAT_63101ad8 + iVar3 * 2) * 2) &
                  (ushort)iVar4;
        break;
      default:
        FUN_630f92d0();
      }
      puVar5 = puVar5 + 1;
      _param_6 = _param_6 + -1;
    } while (_param_6 != 0);
  }
  return;
}


