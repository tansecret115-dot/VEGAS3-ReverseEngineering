/* Module: mcplug.dll
   Function: FUN_004167c0
   Address: 004167c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined **
FUN_004167c0(undefined4 param_1,HWND param_2,int *param_3,int *param_4,undefined4 param_5,
            undefined1 *param_6)

{
  void *this;
  int iVar1;
  int iVar2;
  FARPROC pFVar3;
  int *piVar4;
  undefined **unaff_EBX;
  undefined1 *unaff_EBP;
  undefined1 *unaff_ESI;
  undefined **unaff_EDI;
  undefined4 *puVar5;
  bool bVar6;
  char *_Source;
  HMODULE in_stack_fffffd38;
  HMODULE pHVar7;
  undefined **ppuVar8;
  HMODULE pHVar9;
  undefined1 *in_stack_fffffd44;
  undefined **in_stack_fffffd48;
  undefined1 *in_stack_fffffd4c;
  undefined1 *in_stack_fffffd50;
  undefined **in_stack_fffffd54;
  undefined1 *in_stack_fffffd58;
  undefined1 *in_stack_fffffd5c;
  undefined **in_stack_fffffd60;
  undefined1 *in_stack_fffffd64;
  int iStack_280;
  WCHAR local_274 [24];
  undefined2 uStack_244;
  uchar auStack_224 [28];
  WCHAR local_208 [259];
  undefined2 uStack_2;
  
  puVar5 = (undefined4 *)0x0;
  ppuVar8 = (undefined **)0x0;
  pHVar9 = (HMODULE)0x0;
  if (param_6 == (undefined1 *)0x1) {
    puVar5 = &DAT_00487a94;
    pHVar9 = (HMODULE)0x4;
  }
  else if (param_6 == (undefined1 *)0x2) {
    puVar5 = &DAT_00487acc;
    pHVar9 = (HMODULE)0x10;
  }
  if ((((DAT_00487a78 == 0) || (puVar5 == (undefined4 *)0x0)) || (DAT_00487a70 == (void *)0x0)) ||
     (DAT_00487a74 == (void *)0x0)) {
    *param_3 = -300;
LAB_00416f2d:
    *param_4 = -0x7fffbffb;
    return (undefined **)0x0;
  }
  if (puVar5[8] == 0) {
    *param_3 = puVar5[9];
    goto LAB_00416f2d;
  }
  if ((DAT_00487a80 != 0) && (DAT_00487a84 == 0)) {
    *param_3 = -0x125;
    *param_4 = -0x7fffbffb;
    return (undefined **)0x0;
  }
  if ((DAT_00487a88 != 0) || (DAT_00487a8c != 0)) {
    bVar6 = DAT_00487a8c != 0;
    FUN_00418fa0(DAT_00487a6c,0x1aa,(LPSTR)local_274,0x50);
    FUN_00418fa0(DAT_00487a6c,0x1b5f - bVar6,(LPSTR)local_208,0x200);
    FUN_00420130(param_2,(LPCSTR)local_208,(LPCSTR)local_274,0x30);
    *param_3 = (DAT_00487a8c != 0) - 0x124;
    *param_4 = -0x7fffbffb;
    return (undefined **)0x0;
  }
  if (((int)puVar5[10] < 2) || (3 < (int)puVar5[10])) {
    *param_3 = -0x12a;
    goto LAB_00416f2d;
  }
  iVar1 = FUN_0046a5f0(DAT_00487a74,(int *)&stack0xfffffd48,(int *)&stack0xfffffd44,1);
  if ((iVar1 < 0) || (iVar1 == 0x4e12f)) {
    puVar5[9] = 0xfffffed8;
    *param_3 = -0x128;
    *param_4 = -0x7fffbffb;
    return (undefined **)0x0;
  }
  iVar2 = FUN_0046a5f0(DAT_00487a70,(int *)&stack0xfffffd48,(int *)&stack0xfffffd44,1);
  if ((param_6 == (undefined1 *)0x2) &&
     (((-1 < iVar2 || (iVar1 == -0x7ffb1ecb)) && (in_stack_fffffd44 < (undefined1 *)0x10)))) {
    in_stack_fffffd44 = (undefined1 *)0x0;
LAB_00416909:
    bVar6 = true;
  }
  else {
    if (iVar2 == -0x7ffb1ed3) goto LAB_00416909;
    if ((iVar2 != -0x7ffb1ecb) && (iVar2 != 0x4e130)) {
      *param_3 = -0x126;
      *param_4 = iVar2;
      return (undefined **)0x0;
    }
    bVar6 = false;
  }
  if (puVar5[10] == 3) {
    puVar5 = (undefined4 *)FUN_004172e0();
    if (puVar5 != (undefined4 *)0x0) {
      iVar2 = FUN_00417340((int)puVar5);
      if ((-1 < iVar2) && (iVar2 = FUN_00417690((int)puVar5), -1 < iVar2)) {
        FUN_00417980(puVar5,param_2,1);
        ppuVar8 = (undefined **)0x1;
      }
      FUN_00417320(puVar5);
    }
  }
  else {
    piVar4 = (int *)0x0;
    pHVar7 = (HMODULE)0x0;
    iVar1 = FUN_0042e390(DAT_00487a68,(uchar *)local_208,0x104);
    if (iVar1 == 0) {
LAB_00416bf8:
      in_stack_fffffd38 = pHVar7;
      iVar1 = -0x7fffbffb;
    }
    else {
      FUN_0042df30((BYTE *)local_208,0x104);
      if (s_mcplugrw_dll_004771d0[0] == '\0') {
        _Source = "sfs4rw.dll";
      }
      else {
        _Source = "mcplugrw.dll";
      }
      _mbscat((uchar *)local_208,(uchar *)_Source);
      in_stack_fffffd38 = LoadLibraryA((LPCSTR)local_208);
      if (in_stack_fffffd38 == (HMODULE)0x0) goto LAB_00416bf8;
      pFVar3 = GetProcAddress(in_stack_fffffd38,"SfS4RWCreateInstance");
      if (pFVar3 == (FARPROC)0x0) {
        iVar1 = -0x7fffbffe;
        FreeLibrary(in_stack_fffffd38);
        in_stack_fffffd38 = pHVar7;
      }
      else {
        iVar1 = (*pFVar3)(0,&DAT_00477170,&stack0xfffffd34);
        if (iVar1 < 0) {
          FreeLibrary(in_stack_fffffd38);
          in_stack_fffffd38 = pHVar7;
        }
      }
      if (-1 < iVar1) {
        iVar1 = FUN_00416f50(piVar4);
        if ((-1 < iVar1) && (iVar1 = (**(code **)(*piVar4 + 0x4c))(piVar4,1,0,0xd), -1 < iVar1)) {
          MultiByteToWideChar(0,1,"Sonic Foundry MainConcept MPEG Plug-In 1.0",-1,local_208,0x104);
          uStack_2 = 0;
          iVar1 = (**(code **)(*piVar4 + 0x28))(piVar4,local_208);
          if ((-1 < iVar1) &&
             ((iVar1 = FUN_004164d0(piVar4,param_6,unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX,
                                    (undefined1 *)piVar4,(undefined1 *)in_stack_fffffd38,ppuVar8,
                                    (undefined1 *)pHVar9,in_stack_fffffd44,in_stack_fffffd48,
                                    in_stack_fffffd4c,in_stack_fffffd50,in_stack_fffffd54,
                                    in_stack_fffffd58,in_stack_fffffd5c,in_stack_fffffd60,
                                    in_stack_fffffd64), -1 < iVar1 &&
              (iVar1 = (**(code **)(*piVar4 + 0x30))(piVar4,0,0), -1 < iVar1)))) {
            if (bVar6) {
              FUN_0046a470(DAT_00487a74,auStack_224,0,0);
              MultiByteToWideChar(0,1,(LPCSTR)auStack_224,-1,local_274,0x19);
              uStack_244 = 0;
              iVar1 = (**(code **)(*piVar4 + 0x24))(piVar4,local_274);
              if (iVar1 < 0) goto LAB_00416bdd;
            }
            puVar5 = (undefined4 *)&stack0xfffffd4c;
            for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            FUN_00416790((int)param_6);
            iVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,&stack0xfffffd3c,&stack0xfffffd4c);
            if (((-1 < iVar1) && (iStack_280 != 0)) &&
               ((iVar1 = FUN_0046de20((int)DAT_00487a70), iVar1 < 0 ||
                (iVar1 = FUN_0046dee0(DAT_00487a70,0xf0400000), iVar1 < 0)))) {
              FUN_00417160(param_2);
            }
          }
        }
LAB_00416bdd:
        (**(code **)(*piVar4 + 8))(piVar4);
        if (in_stack_fffffd38 != (HMODULE)0x0) {
          FreeLibrary(in_stack_fffffd38);
        }
        goto LAB_00416c4e;
      }
    }
    FUN_00418fa0(DAT_00487a6c,0x1aa,(LPSTR)local_274,0x50);
    FUN_00418fa0(DAT_00487a6c,0x1b60,(LPSTR)local_208,0x200);
    FUN_00420130(param_2,(LPCSTR)local_208,(LPCSTR)local_274,0x30);
  }
LAB_00416c4e:
  this = DAT_00487a70;
  if (iVar1 < 0) {
    return (undefined **)0x0;
  }
  if (ppuVar8 == (undefined **)0x0) {
    return (undefined **)0x0;
  }
  DAT_00487a78 = 1;
  if ((DAT_00487a74 == (void *)0x0) ||
     ((DAT_00487a7c == 0 &&
      (iVar1 = FUN_0046a5f0(DAT_00487a74,(int *)&stack0xfffffd34,(int *)&stack0xfffffd38,1),
      iVar1 < 0)))) {
    iVar1 = 0;
    do {
      puVar5 = &DAT_00487acc;
      if (iVar1 == 0) {
        puVar5 = &DAT_00487a94;
      }
      iVar1 = iVar1 + 1;
      puVar5[2] = 0;
      puVar5[0xc] = 0;
      puVar5[3] = 0xffffff3c;
      puVar5[6] = 0;
      puVar5[0xd] = 0;
      puVar5[7] = 0xffffff3c;
      puVar5[8] = 0;
      puVar5[9] = 0xfffffed8;
    } while (iVar1 < 2);
    DAT_00487b04 = (HMODULE)0x0;
    goto LAB_00416e36;
  }
  if (this == (void *)0x0) {
    iVar1 = -0x7fffbffb;
    DAT_00487b04 = (HMODULE)0x0;
  }
  else {
    FUN_0046a350(this,(HKEY)0x2,(HKEY)0x0);
    iVar1 = FUN_0046a5f0(this,(int *)&stack0xfffffd34,(int *)&stack0xfffffd38,1);
    DAT_00487b04 = in_stack_fffffd38;
    if ((DAT_00487b04 != (HMODULE)0x4) && (DAT_00487b04 != (HMODULE)0x10)) {
      DAT_00487b04 = (HMODULE)0x0;
      iVar1 = -0x7fffbffb;
    }
  }
  if ((DAT_00487a90 == 0) && (iVar1 != 0x4e12e)) {
    if (iVar1 == 0x4e130) goto LAB_00416da1;
    if (iVar1 == 0x4e137) goto LAB_00416d41;
    DAT_00487b04 = (HMODULE)0x0;
  }
  else {
LAB_00416d41:
    if (-1 < iVar1) {
      iVar2 = 0;
      iVar1 = 2 - (uint)(DAT_00487b04 < (HMODULE)0x10);
      if (0 < iVar1) {
        do {
          piVar4 = &DAT_00487acc;
          if (iVar2 == 0) {
            piVar4 = &DAT_00487a94;
          }
          piVar4[8] = 0;
          piVar4[9] = -0x127;
          if (*piVar4 != 0) {
            piVar4[0xc] = -1;
            piVar4[2] = 1;
            piVar4[3] = 200;
          }
          if (piVar4[4] != 0) {
            piVar4[0xd] = -1;
            piVar4[6] = 1;
            piVar4[7] = 200;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
    }
LAB_00416da1:
    if ((HMODULE)0xf < DAT_00487b04) goto LAB_00416e36;
  }
  iVar2 = 0;
  iVar1 = 2 - (uint)(DAT_00487b04 != (HMODULE)0x0);
  if (0 < iVar1) {
    do {
      piVar4 = &DAT_00487a94;
      if (iVar2 == 0) {
        piVar4 = &DAT_00487acc;
      }
      piVar4[2] = 0;
      piVar4[0xc] = 0;
      if ((*piVar4 == 0) || (piVar4[8] == 0)) {
        piVar4[3] = -0xc6;
      }
      else {
        piVar4[3] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
      }
      piVar4[6] = 0;
      piVar4[0xd] = 0;
      if ((piVar4[4] == 0) || (piVar4[8] == 0)) {
        piVar4[7] = -0xc6;
      }
      else {
        piVar4[7] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
LAB_00416e36:
  if ((pHVar9 <= DAT_00487b04) && (DAT_00487b04 != (HMODULE)0x0)) {
    return ppuVar8;
  }
  return (undefined **)0x0;
}


