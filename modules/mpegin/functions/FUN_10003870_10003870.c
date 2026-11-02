/* Module: mpegin.dll
   Function: FUN_10003870
   Address: 10003870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10003870(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_1 + 0x12e54);
  bVar3 = false;
  iVar2 = *(int *)(iVar1 + 0x168);
  do {
    if ((((iVar2 != 0) || (*(int *)(iVar1 + 0x16c) != 0)) || (0 < *(int *)(iVar1 + 0x14c))) ||
       ((-1 < *(int *)(iVar1 + 0x14c) && (param_2 <= *(uint *)(iVar1 + 0x148))))) {
      if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x168) != 0) {
        return 1;
      }
      if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x80) == 0)) {
        FUN_10007e90(param_1,(byte *)s_No_audio_or_video_streams_found_100183f8);
        return 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x154) = *(undefined4 *)(param_1 + 0x20);
      return 0;
    }
    uVar5 = FUN_10005cb0((int *)(iVar1 + 0x128),0x20);
    if (uVar5 >> 8 != 1) {
      do {
        iVar1 = *(int *)(param_1 + 0x12e54);
        if ((*(int *)(iVar1 + 0x168) != 0) || (*(int *)(iVar1 + 0x16c) != 0)) break;
        uVar6 = FUN_10005cb0((int *)(iVar1 + 0x128),8);
        uVar7 = uVar5 << 8;
        uVar5 = uVar7 | uVar6;
      } while ((uVar7 | uVar6 & 0xffffff00) != 0x100);
    }
    switch(uVar5) {
    case 0x1ba:
      uVar5 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x128,' ');
      if (((uVar5 & 0xf1000100) == 0x21000100) || ((uVar5 & 0xc4000400) == 0x44000400)) {
        uVar5 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
        if ((uVar5 & 0x40) == 0) {
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x20) = 2;
        }
        FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
        FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x18);
        bVar3 = true;
      }
      break;
    default:
      if ((bVar3) && (0x1ba < uVar5)) {
        uVar5 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
        }
      }
      break;
    case 0x1bd:
      if (!bVar3) break;
      uVar5 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
      if (*(int *)(param_1 + 0x20) != 2) {
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
        }
        break;
      }
      FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
      uVar6 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      if (uVar6 != 0) {
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
        }
        uVar5 = uVar5 - uVar6;
      }
      uVar6 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      cVar4 = (char)uVar6;
      switch(uVar6) {
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
        uVar6 = 1 << (cVar4 + 0x80U & 0x1f);
        if ((uVar6 & *(uint *)(param_1 + 0x4e34)) == 0) {
          *(uint *)(param_1 + 0x4e34) = *(uint *)(param_1 + 0x4e34) | uVar6;
          *(int *)(param_1 + 0x4e38) = *(int *)(param_1 + 0x4e38) + 1;
        }
        goto LAB_10003cde;
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar6 = 1 << (cVar4 + 0x78U & 0x1f);
        if ((uVar6 & *(uint *)(param_1 + 0x4e3c)) == 0) {
          *(uint *)(param_1 + 0x4e3c) = *(uint *)(param_1 + 0x4e3c) | uVar6;
          *(int *)(param_1 + 0x4e40) = *(int *)(param_1 + 0x4e40) + 1;
        }
        break;
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
        uVar6 = 1 << (cVar4 + 0x70U & 0x1f);
        if ((uVar6 & *(uint *)(param_1 + 0x4e44)) == 0) {
          *(uint *)(param_1 + 0x4e44) = *(uint *)(param_1 + 0x4e44) | uVar6;
          *(int *)(param_1 + 0x4e48) = *(int *)(param_1 + 0x4e48) + 1;
        }
        break;
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
        uVar6 = 1 << (cVar4 + 0x60U & 0x1f);
        if ((uVar6 & *(uint *)(param_1 + 0x4e4c)) == 0) {
          *(uint *)(param_1 + 0x4e4c) = *(uint *)(param_1 + 0x4e4c) | uVar6;
          *(int *)(param_1 + 0x4e50) = *(int *)(param_1 + 0x4e50) + 1;
        }
LAB_10003cde:
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      for (uVar6 = uVar5 - 1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
      }
      for (uVar5 = uVar5 - 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
      }
      break;
    case 0x1c0:
    case 0x1c1:
    case 0x1c2:
    case 0x1c3:
    case 0x1c4:
    case 0x1c5:
    case 0x1c6:
    case 0x1c7:
    case 0x1c8:
    case 0x1c9:
    case 0x1ca:
    case 0x1cb:
    case 0x1cc:
    case 0x1cd:
    case 0x1ce:
    case 0x1cf:
    case 0x1d0:
    case 0x1d1:
    case 0x1d2:
    case 0x1d3:
    case 0x1d4:
    case 0x1d5:
    case 0x1d6:
    case 0x1d7:
    case 0x1d8:
    case 0x1d9:
    case 0x1da:
    case 0x1db:
    case 0x1dc:
    case 0x1dd:
    case 0x1de:
    case 0x1df:
      if (bVar3) {
        uVar5 = 1 << ((char)uVar5 + 0x40U & 0x1f);
        if ((uVar5 & *(uint *)(param_1 + 0xcf0)) == 0) {
          *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) | uVar5;
          *(int *)(param_1 + 0xcf8) = *(int *)(param_1 + 0xcf8) + 1;
        }
        uVar5 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
        }
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      break;
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e3:
    case 0x1e4:
    case 0x1e5:
    case 0x1e6:
    case 0x1e7:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
    case 0x1ec:
    case 0x1ed:
    case 0x1ee:
    case 0x1ef:
      if (bVar3) {
        uVar5 = 1 << ((char)uVar5 + 0x20U & 0x1f);
        if ((uVar5 & *(uint *)(param_1 + 0xcf4)) == 0) {
          *(uint *)(param_1 + 0xcf4) = *(uint *)(param_1 + 0xcf4) | uVar5;
          *(int *)(param_1 + 0xcfc) = *(int *)(param_1 + 0xcfc) + 1;
        }
        uVar5 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
        }
        *(undefined4 *)(param_1 + 0x24) = 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x12e54);
    iVar2 = *(int *)(iVar1 + 0x168);
  } while( true );
}


