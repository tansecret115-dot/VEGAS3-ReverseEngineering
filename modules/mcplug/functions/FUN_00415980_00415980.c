/* Module: mcplug.dll
   Function: FUN_00415980
   Address: 00415980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415980(LPCSTR param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  uchar *puVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint local_168;
  uint local_164;
  DWORD local_160;
  uint local_15c;
  DWORD local_158;
  CHAR local_154 [2];
  undefined1 local_152;
  DWORD local_150;
  int local_14c;
  uint local_148 [4];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uint local_124;
  HKEY__ local_120 [6];
  undefined1 local_108;
  BYTE local_104 [260];
  
  piVar3 = DAT_00487a70;
  if ((param_1 == (LPCSTR)0x0) || (*param_1 == '\0')) {
    if (DAT_00487a70 != (int *)0x0) {
      if (DAT_00487a70 != (int *)0x0) {
        FUN_00467800(DAT_00487a70);
        pvVar4 = GlobalHandle(piVar3);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(piVar3);
        GlobalFree(pvVar4);
      }
      DAT_00487a70 = (int *)0x0;
    }
    puVar2 = DAT_00487a74;
    if (DAT_00487a74 != (undefined4 *)0x0) {
      FUN_00467800(DAT_00487a74);
      pvVar4 = GlobalHandle(puVar2);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar2);
      GlobalFree(pvVar4);
      DAT_00487a74 = (undefined4 *)0x0;
    }
    FUN_004163e0();
    DAT_00487a78 = 1;
    return 0;
  }
  if (DAT_00487a78 != 0) {
    iVar1 = lstrcmpiA(param_1,&DAT_00487b08);
    puVar2 = DAT_00487a74;
    piVar3 = DAT_00487a70;
    if (iVar1 == 0) {
      DAT_00487a78 = 1;
      if ((DAT_00487a74 == (undefined4 *)0x0) ||
         ((DAT_00487a7c == 0 &&
          (iVar1 = FUN_0046a5f0(DAT_00487a74,(int *)&local_168,(int *)&local_164,1), iVar1 < 0)))) {
        iVar1 = 0;
        do {
          puVar2 = &DAT_00487acc;
          if (iVar1 == 0) {
            puVar2 = &DAT_00487a94;
          }
          iVar1 = iVar1 + 1;
          puVar2[2] = 0;
          puVar2[0xc] = 0;
          puVar2[3] = 0xffffff3c;
          puVar2[6] = 0;
          puVar2[0xd] = 0;
          puVar2[7] = 0xffffff3c;
          puVar2[8] = 0;
          puVar2[9] = 0xfffffed8;
        } while (iVar1 < 2);
        DAT_00487b04 = 0;
        return 0;
      }
      if (piVar3 == (int *)0x0) {
        iVar1 = -0x7fffbffb;
        local_164 = 0;
      }
      else {
        FUN_0046a350(piVar3,(HKEY)0x2,(HKEY)0x0);
        iVar1 = FUN_0046a5f0(piVar3,(int *)&local_168,(int *)&local_164,1);
        if ((local_164 != 4) && (local_164 != 0x10)) {
          iVar1 = -0x7fffbffb;
          local_164 = 0;
        }
      }
      if ((DAT_00487a90 == 0) && (iVar1 != 0x4e12e)) {
        if (iVar1 != 0x4e130) {
          if (iVar1 != 0x4e137) {
            local_164 = 0;
            goto LAB_00415b1a;
          }
          goto LAB_00415abb;
        }
      }
      else {
LAB_00415abb:
        if (-1 < iVar1) {
          iVar10 = 0;
          iVar1 = 2 - (uint)(local_164 < 0x10);
          if (0 < iVar1) {
            do {
              piVar3 = &DAT_00487acc;
              if (iVar10 == 0) {
                piVar3 = &DAT_00487a94;
              }
              piVar3[8] = 0;
              piVar3[9] = -0x127;
              if (*piVar3 != 0) {
                piVar3[0xc] = -1;
                piVar3[2] = 1;
                piVar3[3] = 200;
              }
              if (piVar3[4] != 0) {
                piVar3[0xd] = -1;
                piVar3[6] = 1;
                piVar3[7] = 200;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar1);
          }
        }
      }
      if (0xf < local_164) {
        DAT_00487b04 = local_164;
        return 0;
      }
LAB_00415b1a:
      iVar10 = 0;
      iVar1 = 2 - (uint)(local_164 != 0);
      if (0 < iVar1) {
        do {
          piVar3 = &DAT_00487a94;
          if (iVar10 == 0) {
            piVar3 = &DAT_00487acc;
          }
          piVar3[2] = 0;
          piVar3[0xc] = 0;
          if ((*piVar3 == 0) || (piVar3[8] == 0)) {
            piVar3[3] = -0xc6;
          }
          else {
            piVar3[3] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
          }
          piVar3[6] = 0;
          piVar3[0xd] = 0;
          if ((piVar3[4] == 0) || (piVar3[8] == 0)) {
            piVar3[7] = -0xc6;
          }
          else {
            piVar3[7] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
      }
      DAT_00487b04 = local_164;
      return 0;
    }
    if (DAT_00487a74 != (undefined4 *)0x0) {
      FUN_00467800(DAT_00487a74);
      pvVar4 = GlobalHandle(puVar2);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(puVar2);
      GlobalFree(pvVar4);
      DAT_00487a74 = (undefined4 *)0x0;
    }
    piVar3 = DAT_00487a70;
    if (DAT_00487a70 != (int *)0x0) {
      FUN_00467800(DAT_00487a70);
      pvVar4 = GlobalHandle(piVar3);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(piVar3);
      GlobalFree(pvVar4);
      DAT_00487a70 = (int *)0x0;
    }
  }
  DAT_00487a78 = 1;
  lstrcpynA(&DAT_00487b08,param_1,0x19);
  DAT_00487b20 = 0;
  DAT_00487a7c = FUN_0046ea10(param_1);
  DAT_00487a90 = 0;
  lstrcpynA(local_154,param_1,3);
  local_152 = 0;
  uVar5 = FUN_0046e4e0(local_154);
  puVar2 = DAT_00487a74;
  iVar1 = 0;
  ppuVar8 = &PTR_DAT_004866b0;
  while (uVar5 != *(uint *)*ppuVar8) {
    ppuVar8 = ppuVar8 + 3;
    iVar1 = iVar1 + 1;
    if (0x4866df < (int)ppuVar8) {
      if (DAT_00487a74 != (undefined4 *)0x0) {
        FUN_00467800(DAT_00487a74);
        pvVar4 = GlobalHandle(puVar2);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(puVar2);
        GlobalFree(pvVar4);
        DAT_00487a74 = (undefined4 *)0x0;
      }
      FUN_004163e0();
      return 0;
    }
  }
  local_168 = iVar1 * 3;
  piVar3 = (int *)(&PTR_DAT_004866b0)[iVar1 * 3];
  puVar2 = FUN_00416350(piVar3);
  DAT_00487a74 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004163e0();
    return 0;
  }
  DAT_00487a80 = (uint)(piVar3[0x13] != 2);
  lstrcpynA((LPSTR)local_120,param_1,0x19);
  local_108 = 0;
  iVar1 = FUN_0046a4f0(puVar2,&local_14c,&local_15c,local_120,&local_124,&DAT_00487a88);
  if (DAT_00487a7c == 0) {
    if (iVar1 == -0x7ffb1eb2) {
      iVar1 = 0x4e136;
    }
  }
  else {
    iVar1 = 0;
    local_15c = param_2;
  }
  FUN_0046a7e0(puVar2,local_15c,local_15c);
  if (((-1 < iVar1) && (iVar1 != 0x4e12f)) && (local_15c != 0)) {
    iVar1 = 0;
    if (0 < *(int *)(&DAT_004866b8 + local_168 * 4)) {
      puVar9 = (uint *)(&PTR_DAT_004866b4)[local_168];
LAB_00415d99:
      if (local_15c != *puVar9) goto code_r0x00415d9d;
      local_164 = 0;
      puVar9 = (uint *)((int)(&PTR_DAT_004866b4)[local_168] + iVar1 * 9 * 4);
      puVar11 = local_148;
      for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      DAT_00487a94 = local_148[1];
      DAT_00487aa4 = local_148[2];
      DAT_00487abc = local_148[3];
      DAT_00487ac0 = local_138;
      DAT_00487acc = local_134;
      DAT_00487adc = local_130;
      DAT_00487af4 = local_12c;
      DAT_00487af8 = local_128;
      DAT_00487a74[0x1f8] = local_15c;
      do {
        if (local_164 == 0) {
          piVar3 = &DAT_00487a94;
          puVar6 = "17";
        }
        else {
          piVar3 = &DAT_00487acc;
          puVar6 = "18";
        }
        local_150 = 4;
        uVar5 = FUN_0046bf60(DAT_00487a74,(char *)0x0,puVar6,&local_158,(byte *)&local_160,
                             &local_150);
        if (((-1 < (int)uVar5) && (local_158 == 4)) && (local_160 - 1 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x00415e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&switchD_00415e78::switchdataD_00416334)[local_160 - 1])();
          return uVar7;
        }
        if ((piVar3[10] == 0) || (piVar3[10] == 1)) {
          piVar3[8] = 0;
        }
        else {
          piVar3[8] = 1;
        }
        if (*piVar3 == 0) {
          piVar3[1] = -0x62;
          piVar3[2] = 0;
          piVar3[3] = -0xc6;
        }
        else {
          piVar3[1] = 100;
        }
        if (piVar3[4] == 0) {
          piVar3[5] = -0x62;
          piVar3[6] = 0;
          piVar3[7] = -0xc6;
        }
        else {
          piVar3[5] = 100;
        }
        if (DAT_00487a7c != 0) {
          piVar3[8] = 0;
          piVar3[10] = 0;
          piVar3[9] = -0x12a;
        }
        if (DAT_00487a80 != 0) {
          piVar3[8] = 0;
          piVar3[10] = 0;
          piVar3[9] = -0x125;
        }
        if (piVar3[10] == 3) {
          if (*(LPCSTR *)((&PTR_DAT_004866b0)[local_168] + 0x5c) == (LPCSTR)0x0) {
            DAT_00487b21 = 0;
          }
          else {
            lstrcpynA(&DAT_00487b21,*(LPCSTR *)((&PTR_DAT_004866b0)[local_168] + 0x5c),0x40);
            DAT_00487b60 = 0;
          }
        }
        iVar1 = piVar3[10];
        if (piVar3[8] == 0) {
          if (iVar1 == 1) {
            piVar3[9] = -0x12a;
          }
        }
        else if (iVar1 == 2) {
          piVar3[9] = 300;
        }
        else if (iVar1 == 3) {
          piVar3[9] = 0x12e;
        }
        local_164 = local_164 + 1;
      } while ((int)local_164 < 2);
      goto LAB_00415f95;
    }
LAB_00415da5:
    FUN_00416440();
LAB_00415f95:
    if ((DAT_00487a70 == (int *)0x0) &&
       (DAT_00487a70 = FUN_00416350((int *)&DAT_00486348), DAT_00487a70 != (int *)0x0)) {
      DAT_00487a70[0x1fd] = 0x90e;
      iVar1 = FUN_0046a350(DAT_00487a70,(HKEY)0x2,(HKEY)0x0);
      if (-1 < iVar1) {
        iVar1 = FUN_0046a5f0(DAT_00487a70,&local_14c,(int *)&local_15c,1);
      }
      DAT_00487a8c = FUN_00468ff0(DAT_00487a70);
      if ((DAT_00487a8c != 0) || (DAT_00487a88 != 0)) {
        FUN_0046de20((int)DAT_00487a70);
        iVar1 = FUN_0046dee0(DAT_00487a70,0xf0400000);
        if (iVar1 < 0) {
          FUN_004164a0();
        }
        else {
          GetModuleFileNameA(DAT_00487a68,(LPSTR)local_104,0x104);
          FUN_0046e130(DAT_00487a70,(BYTE *)"MPEG 1.1 Object",local_104);
        }
      }
      if ((iVar1 == 0x4e132) &&
         (iVar1 = FUN_0046a1a0(DAT_00487a70,(LPSTR)local_148,0x19), -1 < iVar1)) {
        local_168 = 0;
        local_160 = 4;
        uVar5 = FUN_0046bf60(DAT_00487a70,(char *)local_148,"12",&local_158,(byte *)&local_168,
                             &local_160);
        if ((-1 < (int)uVar5) && ((local_158 == 4 && (local_168 != 0)))) {
          DAT_00487a90 = 1;
        }
      }
    }
  }
  piVar3 = DAT_00487a70;
  DAT_00487a78 = 1;
  if ((DAT_00487a74 == (undefined4 *)0x0) ||
     ((DAT_00487a7c == 0 &&
      (iVar1 = FUN_0046a5f0(DAT_00487a74,(int *)&local_160,(int *)&local_168,1), iVar1 < 0)))) {
    iVar1 = 0;
    do {
      puVar2 = &DAT_00487acc;
      if (iVar1 == 0) {
        puVar2 = &DAT_00487a94;
      }
      iVar1 = iVar1 + 1;
      puVar2[2] = 0;
      puVar2[0xc] = 0;
      puVar2[3] = 0xffffff3c;
      puVar2[6] = 0;
      puVar2[0xd] = 0;
      puVar2[7] = 0xffffff3c;
      puVar2[8] = 0;
      puVar2[9] = 0xfffffed8;
    } while (iVar1 < 2);
    DAT_00487b04 = 0;
    return 0;
  }
  if (piVar3 == (int *)0x0) {
    local_168 = 0;
    iVar1 = -0x7fffbffb;
  }
  else {
    FUN_0046a350(piVar3,(HKEY)0x2,(HKEY)0x0);
    iVar1 = FUN_0046a5f0(piVar3,(int *)&local_160,(int *)&local_168,1);
    if ((local_168 != 4) && (local_168 != 0x10)) {
      local_168 = 0;
      iVar1 = -0x7fffbffb;
    }
  }
  if ((DAT_00487a90 == 0) && (iVar1 != 0x4e12e)) {
    if (iVar1 != 0x4e130) {
      if (iVar1 != 0x4e137) {
        local_168 = 0;
        goto LAB_0041621b;
      }
      goto LAB_004161af;
    }
  }
  else {
LAB_004161af:
    if (-1 < iVar1) {
      iVar10 = 0;
      iVar1 = 2 - (uint)(local_168 < 0x10);
      if (0 < iVar1) {
        do {
          piVar3 = &DAT_00487acc;
          if (iVar10 == 0) {
            piVar3 = &DAT_00487a94;
          }
          piVar3[8] = 0;
          piVar3[9] = -0x127;
          if (*piVar3 != 0) {
            piVar3[0xc] = -1;
            piVar3[2] = 1;
            piVar3[3] = 200;
          }
          if (piVar3[4] != 0) {
            piVar3[0xd] = -1;
            piVar3[6] = 1;
            piVar3[7] = 200;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
      }
    }
  }
  if (0xf < local_168) {
    DAT_00487b04 = local_168;
    return 0;
  }
LAB_0041621b:
  iVar10 = 0;
  iVar1 = 2 - (uint)(local_168 != 0);
  if (0 < iVar1) {
    do {
      piVar3 = &DAT_00487a94;
      if (iVar10 == 0) {
        piVar3 = &DAT_00487acc;
      }
      piVar3[2] = 0;
      piVar3[0xc] = 0;
      if ((*piVar3 == 0) || (piVar3[8] == 0)) {
        piVar3[3] = -0xc6;
      }
      else {
        piVar3[3] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
      }
      piVar3[6] = 0;
      piVar3[0xd] = 0;
      if ((piVar3[4] == 0) || (piVar3[8] == 0)) {
        piVar3[7] = -0xc6;
      }
      else {
        piVar3[7] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar1);
  }
  DAT_00487b04 = local_168;
  return 0;
code_r0x00415d9d:
  iVar1 = iVar1 + 1;
  puVar9 = puVar9 + 9;
  if (*(int *)(&DAT_004866b8 + local_168 * 4) <= iVar1) goto LAB_00415da5;
  goto LAB_00415d99;
}


