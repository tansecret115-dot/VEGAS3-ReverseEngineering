/* Module: mp3plug.dll
   Function: FUN_5f68d0f0
   Address: 5f68d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_5f68d0f0(undefined4 param_1,HWND param_2,int *param_3,int *param_4)

{
  void *this;
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uint uVar5;
  undefined1 *unaff_EBX;
  undefined **unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  bool bVar6;
  char *_Source;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *in_stack_fffffd34;
  undefined **in_stack_fffffd38;
  undefined1 *in_stack_fffffd3c;
  undefined1 *in_stack_fffffd40;
  undefined **in_stack_fffffd44;
  undefined1 *in_stack_fffffd48;
  undefined1 *in_stack_fffffd4c;
  undefined **in_stack_fffffd50;
  undefined1 *in_stack_fffffd54;
  undefined1 *in_stack_fffffd58;
  undefined **in_stack_fffffd5c;
  undefined1 *in_stack_fffffd60;
  uchar auStack_264 [28];
  undefined4 auStack_248 [11];
  HWND pHStack_21c;
  undefined4 uStack_218;
  int iStack_214;
  WCHAR local_208 [259];
  undefined2 uStack_2;
  
  if ((((DAT_5f74d300 == 0) || (DAT_5f74d33c == 0)) || (DAT_5f74d2f8 == (void *)0x0)) ||
     (DAT_5f74d2fc == (void *)0x0)) {
    *param_3 = DAT_5f74d340;
LAB_5f68d920:
    *param_4 = -0x7fffbffb;
    return (undefined1 *)0x0;
  }
  if ((DAT_5f74d314 != 0) || (DAT_5f74d318 != 0)) {
    bVar6 = DAT_5f74d318 != 0;
    FUN_5f69dd80(DAT_5f74d2f4,0x1aa,&stack0xfffffd4c,0x50);
    FUN_5f69dd80(DAT_5f74d2f4,bVar6 + 0xbca,(LPSTR)local_208,0x200);
    FUN_5f6b1e20(param_2,(LPCSTR)local_208,&stack0xfffffd4c,0x30);
    *param_3 = (DAT_5f74d318 != 0) - 0x124;
    goto LAB_5f68d920;
  }
  if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
    *param_3 = -0x12a;
    *param_4 = -0x7fffbffb;
    return (undefined1 *)0x0;
  }
  iVar1 = FUN_5f7212c0(DAT_5f74d2fc,(int *)&stack0xfffffd40,(int *)&stack0xfffffd3c,1);
  if ((iVar1 < 0) || (iVar1 == 0x4e12f)) {
    DAT_5f74d340 = -0x128;
    *param_3 = -0x128;
    *param_4 = -0x7fffbffb;
    return (undefined1 *)0x0;
  }
  iVar2 = FUN_5f7212c0(DAT_5f74d2f8,(int *)&stack0xfffffd40,(int *)&stack0xfffffd3c,1);
  if (iVar2 == -0x7ffb1ed3) {
    puVar8 = (undefined1 *)0x1;
  }
  else {
    if ((iVar2 != -0x7ffb1ecb) && (iVar2 != 0x4e130)) {
      *param_3 = -0x126;
      *param_4 = iVar2;
      return (undefined1 *)0x0;
    }
    puVar8 = (undefined1 *)0x0;
  }
  if ((DAT_5f74d328 == 0) || (DAT_5f74d340 != 0x12e)) {
    if ((DAT_5f74d324 != 0) || (DAT_5f74d340 == 0x12d)) {
      piVar7 = (int *)0x0;
      iVar1 = FUN_5f6b3df0(DAT_5f74d2e8,(uchar *)local_208,0x104);
      if (iVar1 == 0) {
LAB_5f68d4cc:
        iVar1 = -0x7fffbffb;
      }
      else {
        FUN_5f6b3990((BYTE *)local_208,0x104);
        if (s_mp3rw_dll_5f72cacc[0] == '\0') {
          _Source = "sfs4rw.dll";
        }
        else {
          _Source = "mp3rw.dll";
        }
        _mbscat((uchar *)local_208,(uchar *)_Source);
        hModule = LoadLibraryA((LPCSTR)local_208);
        if (hModule == (HMODULE)0x0) goto LAB_5f68d4cc;
        pFVar4 = GetProcAddress(hModule,"SfS4RWCreateInstance");
        if (pFVar4 == (FARPROC)0x0) {
          iVar1 = -0x7fffbffe;
          FreeLibrary(hModule);
          hModule = (HMODULE)0x0;
        }
        else {
          iVar1 = (*pFVar4)(0,&DAT_5f72ca98,&stack0xfffffd2c);
          if (iVar1 < 0) {
            FreeLibrary(hModule);
            hModule = (HMODULE)0x0;
          }
        }
        if (-1 < iVar1) {
          iVar1 = FUN_5f68d940(piVar7);
          if ((-1 < iVar1) && (iVar1 = (**(code **)(*piVar7 + 0x4c))(piVar7,2,0,0x157), -1 < iVar1))
          {
            MultiByteToWideChar(0,1,"Sonic Foundry MP3 Plug-In 2.0",-1,local_208,0x104);
            uStack_2 = 0;
            iVar1 = (**(code **)(*piVar7 + 0x28))(piVar7,local_208);
            if ((-1 < iVar1) &&
               ((iVar1 = FUN_5f68ce70(piVar7,unaff_EDI,unaff_EBP,unaff_EBX,unaff_ESI,
                                      (undefined **)piVar7,puVar8,in_stack_fffffd34,
                                      in_stack_fffffd38,in_stack_fffffd3c,in_stack_fffffd40,
                                      in_stack_fffffd44,in_stack_fffffd48,in_stack_fffffd4c,
                                      in_stack_fffffd50,in_stack_fffffd54,in_stack_fffffd58,
                                      in_stack_fffffd5c,in_stack_fffffd60), -1 < iVar1 &&
                (iVar1 = (**(code **)(*piVar7 + 0x30))(piVar7,0,0), -1 < iVar1)))) {
              if (puVar8 != (undefined1 *)0x0) {
                FUN_5f721140(DAT_5f74d2fc,auStack_264,0,0);
                MultiByteToWideChar(0,1,(LPCSTR)auStack_264,-1,(LPWSTR)&stack0xfffffd4c,0x19);
                iVar1 = (**(code **)(*piVar7 + 0x24))(piVar7,&stack0xfffffd4c);
                if (iVar1 < 0) goto LAB_5f68d4b9;
              }
              puVar3 = auStack_248;
              for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar3 = 0;
                puVar3 = puVar3 + 1;
              }
              uStack_218 = 0xf0400000;
              pHStack_21c = param_2;
              iVar1 = (**(code **)(*piVar7 + 0x34))(piVar7,&stack0xfffffd34,auStack_248);
              if (((-1 < iVar1) && (iStack_214 != 0)) &&
                 ((iVar1 = FUN_5f724af0((int)DAT_5f74d2f8), iVar1 < 0 ||
                  (iVar1 = FUN_5f724bb0(DAT_5f74d2f8,0xf0400000), iVar1 < 0)))) {
                FUN_5f68db50(param_2);
              }
            }
          }
LAB_5f68d4b9:
          (**(code **)(*piVar7 + 8))(piVar7);
          if (hModule != (HMODULE)0x0) {
            FreeLibrary(hModule);
          }
          goto LAB_5f68d522;
        }
      }
      FUN_5f69dd80(DAT_5f74d2f4,0x1aa,&stack0xfffffd4c,0x50);
      FUN_5f69dd80(DAT_5f74d2f4,0xbbf,(LPSTR)local_208,0x200);
      FUN_5f6b1e20(param_2,(LPCSTR)local_208,&stack0xfffffd4c,0x30);
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_5f69c970();
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = FUN_5f69c9d0((int)puVar3);
      if ((-1 < iVar2) && (iVar2 = FUN_5f69cd20((int)puVar3), -1 < iVar2)) {
        FUN_5f69d010(puVar3,param_2,1);
        in_stack_fffffd34 = (undefined1 *)0x1;
      }
      FUN_5f69c9b0(puVar3);
    }
  }
LAB_5f68d522:
  this_00 = DAT_5f74d2fc;
  this = DAT_5f74d2f8;
  if (iVar1 < 0) {
    return (undefined1 *)0x0;
  }
  if (in_stack_fffffd34 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  if (DAT_5f74d32c == 0) {
    DAT_5f74d308 = (undefined **)0x0;
    return (undefined1 *)0x0;
  }
  if (DAT_5f74d2fc == (void *)0x0) {
    DAT_5f74d308 = (undefined **)0x0;
    DAT_5f74d334 = 0;
    return (undefined1 *)0x0;
  }
  iVar1 = FUN_5f7212c0(DAT_5f74d2fc,(int *)&stack0xfffffd2c,(int *)&stack0xfffffd30,1);
  if (DAT_5f74d30c == 0) {
    if (iVar1 == -0x7ffb1ecb) {
      iVar1 = 0x4e130;
    }
    else if (iVar1 < 0) {
      DAT_5f74d334 = 0;
      DAT_5f74d33c = 0;
      DAT_5f74d308 = (undefined **)0x0;
      DAT_5f74d338 = -0xc4;
      DAT_5f74d340 = -0x128;
      return (undefined1 *)0x0;
    }
  }
  else {
    iVar1 = 0;
  }
  if (((DAT_5f74d320 != 0) || (iVar1 == 0x4e12f)) || (this == (void *)0x0)) {
    iVar1 = -0x7fffbffb;
    DAT_5f74d33c = 0;
    DAT_5f74d340 = (-(uint)(DAT_5f74d310 != 0) & 5) - 0x12a;
  }
  if (((iVar1 < 0) || (DAT_5f74d320 != 0)) &&
     ((DAT_5f74d314 == 0 && (iVar2 = -0x7fffbffb, DAT_5f74d318 == 0)))) {
LAB_5f68d703:
    if (-1 < iVar1) {
      DAT_5f74d334 = 1;
      DAT_5f74d308 = (undefined **)0xffffffff;
      DAT_5f74d338 = 200;
      goto LAB_5f68d843;
    }
  }
  else {
    if (this == (void *)0x0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      iVar1 = FUN_5f7212c0(this,(int *)&stack0xfffffd2c,(int *)&stack0xfffffd30,1);
    }
    iVar2 = iVar1;
    if (DAT_5f74d31c == 0) {
      if ((iVar1 == 0x4e12e) || (iVar1 == 0x4e137)) goto LAB_5f68d697;
    }
    else if (iVar1 == 0x4e132) {
LAB_5f68d697:
      if (puVar8 == (undefined1 *)0x1) {
        DAT_5f74d33c = 0;
        DAT_5f74d340 = -0x127;
        goto LAB_5f68d703;
      }
    }
    if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
      if (DAT_5f74d33c == 0) goto LAB_5f68d70b;
    }
    else {
      DAT_5f74d33c = 1;
    }
    if ((iVar1 == -0x7ffb1ecb) || (iVar1 == 0x4e130)) {
      DAT_5f74d340 = 0x12d;
    }
    else {
      DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
    }
  }
LAB_5f68d70b:
  uVar5 = FUN_5f722c30(this_00,(char *)0x0,"3",(LPDWORD)&stack0xfffffd48,&stack0xfffffd44,
                       (LPDWORD)&stack0xfffffd38);
  DAT_5f74d308 = in_stack_fffffd44;
  if (((((int)uVar5 < 0) || (DAT_5f74d308 == (undefined **)0x0)) || (DAT_5f74d314 != 0)) ||
     (DAT_5f74d318 != 0)) {
    DAT_5f74d308 = (undefined **)0x0;
    DAT_5f74d334 = 0;
    if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
      if (DAT_5f74d340 == -0x124) {
        DAT_5f74d338 = -0xc2;
      }
      else {
        DAT_5f74d338 = (-(uint)(DAT_5f74d340 != -0x123) & 0xfffffffb) - 0xc1;
      }
    }
    else {
      DAT_5f74d338 = -0xc5;
      if (((DAT_5f74d324 != 0) || (DAT_5f74d328 != 0)) && (DAT_5f74d2f8 != (void *)0x0)) {
        if (iVar2 == -0x7ffb1ed3) {
          DAT_5f74d33c = 1;
          DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
        }
        else if ((iVar2 == -0x7ffb1ecb) || (iVar2 == 0x4e130)) {
          DAT_5f74d33c = 1;
          DAT_5f74d340 = 0x12d;
        }
      }
    }
  }
  else {
    DAT_5f74d334 = 1;
    DAT_5f74d338 = 0xc9;
  }
LAB_5f68d843:
  if (DAT_5f74d308 == (undefined **)0xffffffff) {
    return in_stack_fffffd34;
  }
  return (undefined1 *)0x0;
}


