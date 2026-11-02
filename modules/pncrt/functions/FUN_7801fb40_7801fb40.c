/* Module: pncrt.dll
   Function: FUN_7801fb40
   Address: 7801fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7801fb40(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&_mbctype + (param_1 & 0xff) + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_7803f56a + (param_1 & 0xff) * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


