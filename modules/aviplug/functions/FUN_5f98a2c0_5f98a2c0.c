/* Module: aviplug.dll
   Function: FUN_5f98a2c0
   Address: 5f98a2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f98a2c0(HANDLE param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int *pMem;
  size_t sVar4;
  HGLOBAL pvVar5;
  int *piVar6;
  undefined8 uVar7;
  uint local_c84;
  uint local_c80;
  int local_c7c;
  int local_c78;
  DWORD local_c74;
  undefined4 local_c70;
  undefined4 uStack_c6c;
  int local_c68;
  undefined4 uStack_c64;
  undefined4 local_c60;
  undefined4 uStack_c5c;
  int local_c58;
  undefined4 uStack_c54;
  undefined4 local_c50;
  undefined4 local_c4c;
  int local_c48 [5];
  undefined4 local_c34;
  int local_c30;
  undefined4 local_c2c;
  int local_c1c;
  undefined8 local_c18;
  undefined8 local_c10;
  undefined4 local_c08;
  int local_c04;
  WCHAR local_c00 [1023];
  undefined2 local_402;
  int local_400 [256];
  
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = FUN_5f98e860(param_1,&local_c78,&local_c4c);
  if (iVar1 < 0) {
    return iVar1;
  }
  uVar2 = FUN_5f98e910(param_1,0x20657563,&local_c50,&local_c78);
  if ((int)uVar2 < 0) {
    return 0;
  }
  BVar3 = ReadFile(param_1,&local_c84,4,&local_c74,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return -0x7ffb1ff8;
  }
  if (local_c84 == 0) {
    return 0;
  }
  pMem = FUN_5f98a680(param_1,&local_c7c);
  local_c80 = 0;
  if (local_c84 != 0) {
    while( true ) {
      piVar6 = &local_c1c;
      for (iVar1 = 0x207; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      BVar3 = ReadFile(param_1,local_c48,0x18,&local_c74,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) break;
      if (param_2 == 0) {
        uVar7 = 0;
      }
      else {
        uStack_c6c = 0;
        local_c70 = local_c34;
        local_c58 = param_2;
        uStack_c54 = 0;
        uVar7 = ftol();
      }
      local_c18 = uVar7;
      uVar2 = FUN_5f98a570(pMem,local_c7c,0x6c62616c,local_c48[0],local_400,0x400,(int *)0x0);
      *(undefined1 *)((int)local_400 + uVar2) = 0;
      MultiByteToWideChar(0,1,(LPCSTR)local_400,-1,local_c00,0x400);
      local_402 = 0;
      sVar4 = wcslen(local_c00);
      local_c04 = sVar4 * 2 + 2;
      local_c1c = 0x1c;
      local_c08 = 0;
      uVar2 = FUN_5f98a570(pMem,local_c7c,0x7478746c,local_c48[0],(int *)0x0,0,&local_c30);
      uVar7 = local_c10;
      if (uVar2 == 0) {
        local_c08 = 1;
        if (param_2 == 0) {
          uVar7 = 0;
        }
        else {
          uStack_c5c = 0;
          local_c60 = local_c2c;
          local_c68 = param_2;
          uStack_c64 = 0;
          uVar7 = ftol();
        }
      }
      local_c10 = uVar7;
      iVar1 = FUN_5f979480(param_3,&local_c1c,sVar4 * 2 + 0x1e,-1,(int *)0x0);
      if ((iVar1 < 0) || (local_c80 = local_c80 + 1, local_c84 <= local_c80)) goto LAB_5f98a53e;
    }
    iVar1 = -0x7ffb1ff8;
  }
LAB_5f98a53e:
  if (pMem != (int *)0x0) {
    pvVar5 = GlobalHandle(pMem);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pMem);
    GlobalFree(pvVar5);
  }
  return iVar1;
}


