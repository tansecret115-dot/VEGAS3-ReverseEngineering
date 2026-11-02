/* Module: sfmarket2.dll
   Function: FUN_00435260
   Address: 00435260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_00435260(void *this,uint param_1,int param_2)

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
  uVar1 = *(uint *)((int)this + 0x18);
  for (iVar3 = 0xe; pDVar4 = (DWORD *)((int)pDVar4 + 4), iVar3 != 0; iVar3 = iVar3 + -1) {
    *pDVar4 = 0;
  }
  local_a44[2] = *(undefined4 *)((int)this + 0x898);
  local_a44[4] = *(undefined4 *)((int)this + 0x89c);
  local_a44[1] = 0xc054d55;
  local_a2c = uVar1 - param_1;
  local_a44[3] = 0;
  local_a28 = (*(int *)((int)this + 0x1c) - param_2) - (uint)(uVar1 < param_1);
  local_a24 = param_1;
  local_a20 = param_2;
  local_a30 = local_a44[4];
  local_a14 = lstrlenA((LPCSTR)((int)this + 0x68));
  local_a10 = lstrlenA((LPCSTR)((int)this + 0x468));
  local_a18 = *(undefined4 *)((int)this + 0x894);
  local_a1c = *(undefined4 *)((int)this + 0x890);
  local_a44[0] = 0;
  BVar2 = WriteFile(*(HANDLE *)((int)this + 0xc),local_a44 + 1,0x38,local_a44,(LPOVERLAPPED)0x0);
  uVar1 = *(uint *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar1 + local_a44[0];
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar1,local_a44[0]);
  if (BVar2 != 0) {
    if (0 < local_a14) {
      MultiByteToWideChar(0,1,(LPCSTR)((int)this + 0x68),-1,local_800,0x400);
      local_2 = 0;
      BVar2 = WriteFile(*(HANDLE *)((int)this + 0xc),local_800,local_a14 * 2,local_a44,
                        (LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_004353f6;
      uVar1 = *(uint *)((int)this + 0x18);
      *(uint *)((int)this + 0x18) = uVar1 + local_a44[0];
      *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar1,local_a44[0]);
    }
    if (0 < local_a10) {
      MultiByteToWideChar(0,1,(LPCSTR)((int)this + 0x468),-1,local_a08,0x104);
      local_802 = 0;
      BVar2 = WriteFile(*(HANDLE *)((int)this + 0xc),local_a08,local_a10 * 2,local_a44,
                        (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
LAB_004353f6:
        FUN_004390e0(this,0xaaaaaaa9,(uchar *)"AddEndOfCentralDir",(uchar *)0x0);
        return 0x8004e009;
      }
      uVar1 = *(uint *)((int)this + 0x18);
      *(uint *)((int)this + 0x18) = uVar1 + local_a44[0];
      *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar1,local_a44[0]);
    }
  }
  return 0;
}


