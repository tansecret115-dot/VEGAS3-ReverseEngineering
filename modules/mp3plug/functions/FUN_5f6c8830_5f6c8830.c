/* Module: mp3plug.dll
   Function: FUN_5f6c8830
   Address: 5f6c8830
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6c8830(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((param_1 == (int *)0x0) || (param_1[7] == 0)) || (*param_1 == 0)) {
LAB_5f6c8c04:
    return 0xfffffffe;
  }
  uVar5 = (param_2 != 4) - 1 & 0xfffffffb;
  uVar4 = 0xfffffffb;
  do {
    puVar2 = (undefined4 *)param_1[7];
    switch(*puVar2) {
    case 0:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      puVar2[1] = (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      uVar3 = puVar2[1];
      *param_1 = *param_1 + 1;
      if (((byte)uVar3 & 0xf) != 8) {
        *puVar2 = 0xd;
        param_1[6] = (int)"unknown compression method";
        *(undefined4 *)(param_1[7] + 4) = 5;
        uVar4 = uVar5;
        break;
      }
      if ((uint)puVar2[4] < ((uint)puVar2[1] >> 4) + 8) {
        *puVar2 = 0xd;
        param_1[6] = (int)"invalid window size";
        *(undefined4 *)(param_1[7] + 4) = 5;
        uVar4 = uVar5;
        break;
      }
      *puVar2 = 1;
      uVar4 = uVar5;
    case 1:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      puVar2 = (undefined4 *)param_1[7];
      param_1[2] = param_1[2] + 1;
      bVar1 = *(byte *)*param_1;
      *param_1 = (int)((byte *)*param_1 + 1);
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          uVar4 = uVar5;
          goto LAB_5f6c8aea;
        }
        *puVar2 = 7;
        uVar4 = uVar5;
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (int)"incorrect header check";
        *(undefined4 *)(param_1[7] + 4) = 5;
        uVar4 = uVar5;
      }
      break;
    case 2:
LAB_5f6c8aea:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 3;
      uVar4 = uVar5;
LAB_5f6c8b24:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 4;
      uVar4 = uVar5;
LAB_5f6c8b63:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 5;
      uVar4 = uVar5;
LAB_5f6c8b9e:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
      param_1[0xc] = ((undefined4 *)param_1[7])[2];
      *(undefined4 *)param_1[7] = 6;
      return 2;
    case 3:
      goto LAB_5f6c8b24;
    case 4:
      goto LAB_5f6c8b63;
    case 5:
      goto LAB_5f6c8b9e;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (int)"need dictionary";
      *(undefined4 *)(param_1[7] + 4) = 0;
      return 0xfffffffe;
    case 7:
      uVar4 = FUN_5f6cb470((uint *)puVar2[5],param_1,uVar4);
      if (uVar4 == 0xfffffffd) {
        *(undefined4 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        uVar4 = 0xfffffffd;
      }
      else {
        if (uVar4 == 0) {
          uVar4 = uVar5;
        }
        if (uVar4 != 1) {
          return uVar4;
        }
        FUN_5f6cb350(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          uVar4 = uVar5;
          goto LAB_5f6c89dc;
        }
        *puVar2 = 0xc;
        uVar4 = uVar5;
      }
      break;
    case 8:
LAB_5f6c89dc:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 9;
      uVar4 = uVar5;
LAB_5f6c8a11:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 10;
      uVar4 = uVar5;
LAB_5f6c8a4b:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 0xb;
      uVar4 = uVar5;
LAB_5f6c8a85:
      if (param_1[1] == 0) {
        return uVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
      puVar2 = (undefined4 *)param_1[7];
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)param_1[7] = 0xc;
LAB_5f6c8c19:
        return 1;
      }
      *puVar2 = 0xd;
      param_1[6] = (int)"incorrect data check";
      *(undefined4 *)(param_1[7] + 4) = 5;
      uVar4 = uVar5;
      break;
    case 9:
      goto LAB_5f6c8a11;
    case 10:
      goto LAB_5f6c8a4b;
    case 0xb:
      goto LAB_5f6c8a85;
    case 0xc:
      goto LAB_5f6c8c19;
    case 0xd:
      return 0xfffffffd;
    default:
      goto LAB_5f6c8c04;
    }
  } while( true );
}


