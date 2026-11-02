/* Module: sftrans1.dll
   Function: FUN_00405cf0
   Address: 00405cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00405cf0(undefined4 param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  char local_114 [4];
  char local_110 [4];
  char local_10c [4];
  char local_108;
  undefined1 local_104;
  undefined4 local_103;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      if (DAT_0057724c != (HMODULE)0x0) {
        FreeLibrary(DAT_0057724c);
      }
      pMem = DAT_0057b834;
      if (DAT_0057b834 != (LPCVOID)0x0) {
        FUN_0052f8a0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
      }
      puVar3 = DAT_00622478;
      if (DAT_00622478 != (undefined4 *)0x0) {
        FUN_00546c90();
        (**(code **)*puVar3)(1);
      }
      FUN_004c5120(param_1);
    }
    return 1;
  }
  FUN_004c5060(param_1);
  DAT_0057b834 = (LPCVOID)FUN_00405960();
  _DAT_00577244 = 0;
  DAT_00577248 = DAT_0057b888;
  DAT_0057724c = (HMODULE)0x0;
  local_104 = 0;
  puVar3 = &local_103;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  DAT_00577240 = param_1;
  DAT_00577238 = param_1;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_004c55a0(0,param_1,&local_104,0x104);
  FUN_004c55e0(0,&local_104);
  FUN_004c55a0(1,DAT_00577238,&local_104,0x104);
  FUN_004c55e0(1,&local_104);
  local_110[0] = s_RICHED20_DLL_0055561c[4];
  local_110[1] = s_RICHED20_DLL_0055561c[5];
  local_110[2] = s_RICHED20_DLL_0055561c[6];
  local_110[3] = s_RICHED20_DLL_0055561c[7];
  local_114[0] = s_RICHED20_DLL_0055561c[0];
  local_114[1] = s_RICHED20_DLL_0055561c[1];
  local_114[2] = s_RICHED20_DLL_0055561c[2];
  local_114[3] = s_RICHED20_DLL_0055561c[3];
  local_10c[0] = s_RICHED20_DLL_0055561c[8];
  local_10c[1] = s_RICHED20_DLL_0055561c[9];
  local_10c[2] = s_RICHED20_DLL_0055561c[10];
  local_10c[3] = s_RICHED20_DLL_0055561c[0xb];
  local_108 = s_RICHED20_DLL_0055561c[0xc];
  DAT_0057724c = LoadLibraryA(local_114);
  pvVar1 = GlobalAlloc(0x40,0x38);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    puVar3 = (undefined4 *)FUN_004056a0();
    if (puVar3 != (undefined4 *)0x0) {
      pvVar1 = GlobalAlloc(0x40,0x10);
      pvVar2 = GlobalLock(pvVar1);
      if (pvVar2 != (LPVOID)0x0) {
        iVar4 = FUN_00546ba0();
        if (iVar4 != 0) {
          FUN_00545f80("SfTrans1");
          FUN_00545f80("Version 1.0");
          *(undefined4 *)(iVar4 + 0xc) = 0x1000001;
          iVar4 = FUN_00546c00(param_1,iVar4);
          if (iVar4 < 0) {
            DAT_00577248 = DAT_00622478[4];
            return 0;
          }
          DAT_00577248 = DAT_00622478[4];
          return 1;
        }
      }
      (**(code **)*puVar3)(1);
    }
  }
  return 0;
}


