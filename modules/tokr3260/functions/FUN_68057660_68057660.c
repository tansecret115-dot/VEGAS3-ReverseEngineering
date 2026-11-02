/* Module: tokr3260.dll
   Function: FUN_68057660
   Address: 68057660
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_68057660(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (8 < param_3) {
    assert(s_wl_<__8_6805c300,s_coder_huff_c_6805c308,0x3c);
  }
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 << ((byte)param_3 & 0x1f) | uVar1 & *(uint *)(&DAT_6805b148 + param_3 * 4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar2;
}


