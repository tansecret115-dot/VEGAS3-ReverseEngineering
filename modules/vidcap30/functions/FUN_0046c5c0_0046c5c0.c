/* Module: vidcap30.exe
   Function: FUN_0046c5c0
   Address: 0046c5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0046c5c0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = *param_2;
  uVar2 = uVar1 & 0x3f;
  if (uVar2 != 0) {
    *param_2 = uVar2;
    return (uint)((uVar1 | 0x3f) != 0x3f);
  }
  *param_2 = 0;
  return 0x80004005;
}


