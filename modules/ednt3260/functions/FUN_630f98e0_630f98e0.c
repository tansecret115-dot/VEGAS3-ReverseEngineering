/* Module: ednt3260.dll
   Function: FUN_630f98e0
   Address: 630f98e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f98e0(void *this,int param_1,int param_2,short param_3,short param_4)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar6 = (int)param_3;
  if (iVar6 < param_4) {
    puVar7 = (ushort *)(param_1 + iVar6 * 2);
    _param_4 = param_4 - iVar6;
    do {
      iVar6 = (int)*(short *)((param_2 - param_1) + (int)puVar7);
      sVar5 = *(short *)(&DAT_63101ad8 + iVar6 * 2);
      cVar4 = (char)sVar5;
      switch(iVar6) {
      case 0:
        break;
      case 1:
        if (*(short *)((int)this + 0x3fb8a) == 0) {
          uVar1 = *(ushort *)(&DAT_63102858 + iVar6 * 2);
          sVar2 = *(short *)((int)this + 0x6300);
          uVar3 = *puVar7;
          sVar5 = sVar2 + sVar5;
          *(short *)((int)this + 0x6300) = sVar5;
          *(ushort *)((int)this + 0x62fe) =
               *(ushort *)((int)this + 0x62fe) | (uVar1 & uVar3) >> ((byte)sVar2 & 0x1f);
          if (0xf < sVar5) {
            **(undefined2 **)((int)this + 0x62fa) = *(undefined2 *)((int)this + 0x62fe);
            *(short *)((int)this + 0x6300) = *(short *)((int)this + 0x6300) + -0x10;
            *(int *)((int)this + 0x62fa) = *(int *)((int)this + 0x62fa) + 2;
            *(ushort *)((int)this + 0x62fe) =
                 (uVar1 & uVar3) << (cVar4 - (char)*(undefined2 *)((int)this + 0x6300) & 0x1fU);
          }
          *(undefined2 *)((int)this + 0x3fb8a) = 1;
        }
        else {
          *(ushort *)((int)this + 0x3fb8a) =
               (-(ushort)(*(short *)((int)this + 0x3fb8a) != 1) & 0xfffe) + 2;
        }
        break;
      case 2:
        if (*(short *)((int)this + 0x3fb8c) == 0) {
          uVar1 = *(ushort *)(&DAT_63102858 + iVar6 * 2);
          sVar2 = *(short *)((int)this + 0x6300);
          uVar3 = *puVar7;
          sVar5 = sVar2 + sVar5;
          *(short *)((int)this + 0x6300) = sVar5;
          *(ushort *)((int)this + 0x62fe) =
               *(ushort *)((int)this + 0x62fe) | (uVar1 & uVar3) >> ((byte)sVar2 & 0x1f);
          if (0xf < sVar5) {
            **(undefined2 **)((int)this + 0x62fa) = *(undefined2 *)((int)this + 0x62fe);
            *(short *)((int)this + 0x6300) = *(short *)((int)this + 0x6300) + -0x10;
            *(int *)((int)this + 0x62fa) = *(int *)((int)this + 0x62fa) + 2;
            *(ushort *)((int)this + 0x62fe) =
                 (uVar1 & uVar3) << (cVar4 - (char)*(undefined2 *)((int)this + 0x6300) & 0x1fU);
          }
          *(undefined2 *)((int)this + 0x3fb8c) = 1;
        }
        else {
          *(ushort *)((int)this + 0x3fb8c) =
               (-(ushort)(*(short *)((int)this + 0x3fb8c) != 1) & 0xfffe) + 2;
        }
        break;
      case 3:
      case 5:
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
        uVar1 = *(ushort *)(&DAT_63102858 + iVar6 * 2);
        sVar2 = *(short *)((int)this + 0x6300);
        uVar3 = *puVar7;
        sVar5 = sVar2 + sVar5;
        *(short *)((int)this + 0x6300) = sVar5;
        *(ushort *)((int)this + 0x62fe) =
             *(ushort *)((int)this + 0x62fe) | (uVar1 & uVar3) >> ((byte)sVar2 & 0x1f);
        if (0xf < sVar5) {
          **(undefined2 **)((int)this + 0x62fa) = *(undefined2 *)((int)this + 0x62fe);
          *(short *)((int)this + 0x6300) = *(short *)((int)this + 0x6300) + -0x10;
          *(int *)((int)this + 0x62fa) = *(int *)((int)this + 0x62fa) + 2;
          *(ushort *)((int)this + 0x62fe) =
               (uVar1 & uVar3) << (cVar4 - (char)*(undefined2 *)((int)this + 0x6300) & 0x1fU);
        }
        break;
      case 4:
        if (*(short *)((int)this + 0x3fb8e) == 0) {
          uVar1 = *(ushort *)(&DAT_63102858 + iVar6 * 2);
          sVar2 = *(short *)((int)this + 0x6300);
          uVar3 = *puVar7;
          sVar5 = sVar2 + sVar5;
          *(short *)((int)this + 0x6300) = sVar5;
          *(ushort *)((int)this + 0x62fe) =
               *(ushort *)((int)this + 0x62fe) | (uVar1 & uVar3) >> ((byte)sVar2 & 0x1f);
          if (0xf < sVar5) {
            **(undefined2 **)((int)this + 0x62fa) = *(undefined2 *)((int)this + 0x62fe);
            *(short *)((int)this + 0x6300) = *(short *)((int)this + 0x6300) + -0x10;
            *(int *)((int)this + 0x62fa) = *(int *)((int)this + 0x62fa) + 2;
            *(ushort *)((int)this + 0x62fe) =
                 (uVar1 & uVar3) << (cVar4 - (char)*(undefined2 *)((int)this + 0x6300) & 0x1fU);
          }
          *(undefined2 *)((int)this + 0x3fb8e) = 1;
        }
        else {
          *(undefined2 *)((int)this + 0x3fb8e) = 0;
        }
        break;
      default:
        FUN_630f92d0();
      }
      puVar7 = puVar7 + 1;
      _param_4 = _param_4 + -1;
    } while (_param_4 != 0);
  }
  return;
}


