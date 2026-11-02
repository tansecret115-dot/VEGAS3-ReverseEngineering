/* Module: sftrkfx1.dll
   Function: FUN_5cc002e0
   Address: 5cc002e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc002e0(uint param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  HKEY local_108;
  CHAR local_104 [260];
  
  FUN_5cbffad0(param_1,0xf7c0ef08,local_104,0x104);
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,local_104,0,0x2001f,&local_108);
  if (LVar1 == 0) {
    *param_2 = local_108;
    return 0;
  }
  return 0x80070005;
}


