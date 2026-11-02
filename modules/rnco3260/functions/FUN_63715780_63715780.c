/* Module: rnco3260.dll
   Function: FUN_63715780
   Address: 63715780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63715780(byte *param_1,int param_2,int param_3,int param_4,ushort *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = param_4;
  local_8 = param_6 >> 1;
  if (param_4 != 0) {
    iVar4 = param_3 - (int)param_1;
    iVar1 = param_2 - (int)param_1;
    do {
      uVar2 = (uint)*param_5;
      uVar3 = (uint)(byte)(&DAT_63795aa0)
                          [((uVar2 & 0x3c0) >> 1 | uVar2 & 0x1e) >> 1 | ((uVar2 & 0x7800) >> 7) << 4
                          ];
      param_1[iVar4] =
           (&DAT_63795aa0)
           [((uVar2 & 0x3c0) >> 1 | uVar2 & 0x1e) >> 1 | ((uVar2 & 0x7800) >> 7) << 4];
      uVar2 = (uint)*param_1;
      param_1 = param_1 + 1;
      param_1[iVar1 + -1] =
           (&DAT_63795aa0)
           [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) +
                  (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0x1e0 |
                 (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2)) >> 4) >> 1 |
            ((uint)*(byte *)(&DAT_637956a0 + uVar2) + (uint)*(byte *)(&DAT_637956a0 + uVar3) & 0x1e0
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


