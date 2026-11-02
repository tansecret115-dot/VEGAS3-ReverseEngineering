/* Module: vegas30k.dll
   Function: FUN_01121300
   Address: 01121300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01121300(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = param_1;
  if ((*(byte *)(param_1 + 100) & 0x40) == 0) {
    FUN_01158a20(param_1);
  }
  if ((*(char *)(iVar2 + 0x11b) != '\0') && ((*(byte *)(iVar2 + 0x68) & 2) != 0)) {
    switch(*(undefined1 *)(iVar2 + 0x11c)) {
    case 0:
      if ((*(byte *)(iVar2 + 0xdc) & 7) != 0) {
        if (param_3 != 0) {
          FUN_01157e20(iVar2,param_3,DAT_012070d0);
        }
        FUN_01158790(iVar2);
        return;
      }
      break;
    case 1:
      if (((*(byte *)(iVar2 + 0xdc) & 7) != 0) || (*(uint *)(iVar2 + 0xc0) < 5)) {
        if (param_3 != 0) {
          FUN_01157e20(iVar2,param_3,DAT_012070d4);
        }
        FUN_01158790(iVar2);
        return;
      }
      break;
    case 2:
      if (((byte)*(uint *)(iVar2 + 0xdc) & 7) != 4) {
        if ((param_3 != 0) && ((*(uint *)(iVar2 + 0xdc) & 4) != 0)) {
          FUN_01157e20(iVar2,param_3,DAT_012070d8);
        }
        FUN_01158790(iVar2);
        return;
      }
      break;
    case 3:
      if (((*(byte *)(iVar2 + 0xdc) & 3) != 0) || (*(uint *)(iVar2 + 0xc0) < 3)) {
        if (param_3 != 0) {
          FUN_01157e20(iVar2,param_3,DAT_012070dc);
        }
        FUN_01158790(iVar2);
        return;
      }
      break;
    case 4:
      if (((byte)*(uint *)(iVar2 + 0xdc) & 3) != 2) {
        if ((param_3 != 0) && ((*(uint *)(iVar2 + 0xdc) & 2) != 0)) {
          FUN_01157e20(iVar2,param_3,DAT_012070e0);
        }
        FUN_01158790(iVar2);
        return;
      }
      break;
    case 5:
      if (((*(byte *)(iVar2 + 0xdc) & 1) != 0) || (*(uint *)(iVar2 + 0xc0) < 2)) {
        if (param_3 != 0) {
          FUN_01157e20(iVar2,param_3,DAT_012070e4);
        }
        FUN_01158790(iVar2);
        return;
      }
      break;
    case 6:
      if ((*(byte *)(iVar2 + 0xdc) & 1) == 0) {
        FUN_01158790(iVar2);
        return;
      }
    }
  }
  if ((*(byte *)(iVar2 + 0x60) & 4) == 0) {
    FUN_01155f80(iVar2,"Invalid attempt to read row data");
  }
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar2 + 0xe4);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar2 + 0xd4);
  do {
    if (*(int *)(iVar2 + 0x70) == 0) {
      if (*(int *)(iVar2 + 0x104) == 0) {
        do {
          FUN_011561f0(iVar2,0);
          FUN_01126f90(iVar2,&param_1,4);
          uVar3 = FUN_01156170(&param_1);
          *(undefined4 *)(iVar2 + 0x104) = uVar3;
          FUN_01126d90(iVar2);
          FUN_011561c0(iVar2,(int *)(iVar2 + 0x114),4);
          if (*(int *)(iVar2 + 0x114) != DAT_01206fc4) {
            FUN_01155f80(iVar2,"Not enough image data");
          }
        } while (*(int *)(iVar2 + 0x104) == 0);
      }
      *(uint *)(iVar2 + 0x70) = *(uint *)(iVar2 + 0xa8);
      *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar2 + 0xa4);
      if (*(uint *)(iVar2 + 0x104) < *(uint *)(iVar2 + 0xa8)) {
        *(uint *)(iVar2 + 0x70) = *(uint *)(iVar2 + 0x104);
      }
      FUN_011561c0(iVar2,*(undefined4 *)(iVar2 + 0xa4),*(undefined4 *)(iVar2 + 0x70));
      *(int *)(iVar2 + 0x104) = *(int *)(iVar2 + 0x104) - *(int *)(iVar2 + 0x70);
    }
    iVar4 = FUN_0112cba0(iVar2 + 0x6c,1);
    if (iVar4 == 1) {
      if (((*(int *)(iVar2 + 0x7c) != 0) || (*(int *)(iVar2 + 0x70) != 0)) ||
         (*(int *)(iVar2 + 0x104) != 0)) {
        FUN_01155f80(iVar2,"Extra compressed data");
      }
      *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 8;
      *(uint *)(iVar2 + 100) = *(uint *)(iVar2 + 100) | 0x20;
      break;
    }
    if (iVar4 != 0) {
      pcVar5 = *(char **)(iVar2 + 0x84);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "Decompression error";
      }
      FUN_01155f80(iVar2,pcVar5);
    }
  } while (*(int *)(iVar2 + 0x7c) != 0);
  *(undefined1 *)(iVar2 + 0x100) = *(undefined1 *)(iVar2 + 0x11e);
  *(undefined1 *)(iVar2 + 0x101) = *(undefined1 *)(iVar2 + 0x11f);
  *(byte *)(iVar2 + 0x103) = *(byte *)(iVar2 + 0x121);
  piVar1 = (int *)(iVar2 + 0xf8);
  *(undefined1 *)(iVar2 + 0x102) = *(undefined1 *)(iVar2 + 0x122);
  *(uint *)(iVar2 + 0xfc) = (uint)*(byte *)(iVar2 + 0x121) * *(int *)(iVar2 + 0xd8) + 7 >> 3;
  *piVar1 = *(int *)(iVar2 + 0xd8);
  FUN_011585a0(iVar2,piVar1,*(undefined1 **)(iVar2 + 0xe4) + 1,*(int *)(iVar2 + 0xe0) + 1,
               **(undefined1 **)(iVar2 + 0xe4));
  FUN_01155f10(iVar2,*(undefined4 *)(iVar2 + 0xe0),*(undefined4 *)(iVar2 + 0xe4),
               *(int *)(iVar2 + 0xd0) + 1);
  if (*(int *)(iVar2 + 0x68) != 0) {
    FUN_01123e50(iVar2);
  }
  if ((*(char *)(iVar2 + 0x11b) == '\0') || ((*(uint *)(iVar2 + 0x68) & 2) == 0)) {
    if (param_2 != 0) {
      FUN_01157e20(iVar2,param_2,0xff);
    }
    if (param_3 == 0) goto LAB_011216f0;
    uVar3 = 0xff;
    iVar4 = param_3;
  }
  else {
    if (*(byte *)(iVar2 + 0x11c) < 6) {
      FUN_01158150(piVar1,*(int *)(iVar2 + 0xe4) + 1,*(byte *)(iVar2 + 0x11c),
                   *(uint *)(iVar2 + 0x68));
    }
    if (param_3 != 0) {
      FUN_01157e20(iVar2,param_3,(&DAT_012070d0)[*(byte *)(iVar2 + 0x11c)]);
    }
    if (param_2 == 0) goto LAB_011216f0;
    uVar3 = *(undefined4 *)(&DAT_012070b4 + (uint)*(byte *)(iVar2 + 0x11c) * 4);
    iVar4 = param_2;
  }
  FUN_01157e20(iVar2,iVar4,uVar3);
LAB_011216f0:
  FUN_01158790(iVar2);
  if (*(code **)(iVar2 + 0x185) != (code *)0x0) {
    (**(code **)(iVar2 + 0x185))(iVar2,*(undefined4 *)(iVar2 + 0xdc),*(undefined1 *)(iVar2 + 0x11c))
    ;
  }
  return;
}


