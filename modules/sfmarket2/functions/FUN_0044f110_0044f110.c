/* Module: sfmarket2.dll
   Function: FUN_0044f110
   Address: 0044f110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0044f110(void *this,int *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  byte *extraout_ECX_02;
  void *pvVar7;
  void *extraout_ECX_03;
  byte *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  
  piVar2 = param_1;
  if ((*(byte *)(param_1 + 0x19) & 0x40) == 0) {
    FUN_00480de0(param_1);
    this = extraout_ECX;
  }
  if ((*(char *)((int)piVar2 + 0x11b) != '\0') && ((*(byte *)(piVar2 + 0x1a) & 2) != 0)) {
    switch((char)piVar2[0x47]) {
    case '\0':
      if ((*(byte *)(piVar2 + 0x37) & 7) != 0) {
        if (param_3 != (byte *)0x0) {
          FUN_004801e0((int)piVar2,param_3,DAT_004a879c);
          this = extraout_ECX_00;
        }
        FUN_00480b50(this,piVar2);
        return;
      }
      break;
    case '\x01':
      if (((*(byte *)(piVar2 + 0x37) & 7) != 0) || ((uint)piVar2[0x30] < 5)) {
        if (param_3 != (byte *)0x0) {
          FUN_004801e0((int)piVar2,param_3,DAT_004a87a0);
          this = extraout_ECX_01;
        }
        FUN_00480b50(this,piVar2);
        return;
      }
      break;
    case '\x02':
      if (((byte)piVar2[0x37] & 7) != 4) {
        pbVar6 = param_3;
        if ((param_3 != (byte *)0x0) && ((piVar2[0x37] & 4U) != 0)) {
          FUN_004801e0((int)piVar2,param_3,DAT_004a87a4);
          pbVar6 = extraout_ECX_02;
        }
        FUN_00480b50(pbVar6,piVar2);
        return;
      }
      break;
    case '\x03':
      pvVar7 = (void *)CONCAT31((int3)((uint)this >> 8),*(byte *)(piVar2 + 0x37));
      if (((*(byte *)(piVar2 + 0x37) & 3) != 0) || ((uint)piVar2[0x30] < 3)) {
        if (param_3 != (byte *)0x0) {
          FUN_004801e0((int)piVar2,param_3,DAT_004a87a8);
          pvVar7 = extraout_ECX_03;
        }
        FUN_00480b50(pvVar7,piVar2);
        return;
      }
      break;
    case '\x04':
      if (((byte)piVar2[0x37] & 3) != 2) {
        pbVar6 = param_3;
        if ((param_3 != (byte *)0x0) && ((piVar2[0x37] & 2U) != 0)) {
          FUN_004801e0((int)piVar2,param_3,DAT_004a87ac);
          pbVar6 = extraout_ECX_04;
        }
        FUN_00480b50(pbVar6,piVar2);
        return;
      }
      break;
    case '\x05':
      if (((*(byte *)(piVar2 + 0x37) & 1) != 0) || ((uint)piVar2[0x30] < 2)) {
        if (param_3 != (byte *)0x0) {
          FUN_004801e0((int)piVar2,param_3,DAT_004a87b0);
          this = extraout_ECX_05;
        }
        FUN_00480b50(this,piVar2);
        return;
      }
      break;
    case '\x06':
      if ((*(byte *)(piVar2 + 0x37) & 1) == 0) {
        FUN_00480b50(this,piVar2);
        return;
      }
    }
  }
  if ((*(byte *)(piVar2 + 0x18) & 4) == 0) {
    FUN_0047e340(piVar2,"Invalid attempt to read row data");
  }
  piVar2[0x1e] = piVar2[0x39];
  piVar2[0x1f] = piVar2[0x35];
  do {
    if (piVar2[0x1c] == 0) {
      if (piVar2[0x41] == 0) {
        do {
          FUN_0047e5b0(piVar2,0);
          FUN_00454da0(piVar2,&param_1,4);
          iVar3 = FUN_0047e530((byte *)&param_1);
          piVar2[0x41] = iVar3;
          FUN_00454ba0((int)piVar2);
          FUN_0047e580(piVar2,(byte *)(piVar2 + 0x45),4);
          if (piVar2[0x45] != DAT_004a8690) {
            FUN_0047e340(piVar2,"Not enough image data");
          }
        } while (piVar2[0x41] == 0);
      }
      piVar2[0x1c] = piVar2[0x2a];
      piVar2[0x1b] = piVar2[0x29];
      if ((uint)piVar2[0x41] < (uint)piVar2[0x2a]) {
        piVar2[0x1c] = piVar2[0x41];
      }
      FUN_0047e580(piVar2,(byte *)piVar2[0x29],piVar2[0x1c]);
      piVar2[0x41] = piVar2[0x41] - piVar2[0x1c];
    }
    uVar4 = FUN_00446b90(piVar2 + 0x1b,1);
    if (uVar4 == 1) {
      if (((piVar2[0x1f] != 0) || (piVar2[0x1c] != 0)) || (piVar2[0x41] != 0)) {
        FUN_0047e340(piVar2,"Extra compressed data");
      }
      piVar2[0x18] = piVar2[0x18] | 8;
      piVar2[0x19] = piVar2[0x19] | 0x20;
      break;
    }
    if (uVar4 != 0) {
      pcVar5 = (char *)piVar2[0x21];
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Decompression error";
      }
      FUN_0047e340(piVar2,pcVar5);
    }
  } while (piVar2[0x1f] != 0);
  *(undefined1 *)(piVar2 + 0x40) = *(undefined1 *)((int)piVar2 + 0x11e);
  *(undefined1 *)((int)piVar2 + 0x101) = *(undefined1 *)((int)piVar2 + 0x11f);
  *(byte *)((int)piVar2 + 0x103) = *(byte *)((int)piVar2 + 0x121);
  puVar1 = (uint *)(piVar2 + 0x3e);
  *(undefined1 *)((int)piVar2 + 0x102) = *(undefined1 *)((int)piVar2 + 0x122);
  piVar2[0x3f] = (uint)*(byte *)((int)piVar2 + 0x121) * piVar2[0x36] + 7 >> 3;
  *puVar1 = piVar2[0x36];
  FUN_00480960(piVar2,(int)puVar1,(byte *)piVar2[0x39] + 1,(byte *)(piVar2[0x38] + 1),
               (uint)*(byte *)piVar2[0x39]);
  FUN_0047e2d0(piVar2,(undefined4 *)piVar2[0x38],(undefined4 *)piVar2[0x39],piVar2[0x34] + 1);
  pvVar7 = extraout_ECX_06;
  if (piVar2[0x1a] != 0) {
    FUN_00451c60(piVar2);
    pvVar7 = extraout_ECX_07;
  }
  if ((*(char *)((int)piVar2 + 0x11b) == '\0') ||
     (pvVar7 = (void *)piVar2[0x1a], ((uint)pvVar7 & 2) == 0)) {
    if (param_2 != (byte *)0x0) {
      FUN_004801e0((int)piVar2,param_2,0xff);
      pvVar7 = extraout_ECX_10;
    }
    if (param_3 == (byte *)0x0) goto LAB_0044f500;
    uVar4 = 0xff;
    pbVar6 = param_3;
  }
  else {
    if (*(byte *)(piVar2 + 0x47) < 6) {
      FUN_00480510(puVar1,piVar2[0x39] + 1,(uint)*(byte *)(piVar2 + 0x47),(uint)pvVar7);
      pvVar7 = extraout_ECX_08;
    }
    if (param_3 != (byte *)0x0) {
      FUN_004801e0((int)piVar2,param_3,(&DAT_004a879c)[*(byte *)(piVar2 + 0x47)]);
      pvVar7 = extraout_ECX_09;
    }
    if (param_2 == (byte *)0x0) goto LAB_0044f500;
    uVar4 = *(uint *)(&DAT_004a8780 + (uint)*(byte *)(piVar2 + 0x47) * 4);
    pbVar6 = param_2;
  }
  FUN_004801e0((int)piVar2,pbVar6,uVar4);
  pvVar7 = extraout_ECX_11;
LAB_0044f500:
  FUN_00480b50(pvVar7,piVar2);
  if (*(code **)((int)piVar2 + 0x185) != (code *)0x0) {
    (**(code **)((int)piVar2 + 0x185))(piVar2,piVar2[0x37],(char)piVar2[0x47]);
  }
  return;
}


