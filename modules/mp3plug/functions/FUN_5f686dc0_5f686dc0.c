/* Module: mp3plug.dll
   Function: FUN_5f686dc0
   Address: 5f686dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f686dc0(LPCSTR param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int local_164;
  uint local_160;
  DWORD local_15c;
  DWORD local_158;
  DWORD local_154 [2];
  CHAR local_14c [2];
  undefined1 local_14a;
  int local_148;
  int local_144;
  uint local_140 [4];
  int local_130;
  undefined4 local_12c;
  uint local_124;
  HKEY__ local_120 [6];
  undefined1 local_108;
  BYTE local_104 [260];
  
  piVar1 = DAT_5f74d2f8;
  if ((param_1 == (LPCSTR)0x0) || (*param_1 == '\0')) {
    if (DAT_5f74d2f8 != (int *)0x0) {
      if (DAT_5f74d2f8 != (int *)0x0) {
        FUN_5f71e4d0(DAT_5f74d2f8);
        pvVar4 = GlobalHandle(piVar1);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(piVar1);
        GlobalFree(pvVar4);
      }
      DAT_5f74d2f8 = (int *)0x0;
    }
    puVar5 = DAT_5f74d2fc;
    if (DAT_5f74d2fc != (undefined4 *)0x0) {
      FUN_5f71e4d0(DAT_5f74d2fc);
      pvVar4 = GlobalHandle(puVar5);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar5);
      GlobalFree(pvVar4);
      DAT_5f74d2fc = (undefined4 *)0x0;
    }
    DAT_5f74d300 = 1;
    DAT_5f74d32c = 0;
    DAT_5f74d330 = 0xffffff9c;
    DAT_5f74d334 = 0;
    DAT_5f74d338 = 0xffffff38;
    DAT_5f74d33c = 0;
    DAT_5f74d340 = -300;
    return 0;
  }
  if (DAT_5f74d300 != 0) {
    iVar2 = lstrcmpiA(param_1,&DAT_5f74d344);
    puVar5 = DAT_5f74d2fc;
    piVar1 = DAT_5f74d2f8;
    if (iVar2 == 0) {
      if (DAT_5f74d32c == 0) {
        DAT_5f74d308 = 0;
        return 0;
      }
      if (DAT_5f74d2fc == (undefined4 *)0x0) {
        DAT_5f74d308 = 0;
        DAT_5f74d334 = 0;
        return 0;
      }
      iVar2 = FUN_5f7212c0(DAT_5f74d2fc,&local_148,&local_164,1);
      if (DAT_5f74d30c == 0) {
        if (iVar2 == -0x7ffb1ecb) {
          iVar2 = 0x4e130;
        }
        else if (iVar2 < 0) {
          DAT_5f74d334 = 0;
          DAT_5f74d33c = 0;
          DAT_5f74d308 = 0;
          DAT_5f74d338 = 0xffffff3c;
          DAT_5f74d340 = 0xfffffed8;
          return 0;
        }
      }
      else {
        iVar2 = 0;
      }
      if (((DAT_5f74d320 != 0) || (iVar2 == 0x4e12f)) || (piVar1 == (int *)0x0)) {
        iVar2 = -0x7fffbffb;
        DAT_5f74d33c = 0;
        DAT_5f74d340 = (-(uint)(DAT_5f74d310 != 0) & 5) - 0x12a;
      }
      if (((iVar2 < 0) || (DAT_5f74d320 != 0)) &&
         ((DAT_5f74d314 == 0 && (iVar8 = -0x7fffbffb, DAT_5f74d318 == 0)))) {
LAB_5f686fca:
        if (-1 < iVar2) {
          DAT_5f74d308 = 0xffffffff;
          DAT_5f74d334 = 1;
          DAT_5f74d338 = 200;
          return 0;
        }
      }
      else {
        if (piVar1 == (int *)0x0) {
          iVar2 = -0x7fffbffb;
        }
        else {
          iVar2 = FUN_5f7212c0(piVar1,&local_148,&local_164,1);
        }
        iVar8 = iVar2;
        if (DAT_5f74d31c == 0) {
          if ((iVar2 == 0x4e12e) || (iVar2 == 0x4e137)) goto LAB_5f686f5e;
        }
        else if (iVar2 == 0x4e132) {
LAB_5f686f5e:
          if (local_164 == 1) {
            DAT_5f74d33c = 0;
            DAT_5f74d340 = -0x127;
            goto LAB_5f686fca;
          }
        }
        if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
          if (DAT_5f74d33c == 0) goto LAB_5f686fd2;
        }
        else {
          DAT_5f74d33c = 1;
        }
        if ((iVar2 == -0x7ffb1ecb) || (iVar2 == 0x4e130)) {
          DAT_5f74d340 = 0x12d;
        }
        else {
          DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
        }
      }
LAB_5f686fd2:
      local_154[0] = 4;
      uVar3 = FUN_5f722c30(puVar5,(char *)0x0,"3",&local_158,(byte *)&local_15c,local_154);
      goto joined_r0x5f68791e;
    }
    if (DAT_5f74d2fc != (undefined4 *)0x0) {
      FUN_5f71e4d0(DAT_5f74d2fc);
      pvVar4 = GlobalHandle(puVar5);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar5);
      GlobalFree(pvVar4);
      DAT_5f74d2fc = (undefined4 *)0x0;
    }
  }
  DAT_5f74d300 = 1;
  lstrcpynA(&DAT_5f74d344,param_1,0x19);
  DAT_5f74d35c = 0;
  DAT_5f74d30c = FUN_5f7256e0(param_1);
  DAT_5f74d31c = 0;
  lstrcpynA(local_14c,param_1,3);
  local_14a = 0;
  uVar3 = FUN_5f7251b0(local_14c);
  puVar5 = DAT_5f74d2fc;
  iVar2 = 0;
  ppuVar6 = &PTR_DAT_5f73ca20;
  while (uVar3 != *(uint *)*ppuVar6) {
    ppuVar6 = ppuVar6 + 3;
    iVar2 = iVar2 + 1;
    if (0x5f73caeb < (int)ppuVar6) {
      if (DAT_5f74d2fc != (undefined4 *)0x0) {
        FUN_5f71e4d0(DAT_5f74d2fc);
        pvVar4 = GlobalHandle(puVar5);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(puVar5);
        GlobalFree(pvVar4);
        DAT_5f74d2fc = (undefined4 *)0x0;
      }
      DAT_5f74d32c = 0;
      DAT_5f74d334 = 0;
      DAT_5f74d33c = 0;
      DAT_5f74d330 = 0xffffff9d;
      DAT_5f74d338 = 0xffffff39;
      DAT_5f74d340 = 0xfffffed5;
      return 0;
    }
  }
  local_164 = iVar2 * 3;
  piVar1 = (int *)(&PTR_DAT_5f73ca20)[iVar2 * 3];
  puVar5 = FUN_5f687a40(piVar1);
  if (puVar5 == (undefined4 *)0x0) {
    DAT_5f74d2fc = puVar5;
    DAT_5f74d32c = 0;
    DAT_5f74d330 = 0xffffff9d;
    DAT_5f74d334 = 0;
    DAT_5f74d338 = 0xffffff39;
    DAT_5f74d33c = 0;
    DAT_5f74d340 = 0xfffffed5;
    return 0;
  }
  DAT_5f74d310 = (uint)(piVar1[0x13] != 2);
  DAT_5f74d32c = 1;
  DAT_5f74d330 = 100;
  DAT_5f74d2fc = puVar5;
  lstrcpynA((LPSTR)local_120,param_1,0x19);
  local_108 = 0;
  iVar2 = FUN_5f7211c0(puVar5,&local_144,&local_160,local_120,&local_124,&DAT_5f74d314);
  if (DAT_5f74d30c == 0) {
    if (iVar2 == -0x7ffb1ecb) {
      iVar2 = 0x4e130;
    }
    else if (iVar2 == -0x7ffb1eb2) {
      iVar2 = 0x4e136;
    }
  }
  else {
    iVar2 = 0;
    local_160 = param_2;
  }
  FUN_5f7214b0(puVar5,local_160,1);
  if (((-1 < iVar2) && (iVar2 != 0x4e12f)) && (local_160 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(&DAT_5f73ca28 + local_164 * 4)) {
      puVar7 = (uint *)(&PTR_DAT_5f73ca24)[local_164];
LAB_5f687352:
      if (local_160 != *puVar7) goto code_r0x5f687356;
      puVar7 = (uint *)((int)(&PTR_DAT_5f73ca24)[local_164] + iVar2 * 6 * 4);
      puVar9 = local_140;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      DAT_5f74d320 = local_140[2];
      _DAT_5f74d304 = local_12c;
      DAT_5f74d32c = local_140[1];
      DAT_5f74d324 = local_140[3];
      DAT_5f74d328 = local_130;
      DAT_5f74d2fc[0x1f8] = local_160;
      local_15c = 4;
      uVar3 = FUN_5f722c30(DAT_5f74d2fc,(char *)0x0,"15",local_154,(byte *)&local_148,&local_15c);
      if (((int)uVar3 < 0) || (local_154[0] != 4)) {
switchD_5f68741b_default:
        if ((DAT_5f74d324 != 0) && (DAT_5f74d328 != 0)) {
          DAT_5f74d324 = 0;
        }
      }
      else {
        switch(local_148) {
        case 1:
          DAT_5f74d32c = 0;
          DAT_5f74d320 = 1;
          DAT_5f74d324 = 0;
          DAT_5f74d328 = 0;
          break;
        case 2:
          DAT_5f74d324 = 0;
          DAT_5f74d32c = 1;
          DAT_5f74d320 = 1;
          DAT_5f74d328 = 0;
          DAT_5f74d340 = -0x12a;
          break;
        case 3:
          DAT_5f74d320 = 0;
          DAT_5f74d32c = 1;
          DAT_5f74d324 = 1;
          DAT_5f74d328 = 0;
          break;
        case 4:
          DAT_5f74d320 = 0;
          DAT_5f74d32c = 1;
          DAT_5f74d324 = 0;
          DAT_5f74d328 = 1;
          break;
        default:
          goto switchD_5f68741b_default;
        }
      }
      if (DAT_5f74d30c == 0) {
        if (DAT_5f74d314 == 0) {
          if (DAT_5f74d328 != 0) {
            if (*(LPCSTR *)((&PTR_DAT_5f73ca20)[local_164] + 0x5c) == (LPCSTR)0x0) {
              DAT_5f74d328 = 0;
            }
            else {
              lstrcpynA(&DAT_5f74d35d,*(LPCSTR *)((&PTR_DAT_5f73ca20)[local_164] + 0x5c),0x40);
              DAT_5f74d39c = 0;
            }
          }
        }
        else {
          DAT_5f74d324 = 0;
          DAT_5f74d328 = 0;
          DAT_5f74d340 = -0x124;
        }
      }
      else {
        DAT_5f74d324 = 0;
        DAT_5f74d328 = 0;
        DAT_5f74d340 = -0x12a;
      }
      if (DAT_5f74d310 != 0) {
        DAT_5f74d324 = 0;
        DAT_5f74d328 = 0;
        DAT_5f74d340 = -0x125;
      }
      if (DAT_5f74d32c == 0) {
        DAT_5f74d334 = 0;
        DAT_5f74d324 = 0;
        DAT_5f74d328 = 0;
        DAT_5f74d308 = 0;
        DAT_5f74d330 = 0xffffff9e;
        DAT_5f74d338 = 0xffffff3a;
        DAT_5f74d340 = 0xfffffed6;
        return 0;
      }
      if (((DAT_5f74d320 == 0) && (DAT_5f74d2f8 == (int *)0x0)) &&
         (DAT_5f74d2f8 = FUN_5f687a40((int *)&DAT_5f73c090), DAT_5f74d2f8 != (int *)0x0)) {
        DAT_5f74d2f8[0x1fd] = 0x90c;
        iVar2 = FUN_5f721020(DAT_5f74d2f8,(HKEY)0x1,(HKEY)0x1);
        if (iVar2 < 0) {
          while (iVar2 = FUN_5f7212c0(DAT_5f74d2f8,&local_144,(int *)&local_160,1), iVar2 == 0x4e12e
                ) {
            if (local_160 != 1) {
              FUN_5f721140(DAT_5f74d2f8,(uchar *)local_140,0,0);
              FUN_5f7210c0((int)DAT_5f74d2f8);
              FUN_5f720870(DAT_5f74d2f8,(LPCSTR)local_140);
            }
          }
        }
        iVar2 = FUN_5f7212c0(DAT_5f74d2f8,&local_144,(int *)&local_160,1);
        DAT_5f74d318 = FUN_5f71fcc0(DAT_5f74d2f8);
        if (DAT_5f74d318 != 0) {
          FUN_5f724af0((int)DAT_5f74d2f8);
          iVar2 = FUN_5f724bb0(DAT_5f74d2f8,0xf0400000);
          if (iVar2 < 0) {
            DAT_5f74d324 = 0;
            DAT_5f74d328 = 0;
            DAT_5f74d340 = -0x123;
          }
          else {
            GetModuleFileNameA(DAT_5f74d2e8,(LPSTR)local_104,0x104);
            FUN_5f724e00(DAT_5f74d2f8,(BYTE *)"MP3 2.0 Object",local_104);
          }
        }
        if ((iVar2 == 0x4e132) &&
           (iVar2 = FUN_5f720e70(DAT_5f74d2f8,(LPSTR)local_140,0x19), -1 < iVar2)) {
          local_164 = 0;
          local_154[1] = 4;
          uVar3 = FUN_5f722c30(DAT_5f74d2f8,(char *)local_140,"12",&local_158,(byte *)&local_164,
                               local_154 + 1);
          if ((-1 < (int)uVar3) && ((local_158 == 4 && (local_164 != 0)))) {
            DAT_5f74d31c = 1;
          }
        }
      }
      goto LAB_5f687735;
    }
LAB_5f68735e:
    DAT_5f74d320 = 1;
    DAT_5f74d324 = 0;
    DAT_5f74d328 = 0;
    DAT_5f74d340 = -0x12a;
  }
LAB_5f687735:
  puVar5 = DAT_5f74d2fc;
  piVar1 = DAT_5f74d2f8;
  if (DAT_5f74d32c == 0) {
    DAT_5f74d308 = 0;
    return 0;
  }
  if (DAT_5f74d2fc == (undefined4 *)0x0) {
    DAT_5f74d308 = 0;
    DAT_5f74d334 = 0;
    return 0;
  }
  iVar2 = FUN_5f7212c0(DAT_5f74d2fc,(int *)&local_158,&local_164,1);
  if (DAT_5f74d30c == 0) {
    if (iVar2 == -0x7ffb1ecb) {
      iVar2 = 0x4e130;
    }
    else if (iVar2 < 0) {
      DAT_5f74d334 = 0;
      DAT_5f74d33c = 0;
      DAT_5f74d308 = 0;
      DAT_5f74d338 = 0xffffff3c;
      DAT_5f74d340 = 0xfffffed8;
      return 0;
    }
  }
  else {
    iVar2 = 0;
  }
  if (((DAT_5f74d320 != 0) || (iVar2 == 0x4e12f)) || (piVar1 == (int *)0x0)) {
    iVar2 = -0x7fffbffb;
    DAT_5f74d33c = 0;
    DAT_5f74d340 = (-(uint)(DAT_5f74d310 != 0) & 5) - 0x12a;
  }
  if (((iVar2 < 0) || (DAT_5f74d320 != 0)) &&
     ((DAT_5f74d314 == 0 && (iVar8 = -0x7fffbffb, DAT_5f74d318 == 0)))) {
LAB_5f6878f0:
    if (-1 < iVar2) {
      DAT_5f74d308 = 0xffffffff;
      DAT_5f74d334 = 1;
      DAT_5f74d338 = 200;
      return 0;
    }
  }
  else {
    if (piVar1 == (int *)0x0) {
      iVar2 = -0x7fffbffb;
    }
    else {
      iVar2 = FUN_5f7212c0(piVar1,(int *)&local_158,&local_164,1);
    }
    iVar8 = iVar2;
    if (DAT_5f74d31c == 0) {
      if ((iVar2 == 0x4e12e) || (iVar2 == 0x4e137)) goto LAB_5f687884;
    }
    else if (iVar2 == 0x4e132) {
LAB_5f687884:
      if (local_164 == 1) {
        DAT_5f74d33c = 0;
        DAT_5f74d340 = -0x127;
        goto LAB_5f6878f0;
      }
    }
    if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
      if (DAT_5f74d33c == 0) goto LAB_5f6878f8;
    }
    else {
      DAT_5f74d33c = 1;
    }
    if ((iVar2 == -0x7ffb1ecb) || (iVar2 == 0x4e130)) {
      DAT_5f74d340 = 0x12d;
    }
    else {
      DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
    }
  }
LAB_5f6878f8:
  local_154[1] = 4;
  uVar3 = FUN_5f722c30(puVar5,(char *)0x0,"3",local_154,(byte *)&local_15c,local_154 + 1);
joined_r0x5f68791e:
  if ((((-1 < (int)uVar3) && (local_15c != 0)) && (DAT_5f74d314 == 0)) && (DAT_5f74d318 == 0)) {
    DAT_5f74d308 = local_15c;
    DAT_5f74d334 = 1;
    DAT_5f74d338 = 0xc9;
    return 0;
  }
  if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
    DAT_5f74d334 = 0;
    DAT_5f74d308 = 0;
    if (DAT_5f74d340 != -0x124) {
      DAT_5f74d338 = (-(uint)(DAT_5f74d340 != -0x123) & 0xfffffffb) - 0xc1;
      return 0;
    }
    DAT_5f74d338 = 0xffffff3e;
    return 0;
  }
  if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
    DAT_5f74d308 = 0;
    DAT_5f74d334 = 0;
    DAT_5f74d338 = 0xffffff3b;
    return 0;
  }
  DAT_5f74d338 = 0xffffff3b;
  DAT_5f74d334 = 0;
  DAT_5f74d308 = 0;
  if (DAT_5f74d2f8 != (int *)0x0) {
    if (iVar8 == -0x7ffb1ed3) {
      DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
      DAT_5f74d33c = 1;
      return 0;
    }
    if ((iVar8 == -0x7ffb1ecb) || (iVar8 == 0x4e130)) {
      DAT_5f74d33c = 1;
      DAT_5f74d340 = 0x12d;
      return 0;
    }
  }
  DAT_5f74d334 = 0;
  return 0;
code_r0x5f687356:
  iVar2 = iVar2 + 1;
  puVar7 = puVar7 + 6;
  if (*(int *)(&DAT_5f73ca28 + local_164 * 4) <= iVar2) goto LAB_5f68735e;
  goto LAB_5f687352;
}


