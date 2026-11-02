/* Module: sctplug.dll
   Function: FUN_00409aa0
   Address: 00409aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409aa0(uint *param_1,LPSTR param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 >> 0x18;
  wsprintfA(param_2,"%02d%02d%02d",uVar1 >> 0x18,uVar1 >> 0x10 & 0xff,(uVar1 & 0xffff) % 100);
  return;
}


