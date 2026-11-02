/* Module: vegas30k.dll
   Function: FUN_01190820
   Address: 01190820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_01190820(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  byte bVar9;
  int iVar8;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_8;
  
  bVar9 = (byte)((uint)param_3 >> 8);
  local_8 = 0;
  if ((char)param_3 != -0xf) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x100) != 0) {
    return 1;
  }
  bVar5 = false;
  switch(bVar9 & 0xf0) {
  case 0:
    DAT_012b0b44 = *(undefined1 *)(param_1 + 0x139);
    *(undefined1 *)(param_1 + 0x138) = 0;
    *(byte *)(param_1 + 0x139) = bVar9 & 0xf;
    *(undefined4 *)(param_1 + 0x58) = 1;
    break;
  case 0x10:
    if (*(char *)(param_1 + 0x138) == '\0') {
      *(undefined1 *)(param_1 + 0x138) = 1;
      *(byte *)(param_1 + 0x139) = *(byte *)(param_1 + 0x139) | bVar9 << 4;
      DAT_012b0b44 = 0xff;
      *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_1 + 0x139);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    break;
  case 0x20:
    if (*(char *)(param_1 + 0x138) == '\x01') {
      DAT_012b0b44 = *(undefined1 *)(param_1 + 0x13a);
      *(undefined1 *)(param_1 + 0x138) = 2;
      *(byte *)(param_1 + 0x13a) = bVar9 & 0xf;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    break;
  case 0x30:
    if (*(char *)(param_1 + 0x138) == '\x02') {
      *(undefined1 *)(param_1 + 0x138) = 3;
      *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) | bVar9 << 4;
      DAT_012b0b44 = 0xff;
      *(uint *)(param_1 + 0x50) = (uint)*(byte *)(param_1 + 0x13a);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    break;
  case 0x40:
    if (*(char *)(param_1 + 0x138) == '\x03') {
      DAT_012b0b44 = *(undefined1 *)(param_1 + 0x13b);
      *(undefined1 *)(param_1 + 0x138) = 4;
      *(byte *)(param_1 + 0x13b) = bVar9 & 0xf;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    break;
  case 0x50:
    if (*(char *)(param_1 + 0x138) == '\x04') {
      *(undefined1 *)(param_1 + 0x138) = 5;
      *(byte *)(param_1 + 0x13b) = *(byte *)(param_1 + 0x13b) | bVar9 << 4;
      DAT_012b0b44 = 0xff;
      *(uint *)(param_1 + 0x4c) = (uint)*(byte *)(param_1 + 0x13b);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    break;
  case 0x60:
    if (*(char *)(param_1 + 0x138) == '\x05') {
      DAT_012b0b44 = *(undefined1 *)(param_1 + 0x13c);
      *(undefined1 *)(param_1 + 0x138) = 6;
      *(byte *)(param_1 + 0x13c) = bVar9 & 0xf;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    break;
  case 0x70:
    if (*(char *)(param_1 + 0x138) != '\x06') break;
    bVar6 = (bVar9 & 1) << 4 | *(byte *)(param_1 + 0x13c) & 0x1f;
    *(undefined1 *)(param_1 + 0x138) = 7;
    *(byte *)(param_1 + 0x13c) = bVar6;
    switch(bVar9 & 6) {
    case 0:
      uVar7 = 4;
LAB_01190a91:
      *(undefined4 *)(param_1 + 0x140) = uVar7;
      *(undefined4 *)(param_1 + 0x44) = uVar7;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x140) = 3;
      *(undefined4 *)(param_1 + 0x44) = 3;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x140) = 2;
      *(undefined4 *)(param_1 + 0x44) = 2;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x140) = 1;
      *(undefined4 *)(param_1 + 0x44) = 1;
      uVar7 = 5;
      if (*(int *)(param_1 + 0x10) == 5) goto LAB_01190a91;
    }
    iVar8 = *(int *)(param_1 + 0x58) + 1;
    *(uint *)(param_1 + 0x48) = (uint)bVar6;
    *(int *)(param_1 + 0x58) = iVar8;
    if (iVar8 == 8) {
      piVar1 = (int *)(param_1 + 0x44);
      _SFSMPTE_IncrementByFrame_8(piVar1,1);
      _SFSMPTE_IncrementByFrame_8(piVar1,1);
      if (*(int *)(param_1 + 0x10) == *piVar1) {
        uVar10 = *(int *)(param_1 + 0x1c) + 1;
        *(uint *)(param_1 + 0x1c) = uVar10;
        *(uint *)(param_1 + 0xc) =
             (uint)(*(uint *)(param_1 + 0x14) <= uVar10) << 2 |
             *(uint *)(param_1 + 0xc) & 0xfffffff3;
      }
      else {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
      }
      local_8 = FUN_01191cf0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                             (-((*(uint *)(param_1 + 0xc) & 8) != 0) & 3U) + 2);
      if (local_8 < 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffeffff | 0x100;
        return 1;
      }
    }
    *(undefined1 *)(param_1 + 0x138) = 8;
    DAT_012b0b44 = 0xff;
    break;
  default:
    bVar5 = true;
  }
  if ((param_4 == -1) && (param_5 == -1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_01190ed0(uVar7);
  if ((*(int *)(param_1 + 0x58) == 8) && (uVar10 = *(uint *)(param_1 + 0xc), (uVar10 & 8) == 0)) {
    if ((uVar10 & 0x80) == 0) {
      if ((uVar10 & 0x40) == 0) {
        SetEvent(*(HANDLE *)(param_1 + 0x24));
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0xbc);
      iVar2 = *(int *)(param_1 + 0xa4);
      uVar3 = *(uint *)(param_1 + 0xb8);
      uVar4 = *(uint *)(param_1 + 0xa0);
      if ((iVar8 < iVar2) || ((iVar8 <= iVar2 && (uVar3 <= uVar4)))) {
        iVar8 = (iVar2 - iVar8) - (uint)(uVar4 < uVar3);
        if ((iVar8 < *(int *)(param_1 + 0x117c)) ||
           ((iVar8 <= *(int *)(param_1 + 0x117c) && (uVar4 - uVar3 <= *(uint *)(param_1 + 0x1178))))
           ) {
          uVar10 = uVar10 & 0xffffefff | 0x800;
        }
        else {
          uVar10 = uVar10 | 0x500;
        }
      }
      else {
        uVar10 = uVar10 | 0x500;
      }
      *(uint *)(param_1 + 0xc) = uVar10;
    }
    puVar11 = (undefined4 *)(param_1 + 0x44);
    puVar12 = (undefined4 *)(param_1 + 0x5c);
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  uVar10 = *(uint *)(param_1 + 0xc);
  if (((((uVar10 & 0x40000) != 0) && (!bVar5)) && ((uVar10 & 0x80) == 0)) && ((uVar10 & 0x40) != 0))
  {
    _SfGetMillisec_0();
    iVar8 = *(int *)(param_1 + 0xa4);
    if ((*(int *)(param_1 + 0xfc) <= iVar8) &&
       ((*(int *)(param_1 + 0xfc) < iVar8 ||
        (*(uint *)(param_1 + 0xf8) <= *(uint *)(param_1 + 0xa0))))) {
      local_8 = FUN_01191c60(*(uint *)(param_1 + 0xa0),iVar8);
      if (-1 < local_8) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf | 0x80;
      }
      _SfGetMillisec_0();
    }
  }
  return local_8;
}


