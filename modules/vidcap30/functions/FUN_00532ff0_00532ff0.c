/* Module: vidcap30.exe
   Function: FUN_00532ff0
   Address: 00532ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_00532ff0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  DWORD *pDVar4;
  DWORD local_a44 [5];
  undefined4 local_a30;
  int local_a2c;
  int local_a28;
  uint local_a24;
  int local_a20;
  undefined4 local_a1c;
  undefined4 local_a18;
  int local_a14;
  int local_a10;
  WCHAR local_a08 [259];
  undefined2 local_802;
  WCHAR local_800 [1023];
  undefined2 local_2;
  
  pDVar4 = local_a44;
  uVar1 = *(uint *)(param_1 + 0x18);
  for (iVar3 = 0xe; pDVar4 = (DWORD *)((int)pDVar4 + 4), iVar3 != 0; iVar3 = iVar3 + -1) {
    *pDVar4 = 0;
  }
  local_a44[2] = *(undefined4 *)(param_1 + 0x898);
  local_a44[4] = *(undefined4 *)(param_1 + 0x89c);
  local_a44[1] = 0xc054d55;
  local_a2c = uVar1 - param_2;
  local_a44[3] = 0;
  local_a28 = (*(int *)(param_1 + 0x1c) - param_3) - (uint)(uVar1 < param_2);
  local_a24 = param_2;
  local_a20 = param_3;
  local_a30 = local_a44[4];
  local_a14 = lstrlenA((LPCSTR)(param_1 + 0x68));
  local_a10 = lstrlenA((LPCSTR)(param_1 + 0x468));
  local_a18 = *(undefined4 *)(param_1 + 0x894);
  local_a1c = *(undefined4 *)(param_1 + 0x890);
  local_a44[0] = 0;
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_a44 + 1,0x38,local_a44,(LPOVERLAPPED)0x0);
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar1 + local_a44[0];
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar1,local_a44[0]);
  if (BVar2 != 0) {
    if (0 < local_a14) {
      MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x68),-1,local_800,0x400);
      local_2 = 0;
      BVar2 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_800,local_a14 * 2,local_a44,
                        (LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_00533186;
      uVar1 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar1 + local_a44[0];
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar1,local_a44[0]);
    }
    if (0 < local_a10) {
      MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x468),-1,local_a08,0x104);
      local_802 = 0;
      BVar2 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_a08,local_a10 * 2,local_a44,
                        (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
LAB_00533186:
        FUN_00536e70(0xaaaaaaa9,"AddEndOfCentralDir",0);
        return 0x8004e009;
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar1 + local_a44[0];
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar1,local_a44[0]);
    }
  }
  return 0;
}


