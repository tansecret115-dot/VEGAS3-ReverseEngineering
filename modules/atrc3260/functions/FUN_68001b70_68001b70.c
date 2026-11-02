/* Module: atrc3260.dll
   Function: FUN_68001b70
   Address: 68001b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_68001b70(void *this,undefined4 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  short sVar3;
  void *this_00;
  undefined4 *this_01;
  FARPROC pFVar4;
  uint uVar5;
  uint local_18;
  short local_14;
  short local_12;
  short local_10;
  int local_8;
  
  pbVar2 = *(byte **)((int)param_1 + 0x16);
  if (pbVar2 != (byte *)0x0) {
    local_18 = (uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 |
               (uint)pbVar2[3];
    local_14 = CONCAT11(pbVar2[4],pbVar2[5]);
    local_12 = CONCAT11(pbVar2[6],pbVar2[7]);
    local_10 = CONCAT11(pbVar2[8],pbVar2[9]);
  }
  if (local_18 != 4) {
    return -0x7ffbfffb;
  }
  if (*(int *)((int)this + 0x2a) == 0) {
    this_00 = operator_new(0x18);
    if (this_00 == (void *)0x0) {
      this_01 = (undefined4 *)0x0;
    }
    else {
      this_01 = FUN_68002c70(this_00,s_tokr3260_dll_68005068,2);
    }
    *(undefined4 **)((int)this + 0x2a) = this_01;
    if (this_01 == (undefined4 *)0x0) {
      return -0x7ffbfff1;
    }
    if (this_01[1] != 0) {
      return -0x7ffbfff1;
    }
    pFVar4 = FUN_68002ec0(this_01,s_OpenDecoder_6800505c);
    *(FARPROC *)((int)this + 0x3a) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2a),s_CloseDecoder_6800504c);
    *(FARPROC *)((int)this + 0x3e) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2a),s_tkInitDecoder_6800503c);
    *(FARPROC *)((int)this + 0x4a) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2a),s_tkDecode_68005030);
    *(FARPROC *)((int)this + 0x4e) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2a),s_tkFreeDecoder_68005020);
    *(FARPROC *)((int)this + 0x52) = pFVar4;
  }
  *(uint *)((int)this + 0x26) = (uint)*(ushort *)((int)param_1 + 6);
  uVar5 = *(uint *)((int)param_1 + 0xe);
  *(uint *)((int)this + 6) = uVar5;
  uVar5 = uVar5 / *(uint *)((int)param_1 + 10);
  *(uint *)((int)this + 0x22) = *(uint *)((int)param_1 + 10);
  *(undefined4 *)((int)this + 0x12) = 3;
  *(uint *)((int)this + 0x1e) = uVar5;
  *(uint *)((int)this + 2) = uVar5 * (int)local_14;
  *(int *)((int)this + 0xe) = (int)local_12;
  *(int *)((int)this + 10) = (int)local_12 * *(int *)((int)this + 0x26) * 2;
  piVar1 = (int *)((int)this + 0x32);
  if (*piVar1 == 0) {
    if (*(code **)((int)this + 0x3a) == (code *)0x0) {
      return -0x7ffbfff1;
    }
    sVar3 = (**(code **)((int)this + 0x3a))(piVar1);
    if (sVar3 != 0) {
      return -0x7fffbffb;
    }
  }
  local_8 = 0;
  if (*(code **)((int)this + 0x4a) != (code *)0x0) {
    sVar3 = (**(code **)((int)this + 0x4a))
                      (*piVar1,(int)local_14,*(undefined4 *)((int)this + 0x26),(int)local_10,
                       *(int *)((int)this + 0x22) << 3,*param_1);
    local_8 = (int)sVar3;
  }
  return local_8;
}


