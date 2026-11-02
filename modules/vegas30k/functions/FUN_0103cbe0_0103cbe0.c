/* Module: vegas30k.dll
   Function: FUN_0103cbe0
   Address: 0103cbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0103cbe0(int *param_1)

{
  int *piVar1;
  ushort uVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  LPCSTR pCVar7;
  undefined4 *puVar8;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  if (param_1[0xe0] == 0) {
    hMem = GlobalAlloc(0x40,0xe8);
    pvVar3 = GlobalLock(hMem);
    if (pvVar3 == (LPVOID)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_01135ac0(param_1);
    }
    param_1[0xe0] = iVar4;
  }
  if (param_1[0xda] == 0) {
    local_14 = 1;
    local_12 = 2;
    local_10 = 0xac44;
    local_6 = 0x10;
    local_8 = 4;
    local_c = 0x2b110;
    local_4 = 0;
    (**(code **)(*param_1 + 0x60))(param_1,&local_14,param_1[0xee]);
  }
  if (param_1[0xdb] == 0) {
    param_1[0xdb] = param_1[0xda];
  }
  iVar4 = param_1[0xda];
  piVar1 = param_1 + 0xdc;
  *piVar1 = 4;
  iVar5 = ftol();
  param_1[0xdd] = iVar5;
  param_1[0xdd] = (uint)*(ushort *)(*(int *)(iVar4 + 0x44) + 0xc) * iVar5;
  uVar2 = *(ushort *)(*(int *)(iVar4 + 0x44) + 0xc);
  param_1[0xdf] = 0;
  param_1[0xde] = (uint)uVar2;
  FUN_01135c70(piVar1,piVar1);
  if (param_1[0xe1] == 0) {
    iVar4 = FUN_01135cc0(param_1[0xea],piVar1);
    param_1[0xe1] = iVar4;
  }
  else {
    FUN_01135d70(param_1[0xe1],param_1[0xea],piVar1);
  }
  if (param_1[3] == 0) {
    if (param_1[0xee] == 0) {
      for (iVar4 = param_1[0xe7]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x224)) {
        FUN_01136550();
        FUN_01136410(param_1[0xda],param_1[0xe1]);
        FUN_011364d0(param_1[0xda],param_1[0xe1]);
      }
    }
    else {
      iVar4 = param_1[0xdb];
      if ((iVar4 != 0) && (iVar4 != param_1[0xda])) {
        FUN_01040210(iVar4);
      }
      iVar5 = FUN_010401b0(param_1[0xda]);
      iVar4 = param_1[0xe7];
      param_1[0xdb] = iVar5;
      for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x224)) {
        FUN_01136550();
        FUN_01136410(param_1[0xdb],param_1[0xe1]);
        FUN_011364d0(param_1[0xdb],param_1[0xe1]);
      }
    }
  }
  if (param_1[0xf1] == 0) {
    puVar6 = calloc(1,0x210);
    puVar6[0x83] = 0;
    param_1[0xf1] = (int)puVar6;
    *puVar6 = 0;
    param_1[0xef] = 1;
    param_1[0xf0] = 0;
    pCVar7 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10c3);
    MultiByteToWideChar(0,1,pCVar7,-1,(LPWSTR)(puVar6 + 1),0x100);
    *(undefined2 *)((int)puVar6 + 0x202) = 0;
    puVar8 = calloc(1,0x210);
    puVar6[0x83] = puVar8;
    param_1[0xef] = param_1[0xef] + 1;
    *puVar8 = 1;
    pCVar7 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10c4);
    MultiByteToWideChar(0,1,pCVar7,-1,(LPWSTR)(puVar8 + 1),0x100);
    *(undefined2 *)((int)puVar8 + 0x202) = 0;
    puVar6 = calloc(1,0x210);
    puVar8[0x83] = puVar6;
    param_1[0xef] = param_1[0xef] + 1;
    *puVar6 = 2;
    pCVar7 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10c5);
    MultiByteToWideChar(0,1,pCVar7,-1,(LPWSTR)(puVar6 + 1),0x100);
    *(undefined2 *)((int)puVar6 + 0x202) = 0;
  }
  return 1;
}


