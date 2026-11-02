/* Module: vegas30.exe
   Function: FUN_0058b230
   Address: 0058b230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0058b264) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0058b230(int param_1,LPCVOID param_2)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD local_218 [3];
  DWORD local_20c;
  int local_208;
  int local_204;
  undefined4 local_200 [128];
  
  local_204 = FUN_0058a580(param_1);
  uVar2 = *(ushort *)((int)param_2 + 0x10) + 0x12;
  local_20c = uVar2 + (uVar2 & 0x80000001);
  local_208 = local_204 + 0x1f8;
  local_218[2] = 0x1dc - local_20c;
  puVar4 = local_200;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0x200;
  local_218[1] = 0x46464952;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_218 + 1,4,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_208,4,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  local_218[1] = 0x45564157;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_218 + 1,4,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  local_218[1] = 0x20746d66;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_218 + 1,4,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_20c,4,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),param_2,local_20c,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  local_218[1] = 0x4b4e554a;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_218 + 1,4,local_218,(LPOVERLAPPED)0x0);
  if (BVar1 != 0) {
    BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_218 + 2,4,local_218,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      return -0x7ffb1ff7;
    }
    BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_200,local_218[2],local_218,
                      (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_218[1] = 0x61746164;
      BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_218 + 1,4,local_218,(LPOVERLAPPED)0x0);
      if (BVar1 != 0) {
        BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_204,4,local_218,(LPOVERLAPPED)0x0);
        return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
      }
      return -0x7ffb1ff7;
    }
    return -0x7ffb1ff7;
  }
  return -0x7ffb1ff7;
}


