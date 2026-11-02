/* Module: rnco3260.dll
   Function: FUN_63711390
   Address: 63711390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63711390(byte *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = param_4;
  local_8 = param_6 >> 1;
  if (param_4 != 0) {
    iVar2 = param_3 - (int)param_1;
    iVar4 = param_2 - (int)param_1;
    do {
      uVar3 = *param_5;
      uVar1 = (uint)(byte)(&DAT_63795aa0)
                          [(uVar3 >> 4 & 0xf00 | uVar3 & 0xf0) >> 4 | (uVar3 >> 0x10 & 0xf0) << 4];
      param_1[iVar2] =
           (&DAT_63795aa0)[(uVar3 >> 4 & 0xf00 | uVar3 & 0xf0) >> 4 | (uVar3 >> 0x10 & 0xf0) << 4];
      uVar3 = (uint)*param_1;
      param_1 = param_1 + 1;
      param_1[iVar4 + -1] =
           (&DAT_63795aa0)
           [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) +
                  (uint)*(byte *)((int)&DAT_637956a0 + uVar1 * 4 + 1) & 0x1e0 |
                 (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar1 * 4 + 2)) >> 4) >> 1 |
            ((uint)*(byte *)(&DAT_637956a0 + uVar3) + (uint)*(byte *)(&DAT_637956a0 + uVar1) & 0x1e0
            ) << 3];
      do {
        param_5 = param_5 + 1;
        local_8 = local_8 - param_4;
      } while (-1 < local_8);
      local_8 = local_8 + param_6;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


