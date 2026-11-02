/* Module: vegas30.exe
   Function: FUN_005e6d50
   Address: 005e6d50
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_005e6d50(int param_1,int param_2,int param_3)

{
  LARGE_INTEGER dlibMove;
  LARGE_INTEGER dlibMove_00;
  HRESULT HVar1;
  int iVar2;
  ULARGE_INTEGER *unaff_EBX;
  ULARGE_INTEGER *unaff_ESI;
  int *piVar3;
  IStream *pIVar4;
  ULARGE_INTEGER *unaff_EDI;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  LPCWSTR pWVar8;
  ULARGE_INTEGER *plibNewPosition;
  ULARGE_INTEGER *plibNewPosition_00;
  ULARGE_INTEGER *plibNewPosition_01;
  IStream *pIStack_394;
  undefined1 auStack_38c [4];
  undefined1 local_388 [4];
  int aiStack_384 [8];
  int aiStack_364 [3];
  undefined1 uStack_358;
  CHAR aCStack_264 [259];
  undefined1 uStack_161;
  CHAR aCStack_160 [259];
  undefined1 uStack_5d;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_c;
  ULARGE_INTEGER *pUStack_8;
  
  if ((*(int *)(param_2 + 0x108) == 0) || (*(int *)(param_2 + 0x10c) == 0)) {
    return -0x7fffbffb;
  }
  pIVar4 = *(IStream **)(param_1 + 0x560);
  HVar1 = (*pIVar4->lpVtbl->Seek)(pIVar4,(LARGE_INTEGER)0x100000000,(DWORD)local_388,unaff_EDI);
  if (HVar1 < 0) {
    return HVar1;
  }
  HVar1 = (*pIVar4->lpVtbl->Seek)(pIVar4,(LARGE_INTEGER)0x0,0,unaff_ESI);
  if (HVar1 < 0) {
    return HVar1;
  }
  HVar1 = (*pIVar4->lpVtbl->Read)(pIVar4,aiStack_384,4,(ULONG *)0x0);
  if (HVar1 < 0) {
    return HVar1;
  }
  dlibMove_00.s.HighPart = 0;
  dlibMove_00.s.LowPart = aiStack_384[2];
  HVar1 = (*pIVar4->lpVtbl->Seek)(pIVar4,dlibMove_00,0,unaff_EBX);
  if (HVar1 < 0) {
    return HVar1;
  }
  piVar5 = aiStack_364;
  for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  aiStack_364[2] = *(undefined4 *)(param_2 + 0x104);
  aiStack_364[0] = 5;
  aiStack_364[1] = param_3;
  *(int *)(param_1 + 0x328 + param_3 * 4) = aiStack_364[2];
  iStack_4c = param_3;
  uStack_358 = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  uStack_c = 0xfffffffe;
  pUStack_8 = (ULARGE_INTEGER *)0x0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)&pUStack_8);
  if (HVar1 < 0) {
    return HVar1;
  }
  (**(code **)((pUStack_8->s).LowPart + 0x10))
            ((IStream *)&pUStack_8->s,(undefined4 *)(param_2 + 0x10c),4,(ULONG *)0x0);
  plibNewPosition_01 = *(ULARGE_INTEGER **)(param_2 + 0x10c);
  plibNewPosition_00 = *(ULARGE_INTEGER **)(param_2 + 0x108);
  plibNewPosition = pUStack_8;
  (**(code **)((pUStack_8->s).LowPart + 0x10))();
  if (*(int *)(param_2 + 0x114) == 0) goto LAB_005e720d;
  piVar5 = *(int **)(param_2 + 0x110);
  aiStack_384[0] = *piVar5;
  aiStack_384[1] = piVar5[1];
  aiStack_384[2] = piVar5[2];
  bVar7 = true;
  aiStack_384[3] = piVar5[3];
  iVar2 = 4;
  piVar3 = &DAT_0062acc0;
  piVar6 = aiStack_384;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar3 == *piVar6;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  pIVar4 = pIStack_394;
  if (bVar7) {
    iStack_3c = piVar5[4];
    iStack_38 = piVar5[5];
    iStack_34 = piVar5[6];
    iStack_30 = piVar5[7];
    iStack_4c = piVar5[8];
    iStack_48 = piVar5[9];
    iStack_44 = piVar5[10];
    iStack_40 = piVar5[0xb];
    uStack_2c = 0;
    iStack_28 = piVar5[0x18];
    iStack_24 = piVar5[0x19];
    pWVar8 = (LPCWSTR)(piVar5 + 0x1a);
    if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
      WideCharToMultiByte(0,0,pWVar8,-1,aCStack_264,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x264) {
      aCStack_264[0] = '\0';
    }
    uStack_161 = 0;
    iVar2 = lstrlenA(aCStack_264);
    pWVar8 = (LPCWSTR)((int)piVar5 + iVar2 * 2 + 0x6a);
    if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
      WideCharToMultiByte(0,0,pWVar8,-1,aCStack_160,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x160) {
      aCStack_160[0] = '\0';
    }
    uStack_5d = 0;
    lstrlenA(aCStack_264);
    goto LAB_005e720d;
  }
  iVar2 = 4;
  bVar7 = true;
  piVar3 = &DAT_0062acb0;
  piVar6 = aiStack_384;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar3 == *piVar6;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iStack_3c = piVar5[4];
    iStack_38 = piVar5[5];
    iStack_34 = piVar5[6];
    iStack_30 = piVar5[7];
    iStack_4c = piVar5[8];
    iStack_48 = piVar5[9];
    iStack_44 = piVar5[10];
    iStack_40 = piVar5[0xb];
    uStack_2c = 0;
    iStack_28 = piVar5[0x18];
    iStack_24 = piVar5[0x19];
    pWVar8 = (LPCWSTR)(piVar5 + 0x1a);
    if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
      WideCharToMultiByte(0,0,pWVar8,-1,aCStack_264,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x264) {
      aCStack_264[0] = '\0';
    }
    pWVar8 = (LPCWSTR)(piVar5 + 0x9c);
    if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) goto LAB_005e71ff;
LAB_005e71d6:
    uStack_161 = 0;
    if (&stack0x00000000 != (undefined1 *)0x160) {
      aCStack_160[0] = '\0';
    }
  }
  else {
    iStack_3c = *piVar5;
    iStack_38 = piVar5[1];
    iStack_34 = piVar5[2];
    iStack_30 = piVar5[3];
    iStack_44 = 0;
    iStack_40 = 0x3ff00000;
    iStack_4c = 0;
    iStack_48 = 0x3ff00000;
    uStack_2c = 0;
    iStack_28 = piVar5[0x10];
    pWVar8 = (LPCWSTR)(piVar5 + 0x11);
    iStack_24 = 0;
    if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
      WideCharToMultiByte(0,0,pWVar8,-1,aCStack_264,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x264) {
      aCStack_264[0] = '\0';
    }
    pWVar8 = (LPCWSTR)(piVar5 + 0x93);
    if ((pWVar8 != (LPCWSTR)0x0) && (*pWVar8 == L'\0')) goto LAB_005e71d6;
LAB_005e71ff:
    uStack_161 = 0;
    WideCharToMultiByte(0,0,pWVar8,-1,aCStack_160,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  uStack_5d = 0;
LAB_005e720d:
  HVar1 = FUN_005e8430(pIVar4,0);
  if ((((-1 < HVar1) &&
       (HVar1 = (*pIVar4->lpVtbl->Seek)
                          (pIVar4,(LARGE_INTEGER)0x100000000,(DWORD)auStack_38c,plibNewPosition),
       -1 < HVar1)) &&
      (HVar1 = (*pIVar4->lpVtbl->Seek)(pIVar4,(LARGE_INTEGER)0x0,0,plibNewPosition_00), -1 < HVar1))
     && (HVar1 = (*pIVar4->lpVtbl->Write)(pIVar4,local_388,4,(ULONG *)0x0), -1 < HVar1)) {
    dlibMove.s.HighPart = 0;
    dlibMove.s.LowPart = aiStack_384[1];
    HVar1 = (*pIVar4->lpVtbl->Seek)(pIVar4,dlibMove,0,plibNewPosition_01);
    return HVar1;
  }
  return HVar1;
}


