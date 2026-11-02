/* Module: vegas30.exe
   Function: FUN_005f0a00
   Address: 005f0a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_005f0a00(uchar *param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pMem;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  char **ppcVar5;
  LPCWSTR unaff_EBP;
  int iVar6;
  int *unaff_ESI;
  int *piVar7;
  int local_338;
  undefined4 uStack_334;
  int *local_330;
  char *local_32c [4];
  int local_31c;
  uchar local_318 [247];
  undefined1 uStack_221;
  int iStack_220;
  undefined4 uStack_21c;
  
  *param_2 = 0;
  pvVar1 = GlobalAlloc(0x40,0x4d8);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pMem = (LPCVOID)FUN_005efda0();
  if (pMem == (LPCVOID)0x0) {
    return -0x7ff8fff2;
  }
  piVar7 = &local_31c;
  for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  iVar4 = FUN_005f06b0();
  iVar6 = 0;
  local_32c[0] = "Text Surface";
  local_32c[1] = "{B95592D6-8A2E-11d2-95F4-00C04F8EDC2D}";
  local_32c[2] = "Test Pattern Surface";
  local_32c[3] = "{6D45EE23-8B30-11d2-95F5-00C04F8EDC2D}";
  ppcVar5 = local_32c;
  do {
    iVar3 = lstrcmpiA((LPCSTR)local_318,*ppcVar5);
    if (iVar3 == 0) {
      _mbscpy(local_318,(uchar *)local_32c[iVar6 * 2 + 1]);
      break;
    }
    iVar6 = iVar6 + 1;
    ppcVar5 = ppcVar5 + 2;
  } while (iVar6 < 2);
  if (iVar4 < 0) goto LAB_005f0ad2;
  if (local_31c == 1) {
    iVar4 = FUN_005f5510();
  }
  else {
    if (local_31c != 2) {
      iVar4 = -0x7ff8ffa9;
      goto LAB_005f0ad2;
    }
    iVar4 = FUN_005f99a0();
  }
  if (iVar4 < 0) goto LAB_005f0ad2;
  iVar4 = FUN_005f1800();
  if (iVar4 == -0x7ffb1ff6) {
    _SfGetString_8();
LAB_005f0bc7:
    SfPrintF();
  }
  else {
    if (iVar4 == -0x7ffb1ff5) {
      _SfGetString_8();
      goto LAB_005f0bc7;
    }
    if (iVar4 < 0) {
      _SfGetString_8();
      goto LAB_005f0bc7;
    }
  }
  FUN_005f3030();
  if (-1 < iVar4) {
    if (local_31c == 1) {
      local_338 = 0;
      *(uint *)((int)pMem + 0x134) = *(uint *)((int)pMem + 0x134) | 0x400;
      iVar4 = FUN_005f68f0();
      if (-1 < iVar4) {
        piVar7 = &local_338;
        (**(code **)*local_330)();
        if (unaff_ESI != (int *)0x0) {
          (**(code **)(*unaff_ESI + 0x3c))();
          iVar4 = (**(code **)(*piVar7 + 0x40))(piVar7,(undefined4 *)((int)pMem + 0x4bc));
          (**(code **)(*local_330 + 0x1c))(local_330,&stack0xfffffcb8);
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          StringFromCLSID((IID *)**(undefined4 **)(**(int **)((int)pMem + 0x4bc) + 8),
                          (LPOLESTR *)&stack0xfffffcc0);
          if ((unaff_EBP == (LPCWSTR)0x0) || (*unaff_EBP != L'\0')) {
            WideCharToMultiByte(0,0,unaff_EBP,-1,(LPSTR)(local_32c + 2),0x104,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x324) {
            local_32c[2] = (char *)((uint)local_32c[2] & 0xffffff00);
          }
          uStack_221 = 0;
          CoTaskMemFree(unaff_EBP);
          iStack_220 = local_338;
          uStack_21c = uStack_334;
          FUN_005f0420(local_32c + 1);
        }
        (**(code **)(*unaff_EBX + 8))();
      }
      *param_2 = pMem;
      return iVar4;
    }
    if (local_31c != 2) {
      _mbscpy((uchar *)((int)pMem + 0x170),param_1);
      *param_2 = pMem;
      return iVar4;
    }
    *(uint *)((int)pMem + 0x134) = *(uint *)((int)pMem + 0x134) | 0x800;
    _mbscpy((uchar *)((int)pMem + 0x170),param_1);
    *param_2 = pMem;
    return iVar4;
  }
LAB_005f0ad2:
  FUN_005efea0();
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return iVar4;
}


