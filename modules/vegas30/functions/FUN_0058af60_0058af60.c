/* Module: vegas30.exe
   Function: FUN_0058af60
   Address: 0058af60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058af60(int param_1,LPCVOID param_2)

{
  uint uVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  longlong lVar9;
  DWORD local_224;
  undefined8 local_220;
  uint local_218;
  uint local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined4 local_200 [128];
  
  local_220 = FUN_0058a580(param_1);
  uVar1 = (uint)local_220;
  uVar6 = *(ushort *)((int)param_2 + 0x10) + 0x2a;
  uVar5 = (uint)(0xffffffd5 < *(ushort *)((int)param_2 + 0x10));
  local_218 = uVar6;
  local_214 = uVar5;
  lVar9 = __allrem(uVar6,uVar5,8,0);
  if (lVar9 != 0) {
    uVar3 = 8 - (uint)lVar9;
    bVar8 = CARRY4(uVar6,uVar3);
    uVar6 = uVar6 + uVar3;
    uVar5 = uVar5 + (-(uint)(8 < (uint)lVar9) - (int)((ulonglong)lVar9 >> 0x20)) + (uint)bVar8;
    local_218 = uVar6;
    local_214 = uVar5;
  }
  local_210 = 0x1c0 - uVar6;
  local_20c = -(uint)(0x1c0 < uVar6) - uVar5;
  local_208 = uVar1 + 0x200;
  local_204 = local_220._4_4_ + (uint)(0xfffffdff < uVar1);
  puVar7 = local_200;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0x200;
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&DAT_00645cd4,0x10,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_208,8,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&DAT_00645ce4,0x10,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&DAT_00645cf4,0x10,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_218,8,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),param_2,local_218 - 0x18,&local_224,
                    (LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&DAT_00645d04,0x10,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_210,8,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),local_200,local_210 - 0x18,&local_224,
                    (LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&DAT_00645d14,0x10,&local_224,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return -0x7ffb1ff7;
  }
  local_220 = local_220 + 0x18;
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x124),&local_220,8,&local_224,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar2 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


