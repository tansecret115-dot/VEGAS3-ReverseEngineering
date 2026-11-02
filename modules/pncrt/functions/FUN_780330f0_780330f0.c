/* Module: pncrt.dll
   Function: FUN_780330f0
   Address: 780330f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780330f0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_2 + 4) >> 0xb & 7) + param_3;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    iVar1 = param_2 + iVar1 * -10;
    *param_1 = *(undefined4 *)(iVar1 + 0x62);
    param_1[1] = *(undefined4 *)(iVar1 + 0x66);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar1 + 0x6a);
    return;
  }
  *param_1 = DAT_78042720;
  param_1[1] = DAT_78042724;
  *(undefined2 *)(param_1 + 2) = DAT_78042728;
  return;
}


