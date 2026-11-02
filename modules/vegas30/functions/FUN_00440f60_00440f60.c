/* Module: vegas30.exe
   Function: FUN_00440f60
   Address: 00440f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00440f60(undefined4 param_1)

{
  code *lpBuffer;
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  int *unaff_EBX;
  int *unaff_ESI;
  int *piVar7;
  undefined8 uVar8;
  int *piStack_78;
  undefined8 uStack_74;
  char *pcStack_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  code *pcStack_48;
  int *piStack_44;
  LPCSTR pCStack_40;
  LPVOID pvStack_3c;
  undefined4 uStack_38;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uStack_38 = param_1;
  pvStack_3c = (LPVOID)0x440f71;
  uVar8 = FUN_005b8d80();
  local_14 = 1;
  local_12 = 2;
  local_10 = 0xac44;
  local_6 = 0x10;
  local_8 = 4;
  local_c = 0x2b110;
  local_4 = 0;
  uStack_38 = 0x440fcb;
  piVar1 = (int *)ftol();
  uStack_38 = 0;
  pvStack_3c = (LPVOID)0x0;
  piStack_44 = (int *)&local_14;
  pCStack_40 = &DAT_0064b15c;
  pcStack_48 = FUN_005895a0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0x10000003;
  puStack_64 = &param_1;
  uStack_60 = 0xffffffff;
  piStack_68 = DAT_0064b144;
  pcStack_6c = (char *)0x441004;
  uStack_50 = uVar8;
  iVar2 = (**(code **)(*DAT_0064b144 + 0x1c8))();
  if (-1 < iVar2) {
    pcStack_6c = (char *)0xffffffff;
    piStack_78 = (int *)0x0;
    uStack_74 = uVar8;
    iVar2 = FUN_005fcf70();
    piVar7 = (int *)0x0;
    if (iVar2 < 0) {
      uStack_74._4_4_ = 0x441031;
      (**(code **)(*unaff_ESI + 8))();
    }
    pcStack_6c = "Prerendering to temporary file";
    uStack_74._0_4_ = 0x441044;
    (**(code **)(*unaff_EBX + 0x10))();
    uStack_74._0_4_ = 0;
    piStack_78 = piVar1;
    (**(code **)(*unaff_EBX + 0x14))();
    pCStack_40 = CreateFileA(pCStack_40,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (pCStack_40 == (HANDLE)0xffffffff) {
      iVar2 = -0x7ffb1ffa;
    }
    pvVar3 = GlobalAlloc(2,(int)(int *)uStack_50 << 0x12);
    pvStack_3c = GlobalLock(pvVar3);
    if (pvStack_3c == (LPVOID)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    else {
      do {
        if ((iVar2 < 0) || (piVar1 <= piVar7)) goto LAB_0044113f;
        (**(code **)(*unaff_EBX + 0x18))();
        lpBuffer = pcStack_48;
        uVar4 = (int)piVar1 - (int)piVar7;
        if (0x3ffff < uVar4) {
          uVar4 = 0x40000;
        }
        iVar2 = (**(code **)(*(int *)uStack_50 + 0x3c))
                          ((int *)uStack_50,piVar7,0,pcStack_48,uVar4,&piStack_78);
        if (-1 < iVar2) {
          piVar7 = (int *)((int)piVar7 + uVar4);
          BVar5 = WriteFile(puStack_64,lpBuffer,((uint)uStack_74 & 0xffff) * uVar4,
                            (LPDWORD)&stack0xffffff78,(LPOVERLAPPED)0x0);
          if (BVar5 == 0) {
            iVar2 = -0x7ffb1ff7;
          }
        }
        FUN_00440ef0();
        iVar6 = (**(code **)(*unaff_EBX + 0x24))(unaff_EBX);
        piVar1 = piStack_68;
      } while (iVar6 == 0);
      iVar2 = -0x7ffb1ff4;
    }
LAB_0044113f:
    if (piStack_44 != (int *)0x0) {
      Mixer_StopRender(0xffffffff);
      (**(code **)(*piStack_44 + 8))();
      piStack_44 = (int *)0x0;
    }
    if (pCStack_40 != (HANDLE)0xffffffff) {
      CloseHandle(pCStack_40);
    }
    if (pvStack_3c != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvStack_3c);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvStack_3c);
      GlobalFree(pvVar3);
    }
  }
  return iVar2;
}


