/* Module: pncrt.dll
   Function: FUN_78033200
   Address: 78033200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78033200(uint *param_1,char param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 3 << (param_2 * '\x02' & 0x1fU);
  *param_1 = param_3 << (param_2 * '\x02' & 0x1fU) & uVar1 | *param_1 & ~uVar1;
  return;
}


